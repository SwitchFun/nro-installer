#include <string.h>
#include <stdio.h>
#include <switch.h>

void install(){
rename("sdmc:/installer/nro.nro", "sdmc:/switch/homebrew.nro");
printf("done");
}

int main(int argc, char **argv)
{
  //Copyright 2019 SwitchFun 
  //lmao

  consoleInit(NULL);

    printf("cuz idc, press A to install the nro from sdmc:/installer/nro.nro to switch ok thanks\n");

    while(appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if(kDown & KEY_A) install();
        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
