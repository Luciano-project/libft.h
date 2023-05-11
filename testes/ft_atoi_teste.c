#include "../libft.h"

int	main(int argc, const char **argv)
{
	const char *string;
	
	string = argv[argc-1];
	//printf("%s",string);
	printf("%d\n",ft_atoi(string));
	printf("%d\n",atoi(string));
	return (0);
}
