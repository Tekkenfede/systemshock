
#include <Carbon/Carbon.h>

// Stub out all of the functions that we haven't implemented yet!

Boolean				gTuneDone;

void HideCursor(void) { }
void SS_ShowCursor(void) { }
ushort GetOSEvent(short eventMask,EventRecord *theEvent) { return false; }

void AdvanceProgress(void) { }

void DisposHandle(void *h) { }

void BlitLargeAlign(uchar *draw_buffer, int dstRowBytes, void *dstPtr, long w, long h, long modulus) { }
void BlitLargeAlignSkip(uchar *draw_buffer, int dstRowBytes, void *dstPtr, long w, long h, long modulus) { }
