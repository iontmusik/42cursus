/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:26:12 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 22:53:09 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<xlocale.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		sizestr2;
	int		o;
	char	*str1;
	char	*str2;

	str1 = (char *)haystack;
	str2 = (char *)needle;
	i = 0;
	sizestr2 = 0;
	if (len == 0)
		return (str1);
	while (str2[sizestr2])
		sizestr2++;
	while (str1[i] && i < (int)len)
	{
		j = 0;
		o = i;
		while (str1[o] == str2[j] && str2[j])
		{
			if (j + 1 == sizestr2)
				return (&str1[i]);
			o++;
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	haystack[] = "holqa que tal ";
	char	needle[] = "que";
	int		len;

	len = 4;
	printf("%s", ft_strnstr(haystack, needle, len));
	printf("\n%s", strnstr(haystack, needle, len));
	return (0);
}*/