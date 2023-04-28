int	main()
{
	char	*str;
	char	*str2;

	str = (char *)malloc(sizeof(char) * 10);
	str2 = (char *)malloc(sizeof(char) * 10);
	str = "Hello";
	ft_memcpy(str2, str, 5);
	printf("%s\n", str2);
	return (0);
}