#include "libft.h"

char	*ft_strnstr1(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[n] == 0)
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] && haystack[h + n] == needle[n] && len > (h + n))
			n++;
		if (!(needle[n]))
			return ((char *)haystack + h);
		n = 0;
		h++;
	}
	return (0);
}
