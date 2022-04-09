/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:56:42 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/09 20:01:33 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_string(char s);
int		ft_number(int n);
int		ft_variables(char let, va_list lst);
int		ft_decimal(int n);
int		ft_unsigned_dec(unsigned int n);
int		ft_hexa_min(unsigned int );
int		ft_hexa_may(int n);

#endif