/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:58:21 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 21:03:58 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*trimmed_str;

	start = 0;
	end = strlen(s1);
	trimmed_len = end - start;
	*trimmed_str = (char *)malloc(trimmed_len + 1);
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	if (trimmed_str == NULL)
		return (NULL);
	strncpy (trimmed_str, s1 + start, trimmed_len);
	trimmed_str[trimmed_len] = '\0';
	return (trimmed_str);
}

/*
int main(void)
{
    const char *s = "    This string will be trimmed     ";
    const char *set = " ";
    char *trimmed = ft_strtrim(s, set);

    if (trimmed == NULL)
    {
        fprintf(stderr, "Memory allocation failed. \n");
        return 1;
    }

    printf("Original: \"%s\"\n", s);
    printf("Trimmed: \"%s\"\n", trimmed);
    free(trimmed);
    return 0;
}

*/