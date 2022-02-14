/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:23:38 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/24 08:53:34 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = n_count(n);
	p = (char *) malloc (i + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	p[i] = '\0';
	while (i-- && n)
	{
		p[i] = (n % 10) + 48;
		n /= 10;
	}
	return (p);
}
/*
int main()
{
	printf(" %s ", ft_itoa(123456));
}
*/
