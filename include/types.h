#ifndef TYPES_H
#define TYPES_H

#include <stdbool.h>
#include <stddef.h>

typedef enum {
    VOID,
    INT,
    FLOAT,
    DBL,
    CHAR,
    STR,
    BOOL,
    S_INT,
    L_INT,
    LL_INT,
    U_INT,
    US_INT,
    UL_INT,
    ULL_INT,
    L_DBL,
    P_VOID,
    P_INT,
    P_FLOAT,
    P_DBL,
    P_CHAR,
    P_STR,
    P_BOOL,
    P_S_INT,
    P_L_INT,
    P_LL_INT,
    P_U_INT,
    P_US_INT,
    P_UL_INT,
    P_ULL_INT,
    P_L_DBL,
} TypeEnum;

typedef struct {
    size_t size;
    const char* name;
    const char* fmt_spec;
} Type;

extern Type TYPE_DETAILS[];

#endif // TYPES_H
