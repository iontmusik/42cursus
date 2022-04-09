/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variables.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:14:48 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/09 20:27:32 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_variables(char let, va_list lst)
{
	if (let == 'c')
		return (ft_putchar(va_arg(lst, char)));
	if (let == 's')
		return (ft_string(va_arg(lst, char *)));
	if (let == 'd')
		return (ft_number(va_arg(lst, int)));
	if (let == 'i')
		return (ft_number(va_arg(lst, int)));
	if (let == 'p')
	{
		ft_string("0x");
		return (ft_pointer(va_arg(lst, void *)) + 2);
	}
	if (let == 'u')
		return (ft_unsigned_dec(va_arg(lst, unsigned int)));
	if (let == 'x')
		return (ft_hexadecimal(va_arg(lst, "0123456789abcdf")));
	if (let == 'X')
		return (ft_hexadecimal(va_arg(lst, "0123456789ABCDF")));
	if (let == %)
		return (ft_putchar('%'));
	return (0);
}
