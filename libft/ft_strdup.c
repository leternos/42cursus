/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:53:28 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/18 16:01:29 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*p;
	size_t	len;
	
	len = 0;
	while(s[len])
		len++;
	str = malloc (len + 1);
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (str);
}

int main(void)
{
	const char *str = "hello";
	printf("%s\n", ft_strdup(str));
	return (0);
}