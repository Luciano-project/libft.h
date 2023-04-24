#include "libft.h"

int main()
{
    char str[50] = "This is string.h library function";
    char str2[50] = "This is string.h library function";
    ft_memset(str, '$', 1);
    memset(str2, '$', 1);
    printf("String after memset is %s)\n", str);
    printf("String after memset is %s)\n", str2);
    return (0);
}
