/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:53:28 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/27 12:56:18 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*p;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	str = malloc (len + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (str);
}

/*
int main(void)
{
	const char *str = "hello";
	printf("%s\n", ft_strdup(str));
	return (0);
}

*/