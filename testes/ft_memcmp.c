#include "../libft.h"

int main()
{
	char s1[] = "Hello World";
	char s2[] = "Hello";
	char s11[] = "Hello World";
	char s22[] = "Hello";

	printf("\tMine: %d\n", ft_memcmp(s1, s2, 8));
	printf("\tOrig: %d\n", memcmp(s11, s22, 8));
}
