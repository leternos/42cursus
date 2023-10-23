/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:07:37 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/17 13:59:27 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char	uc;
	size_t	i;

	p = s;
	uc = (unsigned char)c;
	i = 0;
	
	while (i < n)
	{
		if (p[i] == uc)
		{
			return (void *)(p + i);
		}
		i++;
	}
	return NULL;
}

int main(void)
{
	char str[] = "Hello World";
	char *result = ft_memchr(str, 'o', 11);
	
	if (result != NULL)
		printf("%ld\n", (result - str));
	else
		printf("not found");
	
	return (0);
}