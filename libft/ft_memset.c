/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:49:22 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/18 19:30:07 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void *ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)ptr;
	while(n > 0)
	{
		s[n - 1] = value;
		n--;
	}
	return (ptr);
}

int	main(void)
{
	char buffer[10] = "Hello";
	printf("%s\n", ft_memset(buffer, 'A', 2));
	return (0);
}