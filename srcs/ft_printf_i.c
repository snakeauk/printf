#include "ft_printf.h"

int    ft_printf_i(t_args *args)
{
    int num;
    int ret;
    char *str;

    ret = 0;
    num = va_arg(args->ap, int);
    str = ft_itoa_base(num, "0123456789");
    if (!str)
    {
        args->error_flag++;
        str = "0";
    }
    ret += ft_outstr(str);
    free(str);
    return (ret);
}
