/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:27:00 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/26 13:49:52 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		size_s;
	char	*str;

	size_s = 0;
	str = (char *)s;
	while (str[size_s])
		size_s++;
	while (str[size_s] >= 0)
	{
		if (str[size_s] == c)
			return (&str[size_s]);
		size_s--;
	}
	return (NULL);
}

int	main(void)
{
	char	s[] = "hola que qtal";
	int		c;

	c = 'q';
	printf("%s", ft_strrchr(s, c));
	printf("\n%s", strrchr(s, c));
	return (0);
}
