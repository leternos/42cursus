/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:58:21 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/27 12:20:06 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
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