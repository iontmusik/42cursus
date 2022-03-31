/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:28:07 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 22:53:25 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(len);
	if (str == '\0')
		return (NULL);
	while (i < (int)len)
	{	
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}

/*int	main(void)
{
	char const		s[] = "hola que tal";
	size_t			len;
	unsigned int	start;

	len = 2;
	start = 5;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
