#ifndef GROUNDTRAFFICCONTROLIMPL_H
#define GROUNDTRAFFICCONTROLIMPL_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

#define GROUNDTRAFFICCONTROLIMPL_MAX_TEST_ROUND (1000000)
#define GROUNDTRAFFICCONTROLIMPL_PLANE_NUM (16)
typedef void ((*(GroundTrafficControlImpl_BindingRef))(void **));
typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__req_takeoff,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__req_land,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__req_taxi,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__req_crossRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_takeoffonRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_takeoffonRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_landonRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_landonRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_enterTW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_enterTW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_enterTW3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__ack_crossRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__complete_crossRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__complete_lanonRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__complete_takeoffonRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__complete_lanonRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__complete_takeoffonRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__exitTW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__exitTW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__exitTW3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_EventEnum___sm_terminate_b
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__LandingOnRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__Taxiing,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__Clear,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__Takeoff,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__Landing,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__Clear,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__Takeoff,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__Landing,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__InUse,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__CrossingRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__CrossedRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__InUse,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__CrossingRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__CrossedRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__InUse,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__CrossingRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_StateEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__CrossedRW2
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_RegionEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t4,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t5,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t6,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t7,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t8,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t9,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__AirpoortController__t10,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t4,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t5,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t6,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW1__t7,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t4,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t5,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t6,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__RunwayRW2__t7,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW1__t4,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW2__t4,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__GTC_TransEnum__GroundTrafficControlImpl__GTC__main__mainState__TaxiwayTW3__t4
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__trigger,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__req_takeoff,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__req_land,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__req_taxi,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__req_crossRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_takeoffonRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_takeoffonRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_landonRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_landonRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_enterTW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_enterTW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_enterTW3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__ack_crossRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__complete_crossingRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__complete_landingRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__complete_landingRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__complete_takeoffRW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__complete_takeoffRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__exitTW1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__exitTW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum__GroundTrafficControlImpl__AirPlane__main__exitTW3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_EventEnum___sm_terminate_j
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum__GroundTrafficControlImpl__AirPlane__main__Idle,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum__GroundTrafficControlImpl__AirPlane__main__Flying,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum__GroundTrafficControlImpl__AirPlane__main__Landing,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum__GroundTrafficControlImpl__AirPlane__main__Taxiing,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum__GroundTrafficControlImpl__AirPlane__main__CrossingRW2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_StateEnum__GroundTrafficControlImpl__AirPlane__main__CrossedRW2
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_RegionEnum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_RegionEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_RegionEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_RegionEnum__GroundTrafficControlImpl__AirPlane__main
};

typedef enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum_t;
enum GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum{
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t1,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t2,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t3,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t4,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t5,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t6,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t7,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t8,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t9,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t10,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t11,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t12,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t13,
  GroundTrafficControlImpl_GroundTrafficControlImpl__AirPlane_TransEnum__GroundTrafficControlImpl__AirPlane__main__t14
};

int32_t  GroundTrafficControlImpl_main(int32_t argc, char *(argv[]));

void  GroundTrafficControlImpl_sm_msg_SM_initialized(char *name, char *loc);

void  GroundTrafficControlImpl_sm_msg_transition_occur(char *trans_id, char *from, char *to, char *loc);

void  GroundTrafficControlImpl_sm_msg_trans_enabled(uint32_t num, char *loc);

void  GroundTrafficControlImpl_sm_msg_start_big_step(char *loc);

void  GroundTrafficControlImpl_sm_msg_end_big_step(char *loc);

void  GroundTrafficControlImpl_sm_msg_start_small_step(char *loc);

void  GroundTrafficControlImpl_sm_msg_end_small_step(char *loc);

void  GroundTrafficControlImpl_sm_msg_other(char *info, char *loc);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
