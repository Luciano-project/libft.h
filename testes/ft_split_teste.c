int main()
{
	int i = 0;
	char *str = "eu sou a lenda";
	char **str2;
	str2 = ft_split(str, ' ');
	while(str2[i])
	{
		printf("str[%d]: %s\n", i, str2[i]);
		i++;
	}
	free(str2);
	return (0);
}