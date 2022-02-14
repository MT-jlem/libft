/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:26:31 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/24 14:45:10 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
int main()
{
	t_list *l1;
	t_list *l2;
	t_list *l3;

	l1 = ft_lstnew("achraf");
	l2 = ft_lstnew("mehdi");
	l3 = ft_lstnew("zbi");

	l1->next = l2;
	ft_lstadd_back(&l1, l3);
	
	while (l1)
	{
		printf("%s \n", l1->content);
		l1 = l1->next;
	}
}
*/