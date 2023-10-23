/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:05:53 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/17 14:35:03 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

int main(void) {
    char s[20] = "Hello";
    char *result = ft_strchr(s, 'l');

    if (result != NULL) {
        printf("Character found: %c\n", *result);
    } else {
        printf("Character not found\n");
    }

    return 0;
}