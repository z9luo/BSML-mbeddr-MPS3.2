#include "DiallerSystemImpl.h"


#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>


static void  DiallerSystemImpl_mgs_number_dialed(uint8_t digit, char *loc);

static void  DiallerSystemImpl_handle_dial(uint8_t d);

static uint8_t  DiallerSystemImpl_digit(uint64_t lp, uint8_t digit);

static uint8_t  DiallerSystemImpl_num_of_digits(uint64_t lp);

static bool  DiallerSystemImpl_limit(void);

static void  DiallerSystemImpl_test_dial(void);

static void  DiallerSystemImpl_test_redial(void);

static void  DiallerSystemImpl_test_limit(void);

static bool DiallerSystemImpl_env_limit;

static GMutex DiallerSystemImpl_access_env;

/* 
 * Message Reporting Function
 */
static void  DiallerSystemImpl_mgs_number_dialed(uint8_t digit, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("number_dialed: A digit is dialed (");;
  printf("digit=%d",(((uint8_t )(digit))));
  printf(" ,location=@%s) \n",loc);;
}

static void  DiallerSystemImpl_handle_dial(uint8_t d) 
{
  DiallerSystemImpl_mgs_number_dialed(d, "DiallerSystemImpl:handle_dial?r:981056cd-b552-4d53-81ef-e7aaecb64180(BSML_Case_Study.DiallerSystem)#5336752275647659487");
  
}

static uint8_t  DiallerSystemImpl_digit(uint64_t lp, uint8_t digit) 
{
  uint8_t num = DiallerSystemImpl_num_of_digits(lp);
  while (num-- != digit)
  {
    lp /= 10;
  }
  return ((uint8_t )((lp % 10)));
}

static uint8_t  DiallerSystemImpl_num_of_digits(uint64_t lp) 
{
  uint8_t ret = 1;
  while ((lp /= 10) != 0)
  {
    ret++;
  }
  return ret;
}

static bool  DiallerSystemImpl_limit(void) 
{
  g_mutex_lock(&DiallerSystemImpl_access_env);
  bool ret = DiallerSystemImpl_env_limit;
  g_mutex_unlock(&DiallerSystemImpl_access_env);
  return ret;
}

static void  DiallerSystemImpl_test_dial(void) 
{
  int32_t *sm = NULL;
  
  
  
  
  
  
  
  
  
  
  /* 
   * only the first 10 digits can be dialed before han up.
   * expected result: 1234598765
   */

  
  
  
  
  
  
  
  
  
  
  
  
}

static void  DiallerSystemImpl_test_redial(void) 
{
  int32_t *sm = NULL;
  
  
  
  
  
  
  
  
  
  
  
  
  
}

static void  DiallerSystemImpl_test_limit(void) 
{
  DiallerSystemImpl_env_limit = false;
  int32_t *sm = NULL;
  
  
  
  
  
  
  
  
  
  sleep(1);
  g_mutex_lock(&DiallerSystemImpl_access_env);
  DiallerSystemImpl_env_limit = true;
  g_mutex_unlock(&DiallerSystemImpl_access_env);
  
  
  /* 
   * the last digit is not dialed
   * expected result: 123459876
   */

}

int32_t  main(int32_t argc, char *(argv[])) 
{
  DiallerSystemImpl_test_limit();
  return 0;
}

