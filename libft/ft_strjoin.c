/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:22:31 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 22:52:49 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1len;
	int		s2len;

	s1len = 0;
	s2len = 0;
	str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if (str == '\0')
		return (NULL);
	s1len = 0;
	s2len = 0;
	while (s1[s1len])
	{
		str[s1len] = s1[s1len];
		s1len++;
	}
	while (s2[s2len])
	{
		str[s1len] = s2[s2len];
		s1len++;
		s2len++;
	}
	return (str);
}

/*int	main(void)
{
	const char	s1[] = "hola ";
	const char	s2[] = "que tal";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
