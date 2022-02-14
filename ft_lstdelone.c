/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:45:52 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/26 11:36:10 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main()
{
	t_list *l;
	t_list *d;

	l = ft_lstnew(ft_strdup("abcdef"));
	d = ft_lstnew(ft_strdup("123456"));
	l->next = d;
	while (l)
	{
		printf("%s \n", l->content);
		l = l->next;
	}
}
*/
