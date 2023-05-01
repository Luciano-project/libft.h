
int	main()
{
	char	*s1;
	char	*s2;
	char	*str;

	s1 = "Hello";
	s2 = " World!";
	str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	free(str);
	return (0);
}