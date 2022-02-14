/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:36:58 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/14 00:47:43 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;
	size_t			i;

	s3 = (unsigned char *) s1;
	s4 = (unsigned char *) s2;
	i = 0;
	while (n > i)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	int s[] = {1,2,3,4,5,6,7, 8, 9};
	int c[] = {1,2,3,4,5,5,7, 8, 9};

	printf(" %d ", ft_memcmp(s, c, 6 * sizeof(int)));
	printf(" %d ", memcmp(s, c, 6 * sizeof(int)));
}
*/
