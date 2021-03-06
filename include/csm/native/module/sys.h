#ifndef CSM_INCLUDE_CSM_NATIVE_MODULE_SYS_H_
#define CSM_INCLUDE_CSM_NATIVE_MODULE_SYS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "csm/types.h"
#include "csm/machine/state.h"

/* Can use to reduce the search space. */
extern const char* csm_native_gc_prefix;

/* Search tables. */
extern csm_native_method csm_native_gc_methods;
extern csm_native_object csm_native_gc_objects;

/* Call before execution. */
void csm_native_sys_setup(void);
void csm_native_sys_teardown(void);

/* Methods will go here, eventually... */

#ifdef __cplusplus
}
#endif
#endif
