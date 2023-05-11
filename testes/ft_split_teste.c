#include "../libft.h"

int main()
{
	int i = 0;
	char *str = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char **str2;
	*str = '1';

	str2 = ft_split(str, ' ');
	while(str2[i])
	{
		printf("str[%d]:%s\n", i, str2[i]);
		i++;
	}
	free(str2);
	return (0);
}

