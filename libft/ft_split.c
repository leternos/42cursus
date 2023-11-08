/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:04:17 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/11/06 19:59:06 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**ft_free_split(char **lst, int i)
{
	while (i > 0)
		free(lst[--i]);
	free(lst);
	return (NULL);
}

static char	**ft_add_substr(char **lst, char const *s, size_t word_len, int i)
{
	char	*substr;

	substr = ft_substr(s, 0, word_len);
	if (!substr)
		return (ft_free_split(lst, i));
	lst[i] = substr;
	return (lst);
}

static char	**ft_process_split(char **lst, char const *s, char c, size_t *p_i)
{
	size_t		word_len;
	char const	*next;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			next = ft_strchr(s, c);
			if (next != NULL)
				word_len = (size_t)(next - s);
			else
				word_len = ft_strlen(s);
			lst = ft_add_substr(lst, s, word_len, *p_i);
			if (!lst)
				return (NULL);
			s += word_len;
			(*p_i)++;
		}
	}
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	i;

	if (!s)
		return (NULL);
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	lst = ft_process_split(lst, s, c, &i);
	if (!lst)
		return (NULL);
	lst[i] = NULL;
	return (lst);
}
