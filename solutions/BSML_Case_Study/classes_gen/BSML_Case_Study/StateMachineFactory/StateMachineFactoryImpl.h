#ifndef STATEMACHINEFACTORYIMPL_H
#define STATEMACHINEFACTORYIMPL_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

typedef void ((*(StateMachineFactoryImpl_BindingRef))(void **));
typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum__StateMachineFactoryImpl__SMFactory__main__set_instance,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genSingleton__get_singleton,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genNonsingleton__get_nonsingleton,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_EventEnum___sm_terminate_c
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum__StateMachineFactoryImpl__SMFactory__main__mainState,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genSingleton__off,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genSingleton__on,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_StateEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genNonsingleton__any
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_RegionEnum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_RegionEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_RegionEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_RegionEnum__StateMachineFactoryImpl__SMFactory__main,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_RegionEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genSingleton,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_RegionEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genNonsingleton
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_TransEnum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_TransEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_TransEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_TransEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genSingleton__t1,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_TransEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genSingleton__t2,
  StateMachineFactoryImpl_StateMachineFactoryImpl__SMFactory_TransEnum__StateMachineFactoryImpl__SMFactory__main__mainState__genNonsingleton__t1
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_EventEnum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_EventEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_EventEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_EventEnum__StateMachineFactoryImpl__NonSingleton__main__e,
  StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_EventEnum___sm_terminate_d
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_StateEnum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_StateEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_StateEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_StateEnum__StateMachineFactoryImpl__NonSingleton__main__AnyState
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_RegionEnum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_RegionEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_RegionEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_RegionEnum__StateMachineFactoryImpl__NonSingleton__main
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_TransEnum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_TransEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_TransEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__NonSingleton_TransEnum__StateMachineFactoryImpl__NonSingleton__main__t1
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_EventEnum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_EventEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_EventEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_EventEnum__StateMachineFactoryImpl__Singleton__main__e,
  StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_EventEnum___sm_terminate_e
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_StateEnum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_StateEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_StateEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_StateEnum__StateMachineFactoryImpl__Singleton__main__AnyState
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_RegionEnum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_RegionEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_RegionEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_RegionEnum__StateMachineFactoryImpl__Singleton__main
};

typedef enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_TransEnum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_TransEnum_t;
enum StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_TransEnum{
  StateMachineFactoryImpl_StateMachineFactoryImpl__Singleton_TransEnum__StateMachineFactoryImpl__Singleton__main__t1
};

int32_t  StateMachineFactoryImpl_main(int32_t argc, char *(argv[]));

void  StateMachineFactoryImpl_sm_msg_SM_initialized(char *name, char *loc);

void  StateMachineFactoryImpl_sm_msg_transition_occur(char *trans_id, char *from, char *to, char *loc);

void  StateMachineFactoryImpl_sm_msg_trans_enabled(uint32_t num, char *loc);

void  StateMachineFactoryImpl_sm_msg_start_big_step(char *loc);

void  StateMachineFactoryImpl_sm_msg_end_big_step(char *loc);

void  StateMachineFactoryImpl_sm_msg_start_small_step(char *loc);

void  StateMachineFactoryImpl_sm_msg_end_small_step(char *loc);

void  StateMachineFactoryImpl_sm_msg_other(char *info, char *loc);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
