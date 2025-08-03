#include <3ds.h>
#include <stdio.h>

int main() {
    gfxInitDefault();
    PrintConsole topScreen;
    consoleInit(GFX_TOP, &topScreen);

    printf("Hello from Milo's 3DS!");

    while (aptMainLoop()) {
        hidScanInput();
        u32 kDown = hidKeysDown();
        if (kDown & KEY_START) break; // Exit when START is pressed
        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
