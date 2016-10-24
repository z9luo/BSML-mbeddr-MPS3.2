#include "DiallerSystemImpl.h"


#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

typedef struct DiallerSystemImpl__Event DiallerSystemImpl__Event_t;
struct DiallerSystemImpl__Event {
  uint32_t type;
  void **args;
  bool has_in_syntax;
  bool has_out_syntax;
  bool has_renzd_syntax;
  gint small_step_count;
};

typedef DiallerSystemImpl__Event_t DiallerSystemImpl_Event;
typedef GPtrArray DiallerSystemImpl_EnvInput;
typedef struct DiallerSystemImpl_SMHandle DiallerSystemImpl_SMHandle_t;
struct DiallerSystemImpl_SMHandle {
  GThread *instance;
  GAsyncQueue *queue;
};

typedef gpointer ((*(DiallerSystemImpl_SMStartRef))(gpointer ));
typedef struct DiallerSystemImpl__BindingCall DiallerSystemImpl__BindingCall_t;
struct DiallerSystemImpl__BindingCall {
  DiallerSystemImpl_BindingRef func;
  void **args;
  gint small_step_count;
  bool event_as_trigger;
};

typedef DiallerSystemImpl__BindingCall_t DiallerSystemImpl_BindingCall;
typedef enum DiallerSystemImpl_Dummp_Enum DiallerSystemImpl_Dummp_Enum_t;
enum DiallerSystemImpl_Dummp_Enum{
  DiallerSystemImpl_Dummp_Enum__a_dummy_enum
};

typedef struct DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t;
struct DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static {
  bool are_regions_orthogonal[4][4];
  gint compare_elements_hier_parent[10][10];
  gint compare_elements_hier_child[10][10];
  bool trans_interrupt[20][11];
  bool event_as_action[5];
  bool event_as_trigger[5];
};

typedef struct DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t;
struct DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct {
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t DiallerSystemImpl__DiallerSystem__main____cur_state;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state;
  uint8_t DiallerSystemImpl__DiallerSystem__main__c;
  uint64_t DiallerSystemImpl__DiallerSystem__main__lp;
  uint64_t DiallerSystemImpl__DiallerSystem__main__last_lp;
  uint64_t DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__p;
  GPtrArray *bindings;
  DiallerSystemImpl_Event *(present_events[4]);
  bool region_disabled[3];
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t *static_info;
  gint small_step_count;
};

typedef void ((*(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_smblock))(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *,DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *,DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *));
typedef struct DiallerSystemImpl__CurStateSet_DiallerSystemImpl__DiallerSystem DiallerSystemImpl__CurStateSet_DiallerSystemImpl__DiallerSystem_t;
struct DiallerSystemImpl__CurStateSet_DiallerSystemImpl__DiallerSystem {
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t *__cur_state;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t new_cur_state_value;
};

typedef DiallerSystemImpl__CurStateSet_DiallerSystemImpl__DiallerSystem_t DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem;
typedef struct DiallerSystemImpl__DiallerSystemImpl__DiallerSystem_Transition DiallerSystemImpl__DiallerSystemImpl__DiallerSystem_Transition_t;
struct DiallerSystemImpl__DiallerSystemImpl__DiallerSystem_Transition {
  GPtrArray *cur_state_sets;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum_t trans_enum;
  char *trans_name;
  char *source_state;
  char *target_state;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_smblock action_ref;
  GPtrArray *entry_refs;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum_t source_region_enum;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum_t target_region_enum;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum_t arena_enum;
  bool enter_stable_state;
  guint priority;
  bool regions_need_disabled[3];
  guint textual_order;
  gint hier_compare_enum;
  bool is_interrupted;
};

typedef DiallerSystemImpl__DiallerSystemImpl__DiallerSystem_Transition_t DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition;
static void  DiallerSystemImpl_mgs_number_dialed(uint8_t digit, char *loc);

static void  DiallerSystemImpl_handle_dial(uint8_t d);

static uint8_t  DiallerSystemImpl_digit(uint64_t lp, uint8_t digit);

static uint8_t  DiallerSystemImpl_num_of_digits(uint64_t lp);

