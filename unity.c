#include "unity.h"
#include <stddef.h>

#ifdef AVR
#include <avr/pgmspace.h>
#else
#define PROGMEM
#endif

/* If omitted from header, declare overrideable prototypes here so they're ready for use */
#ifdef UNITY_OMIT_OUTPUT_CHAR_HEADER_DECLARATION
void UNITY_OUTPUT_CHAR(int);
#endif

/* Helpful macros for us to use here in Assert functions */
#define UNITY_FAIL_AND_BAIL   { Unity.CurrentTestFailed  = 1; UNITY_OUTPUT_FLUSH(); TEST_ABORT(); }
#define UNITY_IGNORE_AND_BAIL { Unity.CurrentTestIgnored = 1; UNITY_OUTPUT_FLUSH(); TEST_ABORT(); }
#define RETURN_IF_FAIL_OR_IGNORE if (Unity.CurrentTestFailed || Unity.CurrentTestIgnored) TEST_ABORT()

struct UNITY_STORAGE_T Unity;

#ifdef UNITY_OUTPUT_COLOR
const char PROGMEM UnityStrOk[]                            = "\033[42mOK\033[00m";
const char PROGMEM UnityStrPass[]                          = "\033[42mPASS\033[00m";
const char PROGMEM UnityStrFail[]                          = "\033[41mFAIL\033[00m";
const char PROGMEM UnityStrIgnore[]                        = "\033[43mIGNORE\033[00m";
#else
EM UnityStrDelta[]                  = " Values Not Within Delta ";
sted[]         = " Ignored ";
