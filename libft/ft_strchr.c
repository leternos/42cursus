/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:05:53 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:40:16 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

/*
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
*/