static bool  DiallerSystemImpl_limit(void);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__t8(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__t9(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Max(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Max(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Max(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_init_snapshot_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot);

static void  DiallerSystemImpl_big_step_start_block_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_big_step_end_block_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_handle_transition(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans);

static void  DiallerSystemImpl_execute_big_step_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static gpointer  DiallerSystemImpl_sm_start_DiallerSystemImpl__DiallerSystem(gpointer queue);

static void  DiallerSystemImpl_test_dial(void);

static void  DiallerSystemImpl_test_redial(void);

static void  DiallerSystemImpl_test_limit(void);

static DiallerSystemImpl_Event *  DiallerSystemImpl_create_event(uint32_t type, void **args, bool has_in_syntax, bool has_out_syntax, bool has_renzd_syntax, gint small_step_count);

static void  DiallerSystemImpl_reset_pointer_array(void **data, uint32_t length);

static void  DiallerSystemImpl_free_pointer_array(void **data, uint32_t length);

static DiallerSystemImpl_SMHandle_t *  DiallerSystemImpl_create_sm_instance(DiallerSystemImpl_SMStartRef sm_start);

static void  DiallerSystemImpl_handle_dial____proxy(void **args);

static void  DiallerSystemImpl_digit____proxy(void **args);

static void  DiallerSystemImpl_num_of_digits____proxy(void **args);

static void  DiallerSystemImpl_limit____proxy(void **args);

static void  DiallerSystemImpl_test_dial____proxy(void **args);

static void  DiallerSystemImpl_test_redial____proxy(void **args);

static void  DiallerSystemImpl_test_limit____proxy(void **args);

static void  DiallerSystemImpl_g_thread_new____proxy(void **args);

static void  DiallerSystemImpl_g_thread_join____proxy(void **args);

static void  DiallerSystemImpl_g_thread_exit____proxy(void **args);

static void  DiallerSystemImpl_g_mutex_init____proxy(void **args);

static void  DiallerSystemImpl_g_mutex_clear____proxy(void **args);

static void  DiallerSystemImpl_g_mutex_lock____proxy(void **args);

static void  DiallerSystemImpl_g_mutex_unlock____proxy(void **args);

static void  DiallerSystemImpl_g_mutex_trylock____proxy(void **args);

static void  DiallerSystemImpl_malloc____proxy(void **args);

static void  DiallerSystemImpl_free____proxy(void **args);

static void  DiallerSystemImpl_calloc____proxy(void **args);

static void  DiallerSystemImpl_realloc____proxy(void **args);

static void  DiallerSystemImpl_strlen____proxy(void **args);

static void  DiallerSystemImpl_strcmp____proxy(void **args);

static void  DiallerSystemImpl_memcpy____proxy(void **args);

static void  DiallerSystemImpl_memset____proxy(void **args);

static void  DiallerSystemImpl_sleep____proxy(void **args);

static void  DiallerSystemImpl_usleep____proxy(void **args);

static void  DiallerSystemImpl_printf____proxy(void **args);

static void  DiallerSystemImpl_random____proxy(void **args);

static DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem *  DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t *__cur_state, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t new_value);

static DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *  DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum_t trans_enum, char *trans_name, char *source_state, char *target_state, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_smblock action_ref);

static void  DiallerSystemImpl_free_trans_DiallerSystemImpl__DiallerSystem(void *trans);

static gint  DiallerSystemImpl_compare_trans_DiallerSystemImpl__DiallerSystem(gconstpointer trans1, gconstpointer trans2, gpointer snapshot_static_info);

static bool  DiallerSystemImpl_is_consistent_DiallerSystemImpl__DiallerSystem(GPtrArray *result_set, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *new_trans, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur);

static void  DiallerSystemImpl_handle_event_lifeline_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot, bool last_small);

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

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = snapshot_small->DiallerSystemImpl__DiallerSystem__main__c + 1;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = snapshot_small->DiallerSystemImpl__DiallerSystem__main__lp * 10 + (*((uint8_t *)((*(???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial].args + 0)))));
  {
    DiallerSystemImpl_Event *__event = NULL;
    {
      void **__args = NULL;
      __args = ((void **)((malloc(1 * sizeof(void *)))));
      /* 
       * initialize actual arguments
       */

      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = (*((uint8_t *)((*(???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial].args + 0)))));
      __args[0] = arg0;
      __event = DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out, __args, false, true, false);
      
      {
        /* 
         * delay event binding call
         */

        DiallerSystemImpl_BindingCall *call = ((DiallerSystemImpl_BindingCall *)((malloc(sizeof(DiallerSystemImpl_BindingCall)))));
        ??? = &DiallerSystemImpl_handle_dial____proxy;
        ??? = __args;
        ??? = ???;
        ??? = ???.event_as_trigger[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out];
        g_ptr_array_add(call);
      }
    }
    if ( ???[???] != NULL ) 
    {
      free(???[???]);
    }
    ???[???] = __event;
  }
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = (*((uint8_t *)((*(???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial].args + 0)))));
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = 1;
  {
    DiallerSystemImpl_Event *__event = NULL;
    {
      void **__args = NULL;
      __args = ((void **)((malloc(1 * sizeof(void *)))));
      /* 
       * initialize actual arguments
       */

      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = (*((uint8_t *)((*(???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial].args + 0)))));
      __args[0] = arg0;
      __event = DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out, __args, false, true, false);
      
      {
        /* 
         * delay event binding call
         */

        DiallerSystemImpl_BindingCall *call = ((DiallerSystemImpl_BindingCall *)((malloc(sizeof(DiallerSystemImpl_BindingCall)))));
        ??? = &DiallerSystemImpl_handle_dial____proxy;
        ??? = __args;
        ??? = ???;
        ??? = ???.event_as_trigger[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out];
        g_ptr_array_add(call);
      }
    }
    if ( ???[???] != NULL ) 
    {
      free(???[???]);
    }
    ???[???] = __event;
  }
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = snapshot_small->DiallerSystemImpl__DiallerSystem__main__lp * 10 + (*((uint8_t *)((*(???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial].args + 0)))));
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = snapshot_small->DiallerSystemImpl__DiallerSystem__main__c + 1;
  {
    DiallerSystemImpl_Event *__event = NULL;
    {
      void **__args = NULL;
      __args = ((void **)((malloc(1 * sizeof(void *)))));
      /* 
       * initialize actual arguments
       */

      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = (*((uint8_t *)((*(???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial].args + 0)))));
      __args[0] = arg0;
      __event = DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out, __args, false, true, false);
      
      {
        /* 
         * delay event binding call
         */

        DiallerSystemImpl_BindingCall *call = ((DiallerSystemImpl_BindingCall *)((malloc(sizeof(DiallerSystemImpl_BindingCall)))));
        ??? = &DiallerSystemImpl_handle_dial____proxy;
        ??? = __args;
        ??? = ???;
        ??? = ???.event_as_trigger[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out];
        g_ptr_array_add(call);
      }
    }
    if ( ???[???] != NULL ) 
    {
      free(???[???]);
    }
    ???[???] = __event;
  }
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__last_lp = snapshot_small->DiallerSystemImpl__DiallerSystem__main__lp;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = 0;
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__p = snapshot_small->DiallerSystemImpl__DiallerSystem__main__last_lp;
  {
    DiallerSystemImpl_Event *__event = NULL;
    {
      void **__args = NULL;
      __args = ((void **)((malloc(1 * sizeof(void *)))));
      /* 
       * initialize actual arguments
       */

      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = DiallerSystemImpl_digit(snapshot_small->DiallerSystemImpl__DiallerSystem__main__last_lp, 1);
      __args[0] = arg0;
      __event = DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, __args, false, false, true);
      
    }
    if ( ???[???] != NULL ) 
    {
      free(???[???]);
    }
    ???[???] = __event;
  }
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  {
    DiallerSystemImpl_Event *__event = NULL;
    {
      void **__args = NULL;
      __args = ((void **)((malloc(1 * sizeof(void *)))));
      /* 
       * initialize actual arguments
       */

      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = DiallerSystemImpl_digit(snapshot_small->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__p, snapshot_small->DiallerSystemImpl__DiallerSystem__main__c + 1);
      __args[0] = arg0;
      __event = DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, __args, false, false, true);
      
    }
    if ( ???[???] != NULL ) 
    {
      free(???[???]);
    }
    ???[???] = __event;
  }
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__t8(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__t9(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__last_lp = 0;
  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial;
  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial;
  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(snapshot_big, snapshot_small, snapshot_cur);
  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main__Max(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing;
  /* 
   * initialize non-static variables
   */

  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__last_lp = 0;
  /* 
   * customized entry block code
   */

}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial;
  /* 
   * initialize non-static variables
   */

  /* 
   * customized entry block code
   */

}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial;
  /* 
   * initialize non-static variables
   */

  /* 
   * customized entry block code
   */

}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing;
  /* 
   * initialize non-static variables
   */

  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__c = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__lp = 0;
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__last_lp = 0;
  /* 
   * customized entry block code
   */

  /* 
   * entry for initial state
   */

  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial;
  /* 
   * initialize non-static variables
   */

  /* 
   * customized entry block code
   */

  /* 
   * entry for initial state
   */

  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial;
  /* 
   * initialize non-static variables
   */

  /* 
   * customized entry block code
   */

  /* 
   * entry for initial state
   */

  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_on_entry_DiallerSystemImpl__DiallerSystem__main__Max(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer(snapshot_big, snapshot_small, snapshot_cur);
  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer(snapshot_big, snapshot_small, snapshot_cur);
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Max(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
}

static void  DiallerSystemImpl_init_snapshot_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot) 
{
  static DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t *static_info = NULL;
  memset(snapshot, 0, sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t));
  ??? = g_ptr_array_new_with_free_func(&free);
  DiallerSystemImpl_init_cascade_DiallerSystemImpl__DiallerSystem__main(snapshot, snapshot, snapshot);
  if ( static_info == NULL ) 
  {
    static_info = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t *)((malloc(sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t)))));
    /* 
     * TODO: algorithm can be refined
     */

    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = false;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 0;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 1;
    ???[6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 0;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = -1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits] = 1;
    ???[0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max][0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max] = 0;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9][DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__redial] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__reset] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__redial] = true;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__out] = false;
    ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__reset] = true;
  }
  ??? = static_info;
}

