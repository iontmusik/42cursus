/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_dec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:38:31 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/09 16:04:45 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_unsigned_dec(unsigned int n)
{
	int	nbr;

	nbr = 0;
	if (n > 9)
		nbr += ft_unsigned_dec(n / 10);
	nbr += ft_putchar(n % 10) + '\0';
	return (nbr);
}
