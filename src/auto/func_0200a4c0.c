/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_FlushCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/SND_FlushCommand.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_02106f20;
extern SNDCommand *data_02106f44[8];
extern SNDCommand data_02107200[0x100];
extern int func_0200856c(void);
extern void func_02008580(int state);
extern void func_0200701c(void *address, unsigned int size);
extern SNDCommand *func_0200a2f0(int block);
extern int func_0200b0a0(int channel, unsigned int data, int err);
extern void func_0200a87c(void);
int func_0200a4c0(unsigned int flags) {
    int state = func_0200856c();

    if (data_02106f20.reservedHead == 0) {
        func_02008580(state);
        return 1;
    }

    if (data_02106f20.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_02008580(state);
            return 0;
        }
        do {
            func_0200a2f0(1);
        } while (data_02106f20.sentBlockCount >= 8);
        if (data_02106f20.reservedHead == 0) {
            func_02008580(state);
            return 1;
        }
    }

    func_0200701c(data_02107200, sizeof(data_02107200));

    if (func_0200b0a0(7, (unsigned int) data_02106f20.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_02008580(state);
            return 0;
        }
        while (data_02106f20.sentBlockCount >= 8 || func_0200b0a0(7, (unsigned int) data_02106f20.reservedHead, 0) < 0) {
            func_02008580(state);
            func_0200a2f0(0);
            state = func_0200856c();
            func_0200701c(data_02107200, sizeof(data_02107200));
            if (data_02106f20.reservedHead == 0) {
                func_02008580(state);
                return 1;
            }
        }
    }

    data_02106f44[data_02106f20.sentRingIndex] = data_02106f20.reservedHead;
    data_02106f20.sentRingIndex++;
    if (data_02106f20.sentRingIndex > 8) {
        data_02106f20.sentRingIndex = 0;
    }
    data_02106f20.reservedHead = 0;
    data_02106f20.reservedTail = 0;
    data_02106f20.sentBlockCount++;
    data_02106f20.nextTag++;
    func_02008580(state);

    if ((flags & 2) != 0) {
        func_0200a87c();
    }
    return 1;
}
