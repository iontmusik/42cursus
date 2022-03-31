/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:30:16 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/03/31 18:40:21 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo;

	ultimo = ft_lstlast(*lst);
	ultimo->next = new;
	new->next = NULL;
}

int	main(void)
{
	//char	*new;
	//char	**lst;
	int		i;
	t_list	*lst;
	int	*ptr;
	i = 1;

	lst = 0;
	while (i < 6)
	{
		ptr = malloc(sizeof (int));
		*ptr = i;
		if (i == 1)
			lst = ft_lstnew(ptr);
		else
			ft_lstadd_back(&lst, ft_lstnew(ptr));
		i++;
	}
	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst=lst->next;
	}

	//*lst = "mi perro azul";
	//new = "hola que tal estas";
	//printf("%s", ft_lstadd_back(lst, new));
	//return (0);
}
