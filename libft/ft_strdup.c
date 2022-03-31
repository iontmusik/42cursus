/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:21:49 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/28 13:54:33 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char	*ft_strdup(const char *s1)
{
	char	*d;

	d = malloc(strlen(s1) + 1);
	if (d == NULL)
		return (NULL);
	strcpy(d,s1);
	return (d);
}

/*int	main(void)
{
	const char	s1[] = "hola";

	printf("%s\n", ft_strdup(s1));
	printf("%s", strdup(s1));
	return (0);
}
*/