#include "testSandbox.h"


#include <stdio.h>

static void  testSandbox_msglist_printf(char *s, char *loc);

/* 
 * Message Reporting Function
 */
static void  testSandbox_msglist_printf(char *s, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("printf:   (");;
  printf("s=%s",(((char *)(s))));
  printf(" ,location=@%s) \n",loc);;
}

int32_t  main(int32_t argc, char *(argv[])) 
{
  testSandbox_msglist_printf("Hello, World!", "testSandbox:main?r:e38c5a7d-053a-4d8e-9b2a-20d2c425018a(BSML.sandbox)#6401416779521090545");
  
  return 0;
}

