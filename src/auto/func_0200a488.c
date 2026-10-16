/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200a488 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_0200a488.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200856c(void);
extern void func_02008580(int state);
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
void func_0200a488(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_0200856c();
    tail  = data_02106f20.reservedTail;

    if (tail == 0) {
        data_02106f20.reservedHead = command;
        data_02106f20.reservedTail = command;
    } else {
        tail->next                 = command;
        data_02106f20.reservedTail = command;
    }
    command->next = 0;
    func_02008580(state);
}
