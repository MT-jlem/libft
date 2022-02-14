/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:47:58 by mjlem             #+#    #+#             */
/*   Updated: 2021/11/14 00:56:24 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (len > i && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > (i + j) && haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
 int main()
 {
    char s[] = "aaabcabcd";
    char d[] = "abcd";
printf("%s\n",ft_strnstr(s,d,9));
printf("%s", strnstr(s,d,9));

}

*/