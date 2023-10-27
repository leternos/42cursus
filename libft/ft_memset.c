/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:43:45 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/27 14:48:27 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	typedef unsigned char *t_byte;
	while (len-- > 0)
		*((t_byte)b + len) = c;
	return (b);
}

/*
int main(void)
{
	char v[10];

	ft_memset(v, 42, 5);

	for (int i = 0; i < 10; ++i)
		printf("%d\n", v[i]);
	printf("ft_memset-> %p\n\n", ft_memset(v, 42, 5));

	memset(v, 21, 5);

	for (int i = 0; i < 10; ++i)
		printf("%d\n", v[i]);
	printf("Real memset-> %p\n", memset(v, 21, 5));
}
*/