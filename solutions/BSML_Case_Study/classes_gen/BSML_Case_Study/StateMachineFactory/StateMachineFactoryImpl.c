#include "StateMachineFactoryImpl.h"


#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <glib.h>




static GMutex StateMachineFactoryImpl_mutex;

int32_t  main(int32_t argc, char *(argv[])) 
{
  int32_t *sm = NULL;
  int32_t ret_single;
  int32_t ret_multi;
  g_mutex_lock(&StateMachineFactoryImpl_mutex);
  
  g_mutex_lock(&StateMachineFactoryImpl_mutex);
  
  
  return 0;
}

