#include "../include/types.h"

Type TYPE_DETAILS[] = {
    [VOID] = {
		.size = 0,
		.name = "void",
		.fmt_spec = "",
	},
    [INT] = {
		.size = sizeof(int),
		.name = "int",
		.fmt_spec = "%d",
	},
    [FLOAT] = {
		.size = sizeof(float),
		.name = "float",
		.fmt_spec = "%f",
	},
    [DBL] = {
		.size = sizeof(double),
		.name = "double",
		.fmt_spec = "%lf",
	},
    [CHAR] = {
		.size = sizeof(char),
		.name = "char",
		.fmt_spec = "%c",
	},
    [STR] = {
		.size = sizeof(char*),
		.name = "string",
		.fmt_spec = "%s",
	},
    [BOOL] = {
		.size = sizeof(bool),
		.name = "bool",
		.fmt_spec = "%d",
	},
    [S_INT] = {
		.size = sizeof(short int),
		.name = "short int",
		.fmt_spec = "%hd",
	},
    [L_INT] = {
		.size = sizeof(long int),
		.name = "long int",
		.fmt_spec = "%ld",
	},
    [LL_INT] = {
		.size = sizeof(long long int),
		.name = "long long int",
		.fmt_spec = "%lld",
	},
    [U_INT] = {
		.size = sizeof(unsigned int),
		.name = "unsigned int",
		.fmt_spec = "%u",
	},
    [US_INT] = {
        .size = sizeof(unsigned short int),
        .name = "unsigned short int",
        .fmt_spec = "%hu",
    },
    [UL_INT] = {
        .size = sizeof(unsigned long int),
        .name = "unsigned long int",
        .fmt_spec = "%lu",
    },
    [ULL_INT] = {
        .size = sizeof(unsigned long long int),
        .name = "unsigned long long int",
        .fmt_spec = "%llu",
    },
    [L_DBL] = {
		.size = sizeof(long double),
		.name = "long double",
		.fmt_spec = "%Lf",
	},
    [P_VOID] = {
        .size = sizeof(void*),
        .name = "void pointer",
        .fmt_spec = "%p",
    },
    [P_INT] = {
        .size = sizeof(int*),
        .name = "int pointer",
        .fmt_spec = "%p",
    },
    [P_FLOAT] = {
        .size = sizeof(float*),
        .name = "float pointer",
        .fmt_spec = "%p",
    },
    [P_DBL] = {
        .size = sizeof(double*),
        .name = "double pointer",
        .fmt_spec = "%p",
    },
    [P_CHAR] = {
        .size = sizeof(char*),
        .name = "char pointer",
        .fmt_spec = "%p",
    },
    [P_STR] = {
        .size = sizeof(char**),
        .name = "string pointer",
        .fmt_spec = "%p",
    },
    [P_BOOL] = {
        .size = sizeof(bool*),
        .name = "bool pointer",
        .fmt_spec = "%p",
    },
    [P_S_INT] = {
        .size = sizeof(short int*),
        .name = "short int pointer",
        .fmt_spec = "%p",
    },
    [P_L_INT] = {
        .size = sizeof(long int*),
        .name = "long int pointer",
        .fmt_spec = "%p",
    },
    [P_LL_INT] = {
        .size = sizeof(long long int*),
        .name = "long long int pointer",
        .fmt_spec = "%p",
    },
    [P_U_INT] = {
        .size = sizeof(unsigned int*),
        .name = "unsigned int pointer",
        .fmt_spec = "%p",
    },
    [P_US_INT] = {
        .size = sizeof(unsigned short int*),
        .name = "unsigned short int pointer",
        .fmt_spec = "%p",
    },
    [P_UL_INT] = {
        .size = sizeof(unsigned long int*),
        .name = "unsigned long int pointer",
        .fmt_spec = "%p",
    },
    [P_ULL_INT] = {
        .size = sizeof(unsigned long long int*),
        .name = "unsigned long long int pointer",
        .fmt_spec = "%p",
    },
    [P_L_DBL] = {
        .size = sizeof(long double*),
        .name = "long double pointer",
        .fmt_spec = "%p",
    },
};
