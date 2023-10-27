/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:43:48 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:44:02 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		++i;
	}
	return (0);
}

/*

int	main(int argc, char **argv)
{
	char	*s = argv[1];
	char	*s1 = argv[2];
	int		n = atoi(argv[3]);
	
	if (!ft_memcmp(s, s1, n))
		printf("The string are equal up to %d letters\n\n\n", n);
	else 
		printf("The strings are different\n\n\n");

	if (!memcmp(s, s1, n))
		printf("The string are equal up to %d letters\n", n);
	else 
		printf("The strings are different\n");

	
}
*/
