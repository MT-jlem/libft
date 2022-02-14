/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:43:12 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/14 00:48:24 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8};
	int dest[];
	int *r = ft_memcpy((void *)0, (void *)0, 3);
	
	for (int k = 0;  k < 7; k++)
	{
	printf("%d ,", r[k]);
	}
}

	printf ("\n");
	int *m = memcpy(&src[0], &src[4], 0);
	for (int k = 0;  k < 7; k++)
	{
	printf("%d .", m[k]);
	}
}
*/
