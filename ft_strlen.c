/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:41:12 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/07 15:00:31 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;	

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	char s[20] = "123456789";
   printf("%d \n",ft_strlen(s));	
}

*/