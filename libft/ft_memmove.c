/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:17:53 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 21:37:47 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst > src)
	{
		i = (int)len -1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
		memcpy(dst, src, len);
	return (dst);
}
