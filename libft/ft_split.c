/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:19:22 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/31 11:27:25 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);

int	ft_cont(char *s, char c)
{
	int		b;
	int		a;

	a = 0;
	b = 0;
	while (s[a])
	{
		while (s[a] && s[a] == c)
			s++;
		while (s[a] && s[a] != c)
		{
			s[a]++;
			if (s[a] - 1 != c)
				b++;
		}
	}
	return (b + 1);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	char	**wtf;
	int		point;

	point = 0;
	i = 0;
	if (!str)
		return (NULL);
	wtf = ft_calloc(ft_cont(str, c), 1);
	while (str[i])
	{
		while (str[i] && str[i] == c)
		{
			i++;
		}
		j = i;
		while (str[i] && str[i] != c)
		{
			i++;
//			j++;
		}
	wtf[point] = ft_substr(str, j, i - j + 1);
	point++;
	}
	return (wtf);
}

int	main(void)
{
	char		*s = "Hola que tal estas";
	char		c;
	char		**a;
	int			b;

	b = 0;
	c = ' ';
	printf("%s", s);
	a = ft_split(s, c);
	while (a[b])
	{
		printf("%s\n", a[b]);
		b++;
	}
	return (0);
}
