/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:23:07 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 22:52:53 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		srcsize;
	int		i;
	int		o;

	srcsize = ft_strlen((char *)src);
	if ((int)dstsize == 0)
		return (srcsize);
	o = ft_strlen((char *)dst);
	if ((int)dstsize >= o)
		return (dstsize + srcsize);
	i = 0;
	while (dstsize && (--dstsize - o) && src[i])
	{
		dst[o + 1] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (srcsize + o);
}

/*int	main(void)
{
	const char	src[] = "hola que ";
	char		dst[60] = "tal";
	int			dstsize;

	dstsize = 12;
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%zu", strlcat(dst, src, dstsize));
	return (0);
}*/
