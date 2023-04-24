#include <stdio.h>

size_t    ft_strlen(const char *s)
{
    int    c;

    c = 0;
    while (s[c] != '\0')
      {
        c++;
      }
    return (c);
}

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t    n;
    size_t    counter;

    counter = 0;
    n = ft_strlen(src);
    while (size > 0)
    {
        dst[counter] = src[counter];
        counter++;
        size--;
    }
    dst[counter - 1] = '\0';
    return (n);
}

size_t    ft_strlcpy1(char *dst, const char *src, size_t dstsize)
{
    size_t    srcsize;
    size_t    i;

    srcsize = ft_strlen(src);
    i = -1;
    if (dstsize != 0)
    {
        while (src[++i] && i < (dstsize - 1))
            dst[i] = src[i];
        dst[i] = '\0' ;
    }
    return (srcsize);
}

int main()
{
  const char *src="ola mundo";
  char dest[10];
  
  const char *src1="ola mundo";
  char dest1[10];

  printf("%ld",ft_strlcpy(dest,src,5));
  printf("%ld",ft_strlcpy1(dest1,src1,5));
  return(0);
}
