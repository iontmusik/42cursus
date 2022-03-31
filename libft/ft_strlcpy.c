/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:24:07 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 22:52:58 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if ((int)dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < (int)dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	dst[] = "hola que tal";
	char	src[] = "emperador";
	int		dstsize;

	dstsize = 7;
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	printf("%lu", strlcpy(dst, src, dstsize));
	return (0);
}*/
