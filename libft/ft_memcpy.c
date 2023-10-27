/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:32:52 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:33:04 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (NULL == src && NULL == dst)
		return (NULL);
	while (n--)
		*((unsigned char *)dst + i++) = *(unsigned char *)src++;
	return (dst);
}

/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return ((void *)dest);
}
*/
/*
int	main(void)
{
	char	v[] = "hello";
	char	v1[] = "World";

	printf("%s ->%p\n", v,  ft_memcpy(v, v1, 3));

	printf("%s ->%p\n", v,  memcpy(v, v1, 3));
}
*/