static void  DiallerSystemImpl_big_step_start_block_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_big_step_end_block_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
}

static void  DiallerSystemImpl_handle_transition(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans) 
{
  /* 
   * execute action
   */

  (*???)(snapshot_big,snapshot_small,snapshot_cur);
  /* 
   * execute entry blocks
   */

  for ( uint32_t __i = 0 ; __i < ???.len; __i++ )
  {
    (*((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_smblock )((g_ptr_array_index(__i)))))(snapshot_big,snapshot_small,snapshot_cur);
  }
  /* 
   * calculate new status of "current states" for each region
   */

  if ( !??? ) 
  {
    for ( uint32_t __i = 0 ; __i < ???.len; __i++ )
    {
      DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem *set = ((DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem *)((g_ptr_array_index(__i))));
      *(???) = ???;
    }
  }
  /* 
   * disable regions
   */

  for ( uint8_t __i = 0 ; __i < 3; __i++ )
  {
    if ( ???[__i] ) 
    {
      ???[__i] = true;
    }
  }
}

static void  DiallerSystemImpl_execute_big_step_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  
  /* 
   * execute start big-step block
   */

  DiallerSystemImpl_big_step_start_block_DiallerSystemImpl__DiallerSystem(snapshot_big, snapshot_big, snapshot_big);
  
  memcpy(snapshot_cur, ((void * const )((snapshot_big))), sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t));
  memcpy(snapshot_small, ((void * const )((snapshot_big))), sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t));
  GPtrArray *enabled_transitions = g_ptr_array_new();
  GPtrArray *result_set = g_ptr_array_new_with_free_func(&DiallerSystemImpl_free_trans_DiallerSystemImpl__DiallerSystem);
  GPtrArray *result_set_round = g_ptr_array_new();
  do{
    ???++;
    if ( enabled_transitions->len > 0 ) 
    {
      g_ptr_array_remove_range(enabled_transitions, 0, enabled_transitions->len);
    }
    if ( result_set->len > 0 ) 
    {
      /* 
       * free_trans() is called when transition is removed
       */

      g_ptr_array_remove_range(result_set, 0, result_set->len);
    }
    gint rendezvous_count = 0;
    do{
      rendezvous_count++;
      /* 
       * clear enabled transitions and result_set_round at beginning of each rendezvous round.
       * After the 2nd round, only transition with rendezvous event trigger can be enabled
       */

      if ( enabled_transitions->len > 0 ) 
      {
        g_ptr_array_remove_range(enabled_transitions, 0, enabled_transitions->len);
      }
      if ( result_set_round->len > 0 ) 
      {
        g_ptr_array_remove_range(result_set_round, 0, result_set_round->len);
      }
      
      /* 
       * collect enabled transitions
       */

      {
        /* 
         * collect enabled transitions in subregions
         */

        switch (snapshot_small->DiallerSystemImpl__DiallerSystem__main____cur_state)
        {
          case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing: {
            {
              /* 
               * collect enabled transitions in the current region
               */

              switch (snapshot_small->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state)
              {
                case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial: {
                  /* 
                   * collect enabled transitions
                   */

                  if ( true ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( ???[RegionsEnum__a_region_enum] != NULL ) 
                    {
                      if ( ???[RegionsEnum__a_region_enum].has_renzd_syntax ) 
                      {
                        run_time_trigger_has_rendz = true;
                      }
                      if ( ???[RegionsEnum__a_region_enum] == NULL ) 
                      {
                        if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c < 10 ) 
                        {
                          if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                          {
                            DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1, "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.t1", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.WaitForDial", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.WaitForDial", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t1);
                            /* 
                             * enter the target state at last, cascadely
                             */

                            g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial));
                            g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial);
                            ??? = 0;
                            ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                            ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                            ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                            ??? = true;
                            /* 
                             * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                             */

                            ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = true;
                            ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = true;
                            ??? = 0;
                            g_ptr_array_add(enabled_transitions, trans);
                            /* 
                             * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                             * For hierarchical priority comparison
                             */

                            ??? = 0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial;
                          }
                        }
                      }
                    }
                  }
                  if ( true ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( ???[RegionsEnum__a_region_enum] != NULL ) 
                    {
                      if ( ???[RegionsEnum__a_region_enum].has_renzd_syntax ) 
                      {
                        run_time_trigger_has_rendz = true;
                      }
                      if ( ???[RegionsEnum__a_region_enum] == NULL ) 
                      {
                        if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c == 0 ) 
                        {
                          if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                          {
                            DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2, "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.t2", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.WaitForDial", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.DialDigits", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t2);
                            /* 
                             * enter the target state at last, cascadely
                             */

                            g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits));
                            g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits);
                            ??? = 0;
                            ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                            ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                            ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                            ??? = false;
                            /* 
                             * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                             */

                            ??? = 1;
                            g_ptr_array_add(enabled_transitions, trans);
                            /* 
                             * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                             * For hierarchical priority comparison
                             */

                            ??? = 6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          }
                        }
                      }
                    }
                  }
                  if ( rendezvous_count <= 1 ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( ???[RegionsEnum__a_region_enum] != NULL ) 
                    {
                      if ( true ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10, "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.t10", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.WaitForDial", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.WaitForDial", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t10);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = true;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = true;
                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = true;
                          ??? = 4;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial;
                        }
                      }
                    }
                  }
                  break;
                }
                case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits: {
                  /* 
                   * collect enabled transitions
                   */

                  if ( true ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( ???[RegionsEnum__a_region_enum] != NULL ) 
                    {
                      if ( ???[RegionsEnum__a_region_enum].has_renzd_syntax ) 
                      {
                        run_time_trigger_has_rendz = true;
                      }
                      if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c < 10 ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3, "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.t3", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.DialDigits", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.DialDigits", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t3);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = false;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ??? = 2;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__DialDigits;
                        }
                      }
                    }
                  }
                  if ( rendezvous_count <= 1 ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( true ) 
                    {
                      if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c == 10 ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4, "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.t4", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.DialDigits", "DiallerSystemImpl.DiallerSystem.main.Dialing.Dialer.WaitForDial", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__t4);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__WaitForDial);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                          ??? = true;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = true;
                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = true;
                          ??? = 3;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer;
                        }
                      }
                    }
                  }
                  break;
                }
              }

            }
            {
              /* 
               * collect enabled transitions in the current region
               */

              switch (snapshot_small->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state)
              {
                case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial: {
                  /* 
                   * collect enabled transitions
                   */

                  if ( rendezvous_count <= 1 ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( ???[RegionsEnum__a_region_enum] != NULL ) 
                    {
                      if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c == 0 ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5, "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.t5", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.WaitForRedial", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.RedialDigits", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t5);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = false;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ??? = 5;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                        }
                      }
                    }
                  }
                  if ( rendezvous_count <= 1 ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( true ) 
                    {
                      if ( DiallerSystemImpl_limit() ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t8, "DiallerSystemImpl.DiallerSystem.main.t8", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.WaitForRedial", "DiallerSystemImpl.DiallerSystem.main.Max", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__t8);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Max);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                          ??? = true;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = true;
                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer] = true;
                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = true;
                          ??? = 8;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                        }
                      }
                    }
                  }
                  break;
                }
                case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits: {
                  /* 
                   * collect enabled transitions
                   */

                  if ( rendezvous_count <= 1 ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( true ) 
                    {
                      if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c < DiallerSystemImpl_num_of_digits(snapshot_small->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__p) ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6, "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.t6", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.RedialDigits", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.RedialDigits", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t6);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = false;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ??? = 6;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 0 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__RedialDigits;
                        }
                      }
                    }
                  }
                  if ( rendezvous_count <= 1 ) 
                  {
                    bool run_time_trigger_has_rendz = false;
                    if ( true ) 
                    {
                      if ( snapshot_small->DiallerSystemImpl__DiallerSystem__main__c == DiallerSystemImpl_num_of_digits(snapshot_small->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__p) ) 
                      {
                        if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                        {
                          DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7, "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.t7", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.RedialDigits", "DiallerSystemImpl.DiallerSystem.main.Dialing.Redialer.WaitForRedial", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__t7);
                          /* 
                           * enter the target state at last, cascadely
                           */

                          g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial));
                          g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer__WaitForRedial);
                          ??? = 0;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                          ??? = true;
                          /* 
                           * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                           */

                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer] = true;
                          ???[DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main] = true;
                          ??? = 7;
                          g_ptr_array_add(enabled_transitions, trans);
                          /* 
                           * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                           * For hierarchical priority comparison
                           */

                          ??? = 6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Redialer;
                        }
                      }
                    }
                  }
                  break;
                }
              }

            }
            break;
          }
          case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max: {
            break;
          }
        }

        /* 
         * collect enabled transitions in the current region
         */

        switch (snapshot_small->DiallerSystemImpl__DiallerSystem__main____cur_state)
        {
          case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing: {
            /* 
             * collect enabled transitions
             */

            break;
          }
          case DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Max: {
            /* 
             * collect enabled transitions
             */

            if ( rendezvous_count <= 1 ) 
            {
              bool run_time_trigger_has_rendz = false;
              if ( true ) 
              {
                if ( DiallerSystemImpl_limit() ) 
                {
                  if ( rendezvous_count <= 1 || run_time_trigger_has_rendz ) 
                  {
                    DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum__DiallerSystemImpl__DiallerSystem__main__t9, "DiallerSystemImpl.DiallerSystem.main.t9", "DiallerSystemImpl.DiallerSystem.main.Max", "DiallerSystemImpl.DiallerSystem.main.Dialing", &DiallerSystemImpl_action__DiallerSystemImpl__DiallerSystem__main__t9);
                    /* 
                     * enter the target state at last, cascadely
                     */

                    g_ptr_array_add(DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(&(snapshot_cur->DiallerSystemImpl__DiallerSystem__main____cur_state), DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum__DiallerSystemImpl__DiallerSystem__main__Dialing));
                    g_ptr_array_add(&DiallerSystemImpl_on_entry_cascade_DiallerSystemImpl__DiallerSystem__main__Dialing);
                    ??? = 0;
                    ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                    ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                    ??? = DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                    ??? = false;
                    /* 
                     * region_need_skep stores the RegionEnum of regions that need to be skipped for big-step maximality if this transition is executed
                     */

                    ??? = 9;
                    g_ptr_array_add(enabled_transitions, trans);
                    /* 
                     * hier_compare_enum stores the int value for state/target/scope enum (either StateEnum or RegionEnum.
                     * For hierarchical priority comparison
                     */

                    ??? = 6 + DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_RegionEnum__DiallerSystemImpl__DiallerSystem__main;
                  }
                }
              }
            }
            break;
          }
        }

      }
      /* 
       * start processing BSML semantics
       * input: a set of enabled transitions
       * output: a maximal set of transitions that satisfying semantic constraints
       */

      /* 
       * sort enabled transitions according to their priority
       */

      g_ptr_array_sort_with_data(enabled_transitions, &DiallerSystemImpl_compare_trans_DiallerSystemImpl__DiallerSystem);
      for ( uint32_t __i = 0 ; __i < enabled_transitions->len; __i++ )
      {
        DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *new_trans = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *)((g_ptr_array_index(enabled_transitions, __i))));
        if ( DiallerSystemImpl_is_consistent_DiallerSystemImpl__DiallerSystem(result_set, new_trans, snapshot_big, snapshot_small, snapshot_cur) ) 
        {
          g_ptr_array_add(result_set, new_trans);
          g_ptr_array_add(result_set_round, new_trans);
        } else
        {
          DiallerSystemImpl_free_trans_DiallerSystemImpl__DiallerSystem(new_trans);
        }
      }
      /* 
       * end processing BSML semantics; execute chosen transitions in result_set_round one by one
       */

      for ( uint32_t __i = 0 ; __i < result_set_round->len; __i++ )
      {
        DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *cur_trans = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *)((g_ptr_array_index(result_set_round, __i))));
        DiallerSystemImpl_handle_transition(snapshot_big, snapshot_small, snapshot_cur, cur_trans);
      }
      /* 
       * rendezvous event has PRESENT IN SAME lifeline semantics
       */

      for ( uint8_t __i = 0 ; __i < 4; __i++ )
      {
        if ( ???[__i] != NULL && ???[__i].has_renzd_syntax ) 
        {
          ???[__i] = ???[__i];
        }
      }
    } while (result_set_round->len > 0);
    
    /* 
     * handle event lifeline at the end of small step
     */

    DiallerSystemImpl_handle_event_lifeline_DiallerSystemImpl__DiallerSystem(snapshot_cur, result_set->len <= 0);
    
    /* 
     * copy changes of current snapshot
     */

    memcpy(snapshot_small, ((void * const )((snapshot_cur))), sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t));
  } while (result_set->len > 0);
  
  for ( uint32_t __i = 0 ; __i < ???.len; __i++ )
  {
    DiallerSystemImpl_BindingCall *call = ((DiallerSystemImpl_BindingCall *)((g_ptr_array_index(__i))));
    if ( true && true ) 
    {
      (*???)();
    }
  }
  g_ptr_array_free(enabled_transitions, false);
  g_ptr_array_free(result_set_round, false);
  g_ptr_array_free(result_set, true);
  
  /* 
   * copy results for the next big step
   */

  memcpy(snapshot_big, ((void * const )((snapshot_cur))), sizeof(struct SMStruct));
  /* 
   * execute big step end block
   */

  DiallerSystemImpl_big_step_end_block_DiallerSystemImpl__DiallerSystem(snapshot_big, snapshot_big, snapshot_big);
  
  DiallerSystemImpl_free_pointer_array(((void **)((???))), 4);
  DiallerSystemImpl_reset_pointer_array(((void **)((???))), 4);
  ??? = 0;
  memset(0, sizeof ???);
  if ( ???.len > 0 ) 
  {
    /* 
     * free() is called also on each BindingCall
     */

    g_ptr_array_remove_range(0, ???.len);
  }
}

