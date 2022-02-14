/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:50:26 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/14 00:52:55 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *) s1;
	s4 = (unsigned char *) s2;
	while (n > i)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		else if (s3[i] == '\0' && s4[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "123455789";
	char s2[] = "123456789";
	printf(" %d ", ft_strncmp(s1, s2, 10));
}
*/
