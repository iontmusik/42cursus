/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:55:12 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/09 12:22:03 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_string(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		ft_putchar("(null)");
	while (s[i] == '\0')
	{
		ft_putchar(s[i]);
		i++;
		len++;
	}
	return (len);
}
