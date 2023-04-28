#include "../libft.h"
int main(int argc, char **argv)
{
	char *str;
	char *str2;

	str = ft_strdup(argv[--argc]);
	str2 = strdup(argv[argc]);
	printf("%s\n", str);
	printf("%s\n", str2);
	free(str);
	free(str2);
	return (0);
}