static gpointer  DiallerSystemImpl_sm_start_DiallerSystemImpl__DiallerSystem(gpointer queue) 
{
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t snapshot_big;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t snapshot_small;
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t snapshot_cur;
  /* 
   * three snapshots share the same "bindings" (GPtrArray
   */

  DiallerSystemImpl_init_snapshot_DiallerSystemImpl__DiallerSystem(&snapshot_big);
  g_async_queue_ref(((GAsyncQueue *)((queue))));
  while (true)
  {
    DiallerSystemImpl_EnvInput *input = ((DiallerSystemImpl_EnvInput *)((g_async_queue_pop(((GAsyncQueue *)((queue)))))));
    /* 
     * terminate state machine
     */

    bool term = false;
    for ( uint32_t __i = 0 ; __i < input->len; __i++ )
    {
      if ( ??? == DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum___sm_terminate_h ) 
      {
        term = true;
        break;
      }
    }
    if ( term ) 
    {
      char *retval = "terminate event received. state machine terminated successfully.";
      g_async_queue_unref(((GAsyncQueue *)((queue))));
      g_ptr_array_free(false);
      return retval;
    }
    for ( uint32_t __i = 0 ; __i < input->len; __i++ )
    {
      DiallerSystemImpl_Event *e = ((DiallerSystemImpl_Event *)((g_ptr_array_index(input, __i))));
      ???[???] = e;
    }
    DiallerSystemImpl_execute_big_step_DiallerSystemImpl__DiallerSystem(&snapshot_big, &snapshot_small, &snapshot_cur);
  }
}

