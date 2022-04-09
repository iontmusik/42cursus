/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:12:45 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/09 20:19:33 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_ptr(void *ptr)
{
	unsigned long	pointer;
	int				ind;
	char			*str;

	pointer = (unsigned long)ptr;
	ind = 0;
	if (ind > 15)
		ind += ft_ptr((void *)(pointer / 16));
	str = "0123456789abcdef";
	ind += ft_putchar(str[pointer % 16]);
	return (ind);
}
