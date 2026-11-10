#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02107000[]; /* SDK_AUTOLOAD_LIST */
extern char data_02107018[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02106a20[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02107000,
    (void *) data_02107018,
    (void *) data_02106a20,
    (void *) data_02106a20,
    (void *) 0x021dace0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x04007531, /* SDK version 4.0.30001 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
