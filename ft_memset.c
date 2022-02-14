/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:17:49 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/08 18:04:01 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = b;
	while (i < len)
	{	
		str[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	int	i[5] ;
	int *j = ft_memset(i, 35, 20);
	for (int k = 0;  k < 5; k++)
	{
	printf("%c ", j[k]);
	}
}
*/
