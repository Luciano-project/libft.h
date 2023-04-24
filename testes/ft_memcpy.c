#include "libft.h"

int main()
{
	char str1[10] = "123456faf";
	char str2[10] = "abcdefg";
	
	printf("\t%s\n", (char *)ft_memcpy(str2, str1, 3));
	printf("\t%s\n", (char *)memcpy(str2, str1, 3));
	return (0);
}
