#include "../libft.h"

int	main(int argc, const char **argv)
{
	const char *string;
	
	string = argv[argc-1];
	//printf("%s",string);
	printf("%d, %s\n",ft_atoi(string), string);
	printf("%d, %s\n",atoi(string), string);
	return (0);
}
