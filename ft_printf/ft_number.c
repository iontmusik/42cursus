/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:13:30 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/09 15:59:49 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_number(int n)
{
	int	nbr;

	nbr = 0;
	if (n == -2147483648)
		ft_putchar("-2147483648");
	if (n < 0)
	{
		n = -n;
		ft_putchar("-");
		nbr++;
	}
	if (n > 9)
		nbr += ft_number(n / 10);
	nbr += ft_putchar(n % 10) + '0';
	return (nbr);
}
