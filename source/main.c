#include "ps4.h"

int _main(void) {
  // Init and resolve libraries
  initKernel();
  initLibc();
  jailbreak();

  // Pop-up notifications to show
  printf_notification("PS4 Show Notify by GamerHack");
  
  sceKernelSleep(1); 
  printf_notification("This is an Example");
  
  sceKernelSleep(1); 
  printf_notification("This is another Example");
  
  sceKernelSleep(1); 
  printf_notification("This is all, Bye!");
  return 0;
  }