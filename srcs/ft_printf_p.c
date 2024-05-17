#include "ft_printf.h"

void    ft_printf_p(t_args *args)
{
    int     num;
    int     ret;
    char    *str;

    ret = 0;
    num = va_arg(args->ap, int);
    if (!num)
    {
        args->error_flag++;
        return (ret);
    }
    str = ft_atoi_base(num, 16);
    ret += ft_outstr(str);
    return (ret);
}
