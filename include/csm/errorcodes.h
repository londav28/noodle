#ifndef CSM_INCLUDE_CSM_ERRORCODES_H_
#define CSM_INCLUDE_CSM_ERRORCODES_H_

#ifdef __cplusplus
extern "C" {
#endif

/* These are machine errorcodes as opposed to bytecode exceptionn. */
#define CSM_ERR_NONE        0
#define CSM_ERR_MEMORY      601
#define CSM_ERR_EOS         601
#define CSM_ERR_MAGIC       602
#define CSM_ERR_NOSTART     603
#define CSM_ERR_STARTUP     604
#define CSM_ERR_LOGICAL     605

#ifdef __cplusplus
}
#endif
#endif
