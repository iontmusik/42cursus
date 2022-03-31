/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:27:30 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/25 23:01:53 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		sizes1;

	i = 0;
	if (!s1)
		return (NULL);
	sizes1 = strlen((char *)s1);
	while (s1[i] && (strchr(set, s1[i])))
		i++;
	j = sizes1 - 1;
	while (s1[j] && strchr(set, s1[j]))
		j--;
	return (ft_substr(&(s1[i]), 0, j - 1));
}

/*int	main(void)
{
	char	s1[] = "holaquetalhola";
	char	set[] = "hola";

	printf("%s", ft_strtrim(s1, set));
}*/
