#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*pntr;

	pntr = (char *)calloc(2, sizeof(char));
	if (!(pntr))
		return (0);

	printf("%d\n", pntr[0]);


	free(pntr);
	return (0);
}