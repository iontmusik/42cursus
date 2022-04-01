void ft_putendl_fd(char *s, int fd)
{
	int	i;
	
	i = 0 ;
	while (s[i])
	{
		write(ft, &s[i], 1);
		i++;
		if (s[i] == '\0')
			write(fd, "\n", 1);
	}
}
