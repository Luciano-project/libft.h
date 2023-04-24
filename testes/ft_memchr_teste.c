#include <stdio.h>
void    *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	
	str = s;
	while(n > 0)
	{
		
		if (*str == (unsigned char) c)
			return ((void *)str);
		n--;
		str++;
	}
    return (NULL);
}

int main() {
  char	*str= "ola mundo";
  printf("%s",(char *)ft_memchr(str, ' ', 6));
  return 0;
}
