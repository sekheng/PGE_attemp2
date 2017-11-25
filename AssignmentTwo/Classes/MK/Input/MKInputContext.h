#ifndef MK_INPUTCONTEXT_H
#define MK_INPUTCONTEXT_H

// Include MK
#include "../Common/MKMacros.h"

NS_MK_BEGIN

#define MK_CONTEXT_NONE 0x0000
#define MK_CONTEXT_ALL 0xFFFF

// THERE CAN ONLY BE A MAXIMUM OF 16 UNIQUE CONTEXTS DUE TO A 16 BIT LIMIT!
enum MKInputContext
{
	MK_CONTEXT_DEFAULT = 0x0001,
	MK_CONTEXT1 = MK_CONTEXT_DEFAULT,
	MK_CONTEXT2 = 0x0002,
	MK_CONTEXT3 = 0x0004,
	MK_CONTEXT4 = 0x0008,
	MK_CONTEXT5 = 0x0010,
	MK_CONTEXT6 = 0x0020,
	MK_CONTEXT7 = 0x0040,
	MK_CONTEXT8 = 0x0080,
	MK_CONTEXT9 = 0x0100,
	MK_CONTEXT10 = 0x0200,
	MK_CONTEXT11 = 0x0400,
	MK_CONTEXT12 = 0x0800,
	MK_CONTEXT13 = 0x1000,
	MK_CONTEXT14 = 0x2000,
	MK_CONTEXT15 = 0x4000,
	MK_CONTEXT16 = 0x8000,
};

NS_MK_END

#endif