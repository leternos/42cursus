/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:43:16 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:43:24 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		++i;
	}
	return (NULL);
}

/*

//gcc ft_memchr.c && ./a.out s c n 
int	main(int argc, char **argv)
{
	char	c;
	char	*s;
	int		n;

	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("%p\n\n", ft_memchr(s, c, n));
	printf("%p\n\n", memchr(s, c, n));
}
*/
