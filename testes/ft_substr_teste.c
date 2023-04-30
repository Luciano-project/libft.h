#include "libft.h"
int	main(void)
{
	char	*str;
	char	*sub_str;

	str = "Hello World!";
	sub_str = ft_substr(str, 14, 7);
	printf("%s\n", sub_str);
	free(sub_str);
	return (0);
}
