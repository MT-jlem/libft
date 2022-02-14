/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:30:00 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/08 18:05:10 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	ch;

	ch = (char)c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == ch)
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}
/*
int	main()
{
	char	s[10] = "126345689";

		printf(" %s ", ft_strrchr(s, '6'));
}
*/
