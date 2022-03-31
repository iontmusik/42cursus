/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:20:08 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/28 13:29:55 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (1)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		if (str[i] == 0)
			break ;
		i++;
	}
	return (NULL);
}

int	main(void)
{
 	const char	s[] = "hola que tal";
	int			c;

	c = 'q';
	printf("%s", ft_strchr(s, c));
 	printf("\n%s", strchr(s, c));
	return (0);
}
