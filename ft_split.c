/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <mjlem@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:50:48 by mjlem             #+#    #+#             */
/*   Updated: 2022/07/02 16:07:09 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	word_count(char const *s, char c)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }

// static char	**a_free(char **a)
// {
// 	int	i;

// 	i = 0;
// 	while (a[i])
// 	{
// 		free(a[i]);
// 		i++;
// 	}
// 	free(a);
// 	return (NULL);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**a;
// 	int		len;
// 	int		i;

// 	if (!s)
// 		return (NULL);
// 	a = (char **) malloc ((word_count(s, c) + 1) * sizeof(char *));
// 	if (!a)
// 		return (NULL);
// 	i = 0;
// 	while (*s)
// 	{
// 		while (*s && *s == c)
// 			s++;
// 		len = 0;
// 		while (s[len] != c && s[len])
// 			len++;
// 		if (*s != c && *s)
// 			a[i++] = ft_substr(s, 0, len);
// 		if (len != 0 && !a[i - 1])
// 			return (a_free(a));
// 		s += len;
// 	}
// 	a[i] = NULL;
// 	return (a);
// }

static int    is_sep(char sep, char c)
{
    if (sep == '\0')
        return (1);
    else if (c == sep)
        return (1);
    return (0);
}

static int    count_words(char const *s, char c)
{
    int    i;
    int    words;

    i = 0;
    words = 0;
    while (s[i])
    {
        if (!is_sep(s[i], c) && (is_sep(s[i + 1], c) || s[i + 1] == '\0' ))
            words++;
        i++;
    }
    return (words);
}

static void    ft_copy_word(char *dest, char const *from, char c)
{
    int    i;

    i = 0;
    while (!is_sep(from[i], c))
    {
        dest[i] = from[i];
        i++;
    }
    dest[i] = '\0';
}

static int    ft_move_to_tab(char **tab, char const *s, char c)
{
    int    i;
    int    j;
    int    word;

    word = 0;
    i = 0;
    while (s[i])
    {
        if (is_sep(s[i], c))
            i++;
        else
        {
            j = 0;
            while (!is_sep(s[i + j], c))
                j++;
            tab[word] = (char *)malloc(j + 1);
            if (!tab)
                return (0);
            ft_copy_word(tab[word], s + i, c);
            i = i + j;
            word++;
        }
    }
    return (1);
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int        word;
    size_t    i;

    i = 0;
    if (!s)
        return (NULL);
    word = count_words(s, c);
    tab = (char **)malloc(sizeof(char *) * (word + 1));
    if (!tab)
        return (NULL);
    tab[word] = 0;
    if (!ft_move_to_tab(tab, s, c))
    {
        while (tab[i++])
        {
            free(tab[i]);
        }
        free(tab);
    }
    return (tab);
}