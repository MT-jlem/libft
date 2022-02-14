/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:07:49 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/10 18:47:44 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*ss;
	size_t			i;

	ss = (char *) s;
	i = 0;
	while (n > i)
	{
		if ((unsigned char)ss[i] == (unsigned char)c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char s[] = "fdadggj";
	printf(" %s ", ft_memchr(s, 'a', 5));
}
*/
