#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>

#define BASE "0123456789ABCDEF"

typedef struct  s_args  
{
    va_list ap;
    char    *fmt;
    int     index;
    int     length;
    int     digit;
    int     base;
    int     minus_flag;
    int     plus_flag;
    int     space_flag;
    int     sharp_flag;
    int     comma_flag;
    int     asterisk_flag;
    int     width_flag;
    int     precision_flag;
    int     hh_flag;
    int     h_flag;
    int     l_flag;
    int     ll_flag;
    int     j_flag;
    int     z_flag;
    int     t_flag;
    int     error_flag;
}   t_args;

int     ft_printf(const char *format, ...);



#endif

