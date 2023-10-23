/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:30:30 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 14:47:10 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	const char *last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			last = s;
		}
	s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char*)last);
}

int main(void) {
    char s[20] = "Hello";
    char *result = ft_strchr(s, 'o');

    if (result != NULL) {
        printf("Character found: %c\n", *result);
    } else {
        printf("Character not found\n");
    }

    return 0;
}