/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:32:59 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/27 16:49:04 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void f(unsigned int i, char *c)
{
	i = 0;
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}

int main ()
{
	char s[] = "abcdef";
	ft_striteri(s, &f);
	printf(" %s ", s);
}
*/
