char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int 	i;
	char	*str;
	
	i = 0 ;
	
	while(s[i])
	{
		str = ft_strdup(s);
		str[i] = f(i, s[i]);
	}
	return (str);
	
	
}