static void  DiallerSystemImpl_test_dial(void) 
{
  DiallerSystemImpl_SMHandle_t *sm = DiallerSystemImpl_create_sm_instance(&DiallerSystemImpl_sm_start_DiallerSystemImpl__DiallerSystem);
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 1;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 2;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 3;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 4;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 9;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 8;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 7;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 6;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  /* 
   * only the first 10 digits can be dialed before han up.
   * expected result: 1234598765
   */

  
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 1;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 2;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 3;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 4;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 9;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 8;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 7;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 6;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    DiallerSystemImpl_SMHandle_t *cur = sm;
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum___sm_terminate_h, NULL, true, false, false, 0));
    g_async_queue_push(input);
    gpointer retval = g_thread_join();
    g_async_queue_unref();
    if ( (retval != NULL) ) 
    {
    }
  }
}

static void  DiallerSystemImpl_test_redial(void) 
{
  DiallerSystemImpl_SMHandle_t *sm = DiallerSystemImpl_create_sm_instance(&DiallerSystemImpl_sm_start_DiallerSystemImpl__DiallerSystem);
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 1;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 2;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 3;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 4;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 9;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 8;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 7;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 6;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__Dialing__Dialer__reset, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__redial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    DiallerSystemImpl_SMHandle_t *cur = sm;
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum___sm_terminate_h, NULL, true, false, false, 0));
    g_async_queue_push(input);
    gpointer retval = g_thread_join();
    g_async_queue_unref();
    if ( (retval != NULL) ) 
    {
    }
  }
}

