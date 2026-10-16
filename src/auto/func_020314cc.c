/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqParam {
    u32 fileId;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
} UnkSndSeqParam;
typedef struct UnkSndSeqData {
    u8 unk_00[0x18];
    u32 dataOffset;
} UnkSndSeqData;
extern int func_02030a78(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_0202f164(void *handle, int playerNo, int prio);
extern void func_0202f1fc(void *seqPlayer);
extern void func_0202f208(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *func_0202f2cc(int playerNo, void *seqPlayer);
extern void func_0202ee80(void *handle, int volume);
extern void func_0202ee94(void *handle, int prio);
extern void func_0202eef8(void *handle, int seqArcNo, int index);
extern BOOL func_020314cc(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                          int seqArcNo, int index);

/* func_020759e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
BOOL func_020314cc(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                   int seqArcNo, int index) {
    void *seqPlayer;
    void *heap;
    void *bank;

    seqPlayer = func_0202f164(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = func_0202f2cc(playerNo, seqPlayer);

    if (func_02030a78(bankNo, 6, heap, 0, &bank) != 0) {
        func_0202f1fc(seqPlayer);
        return 0;
    }

    func_0202f208(seqPlayer, (u8 *) seqArc + seqArc->dataOffset, param->fileId, bank);
    func_0202ee80(handle, param->volume);
    func_0202ee94(handle, param->channelPrio);
    func_0202eef8(handle, seqArcNo, index);
    return 1;
}