static void  DiallerSystemImpl_test_limit(void) 
{
  DiallerSystemImpl_env_limit = false;
  DiallerSystemImpl_SMHandle_t *sm = DiallerSystemImpl_create_sm_instance(&DiallerSystemImpl_sm_start_DiallerSystemImpl__DiallerSystem);
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 1;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 2;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 3;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 4;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 5;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 9;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 8;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 7;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 6;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  sleep(1);
  g_mutex_lock(&DiallerSystemImpl_access_env);
  DiallerSystemImpl_env_limit = true;
  g_mutex_unlock(&DiallerSystemImpl_access_env);
  {
    void **args_0 = NULL;
    args_0 = ((void **)((malloc(1 * sizeof(void *)))));
    {
      args_0 = ((void **)((malloc(1 * sizeof(void *)))));
      void **tmp = args_0;
      uint8_t *arg0 = ((uint8_t *)((malloc(sizeof(uint8_t)))));
      *arg0 = 1;
      tmp[0] = arg0;
    }
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum__DiallerSystemImpl__DiallerSystem__main__dial, args_0, false, false, false, 0));
    g_async_queue_push(input);
  }
  {
    DiallerSystemImpl_SMHandle_t *cur = sm;
    DiallerSystemImpl_EnvInput *input = g_ptr_array_new();
    g_ptr_array_add(input, DiallerSystemImpl_create_event(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_EventEnum___sm_terminate_h, NULL, true, false, false, 0));
    g_async_queue_push(input);
    gpointer retval = g_thread_join();
    g_async_queue_unref();
    if ( (retval != NULL) ) 
    {
    }
  }
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

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_SM_initialized(char *name, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("SM_initialized: intialize state machine (");;
  printf("name=%s",(((char *)(name))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_transition_occur(char *trans_id, char *from, char *to, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("transition_occur:   (");;
  printf("trans_id=%s",(((char *)(trans_id))));
  printf(", from=%s",(((char *)(from))));
  printf(", to=%s",(((char *)(to))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_trans_enabled(uint32_t num, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("trans_enabled:   (");;
  printf("num=%d",(((uint32_t )(num))));
  printf(" ,location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_start_big_step(char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("start_big_step:   (");;
  printf("location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_end_big_step(char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("end_big_step:   (");;
  printf("location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_start_small_step(char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("start_small_step:   (");;
  printf("location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_end_small_step(char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("end_small_step:   (");;
  printf("location=@%s) \n",loc);;
}

/* 
 * Message Reporting Function
 */
void  DiallerSystemImpl_sm_msg_other(char *info, char *loc) 
{
  /* 
   * If this format is changed you also have to take care of the MbeddrStackTraceLoggers code that it can extract the information from the printed string. If you are unsure DON'T touch this code
   */

  printf("other: other info (");;
  printf("info=%s",(((char *)(info))));
  printf(" ,location=@%s) \n",loc);;
}

static DiallerSystemImpl_Event *  DiallerSystemImpl_create_event(uint32_t type, void **args, bool has_in_syntax, bool has_out_syntax, bool has_renzd_syntax, gint small_step_count) 
{
  DiallerSystemImpl_Event *ret = ((DiallerSystemImpl_Event *)((malloc(sizeof(DiallerSystemImpl_Event)))));
  ret->type = type;
  ret->args = args;
  ret->has_in_syntax = has_in_syntax;
  ret->has_out_syntax = has_out_syntax;
  ret->has_renzd_syntax = has_renzd_syntax;
  ret->small_step_count = small_step_count;
  return ret;
}

static void  DiallerSystemImpl_reset_pointer_array(void **data, uint32_t length) 
{
  /* 
   * scan the pointer array and set non-null pointers to null
   */

  for ( uint32_t index = 0 ; index < length; index++ )
  {
    data[index] = NULL;
  }
}

static void  DiallerSystemImpl_free_pointer_array(void **data, uint32_t length) 
{
  /* 
   * scan the pointer array and free() non-null pointers
   */

  for ( uint32_t index = 0 ; index < length; index++ )
  {
    if ( data[index] != NULL ) 
    {
      free(data[index]);
    }
  }
}

static DiallerSystemImpl_SMHandle_t *  DiallerSystemImpl_create_sm_instance(DiallerSystemImpl_SMStartRef sm_start) 
{
  DiallerSystemImpl_SMHandle_t *ret = ((DiallerSystemImpl_SMHandle_t *)((malloc(sizeof(DiallerSystemImpl_SMHandle_t)))));
  ret->queue = g_async_queue_new();
  ret->instance = g_thread_new(" ", sm_start, ret->queue);
  return ret;
}

static void  DiallerSystemImpl_handle_dial____proxy(void **args) 
{
  DiallerSystemImpl_handle_dial(*((uint8_t *)((*(args + 0)))));
  free(((uint8_t *)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_digit____proxy(void **args) 
{
  DiallerSystemImpl_digit(*((uint64_t *)((*(args + 0)))), *((uint8_t *)((*(args + 1)))));
  free(((uint64_t *)((*(args + 0)))));
  free(((uint8_t *)((*(args + 1)))));
  free(args);
}

static void  DiallerSystemImpl_num_of_digits____proxy(void **args) 
{
  DiallerSystemImpl_num_of_digits(*((uint64_t *)((*(args + 0)))));
  free(((uint64_t *)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_limit____proxy(void **args) 
{
  DiallerSystemImpl_limit();
  free(args);
}

static void  DiallerSystemImpl_test_dial____proxy(void **args) 
{
  DiallerSystemImpl_test_dial();
  free(args);
}

static void  DiallerSystemImpl_test_redial____proxy(void **args) 
{
  DiallerSystemImpl_test_redial();
  free(args);
}

static void  DiallerSystemImpl_test_limit____proxy(void **args) 
{
  DiallerSystemImpl_test_limit();
  free(args);
}

static void  DiallerSystemImpl_g_thread_new____proxy(void **args) 
{
  g_thread_new(*((gchar const  **)((*(args + 0)))), *((GThreadFunc *)((*(args + 1)))), *((gpointer *)((*(args + 2)))));
  free(((gchar const  **)((*(args + 0)))));
  free(((GThreadFunc *)((*(args + 1)))));
  free(((gpointer *)((*(args + 2)))));
  free(args);
}

static void  DiallerSystemImpl_g_thread_join____proxy(void **args) 
{
  g_thread_join(*((GThread **)((*(args + 0)))));
  free(((GThread **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_g_thread_exit____proxy(void **args) 
{
  g_thread_exit(*((gpointer *)((*(args + 0)))));
  free(((gpointer *)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_g_mutex_init____proxy(void **args) 
{
  g_mutex_init(*((GMutex **)((*(args + 0)))));
  free(((GMutex **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_g_mutex_clear____proxy(void **args) 
{
  g_mutex_clear(*((GMutex **)((*(args + 0)))));
  free(((GMutex **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_g_mutex_lock____proxy(void **args) 
{
  g_mutex_lock(*((GMutex **)((*(args + 0)))));
  free(((GMutex **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_g_mutex_unlock____proxy(void **args) 
{
  g_mutex_unlock(*((GMutex **)((*(args + 0)))));
  free(((GMutex **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_g_mutex_trylock____proxy(void **args) 
{
  g_mutex_trylock(*((GMutex **)((*(args + 0)))));
  free(((GMutex **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_malloc____proxy(void **args) 
{
  malloc(*((size_t *)((*(args + 0)))));
  free(((size_t *)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_free____proxy(void **args) 
{
  free(*((void **)((*(args + 0)))));
  free(((void **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_calloc____proxy(void **args) 
{
  calloc(*((size_t *)((*(args + 0)))), *((size_t *)((*(args + 1)))));
  free(((size_t *)((*(args + 0)))));
  free(((size_t *)((*(args + 1)))));
  free(args);
}

static void  DiallerSystemImpl_realloc____proxy(void **args) 
{
  realloc(*((void **)((*(args + 0)))), *((size_t *)((*(args + 1)))));
  free(((void **)((*(args + 0)))));
  free(((size_t *)((*(args + 1)))));
  free(args);
}

static void  DiallerSystemImpl_strlen____proxy(void **args) 
{
  strlen(*((char const  **)((*(args + 0)))));
  free(((char const  **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_strcmp____proxy(void **args) 
{
  strcmp(*((char const  **)((*(args + 0)))), *((char const  **)((*(args + 1)))));
  free(((char const  **)((*(args + 0)))));
  free(((char const  **)((*(args + 1)))));
  free(args);
}

static void  DiallerSystemImpl_memcpy____proxy(void **args) 
{
  memcpy(*((void **)((*(args + 0)))), *((void * const *)((*(args + 1)))), *((size_t *)((*(args + 2)))));
  free(((void **)((*(args + 0)))));
  free(((void * const *)((*(args + 1)))));
  free(((size_t *)((*(args + 2)))));
  free(args);
}

static void  DiallerSystemImpl_memset____proxy(void **args) 
{
  memset(*((void **)((*(args + 0)))), *((int32_t *)((*(args + 1)))), *((size_t *)((*(args + 2)))));
  free(((void **)((*(args + 0)))));
  free(((int32_t *)((*(args + 1)))));
  free(((size_t *)((*(args + 2)))));
  free(args);
}

static void  DiallerSystemImpl_sleep____proxy(void **args) 
{
  sleep(*((uint64_t *)((*(args + 0)))));
  free(((uint64_t *)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_usleep____proxy(void **args) 
{
  usleep(*((uint64_t *)((*(args + 0)))));
  free(((uint64_t *)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_printf____proxy(void **args) 
{
  printf(*((char **)((*(args + 0)))));
  free(((char **)((*(args + 0)))));
  free(args);
}

static void  DiallerSystemImpl_random____proxy(void **args) 
{
  random();
  free(args);
}

static DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem *  DiallerSystemImpl_create_cur_state_set_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t *__cur_state, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_StateEnum_t new_value) 
{
  DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem *cur_state_set = ((DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem *)((malloc(sizeof(DiallerSystemImpl_CurStateSet_DiallerSystemImpl__DiallerSystem)))));
  cur_state_set->__cur_state = __cur_state;
  cur_state_set->new_cur_state_value = new_value;
  return cur_state_set;
}

static DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *  DiallerSystemImpl_create_trans_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_TransEnum_t trans_enum, char *trans_name, char *source_state, char *target_state, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_smblock action_ref) 
{
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *trans = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *)((malloc(sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition)))));
  memset(trans, 0, sizeof(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition));
  trans->cur_state_sets = g_ptr_array_new_with_free_func(&free);
  trans->entry_refs = g_ptr_array_new();
  trans->trans_enum = trans_enum;
  trans->trans_name = trans_name;
  trans->source_state = source_state;
  trans->target_state = target_state;
  trans->action_ref = action_ref;
  trans->priority = 0;
  trans->hier_compare_enum = 0;
  trans->is_interrupted = false;
  return trans;
}

static void  DiallerSystemImpl_free_trans_DiallerSystemImpl__DiallerSystem(void *trans) 
{
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *t = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *)((trans)));
  g_ptr_array_free(t->cur_state_sets, true);
  g_ptr_array_free(t->entry_refs, false);
  free(trans);
}

static gint  DiallerSystemImpl_compare_trans_DiallerSystemImpl__DiallerSystem(gconstpointer trans1, gconstpointer trans2, gpointer snapshot_static_info) 
{
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *t1 = *((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition **)((trans1)));
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *t2 = *((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition **)((trans1)));
  DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t *static_info = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_static_t *)((snapshot_static_info)));
  if ( t1 == t2 ) 
  {
    return 0;
  }
  gint ret = 0;
  /* 
   * EXPLICIT priority
   */

  /* 
   * HIERARCHICAL priority
   */

  ret = static_info->compare_elements_hier_parent[t1->hier_compare_enum][t2->hier_compare_enum];
  return ret;
}

static bool  DiallerSystemImpl_is_consistent_DiallerSystemImpl__DiallerSystem(GPtrArray *result_set, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *new_trans, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_big, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_small, DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot_cur) 
{
  /* 
   * Concurrency
   */

  /* 
   * Big-step Maximality regarding to previous small steps
   */

  if ( ???[???] || ???[???] ) 
  {
    return false;
  }
  for ( uint32_t __i = 0 ; __i < result_set->len; __i++ )
  {
    DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *old_trans = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *)((g_ptr_array_index(result_set, __i))));
    /* 
     * Big-step Maximality regarding to result set
     */

    if ( ??? && (???[???] || ???[???]) ) 
    {
      return false;
    }
    /* 
     * Small-step Consistency (MANY concurrency is guaranteed)
     * ARENA ORTHOGONAL or DEST/TARGET ORTHOGONAL
     */

    if ( !???.trans_interrupt[???][???] && !???.trans_interrupt[???][???] ) 
    {
      if ( !???.are_regions_orthogonal[???][???] ) 
      {
        return false;
      }
    }
  }
  /* 
   * Preemption
   */

  for ( uint32_t __i = 0 ; __i < result_set->len; __i++ )
  {
    DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *old_trans = ((DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_Transition *)((g_ptr_array_index(result_set, __i))));
    if ( ???.trans_interrupt[???][???] ) 
    {
      return false;
    } else if (???.trans_interrupt[???][???]) {
      return false;
    }
  }
  return true;
}

static void  DiallerSystemImpl_handle_event_lifeline_DiallerSystemImpl__DiallerSystem(DiallerSystemImpl_DiallerSystemImpl__DiallerSystem_SMStruct_t *snapshot, bool last_small) 
{
  
  for ( uint8_t __i = 0 ; __i < 4; __i++ )
  {
    if ( ???[__i] != NULL ) 
    {
      DiallerSystemImpl_Event *event = ???[__i];
      bool is_in = false;
      bool is_out = false;
      if ( true && ??? == 0 && true ) 
      {
        is_in = true;
      }
      if ( ??? && true && true ) 
      {
        is_out = true;
        if ( ??? < ??? ) 
        {
          free(event);
          ???[__i] = NULL;
          break;
        }
      }
      
      if ( !is_in && !is_out ) 
      {
        if ( ??? < ??? ) 
        {
          free(event);
          ???[__i] = NULL;
          break;
        }
      }
      
      if ( ??? ) 
      {
        free(event);
        ???[__i] = NULL;
        break;
      }
    }
  }
}

