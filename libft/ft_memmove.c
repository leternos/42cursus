/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:33:57 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:35:34 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	typedef unsigned char byte;
	if ((NULL == src && NULL == dst) || len <= 0)
		return (dst);
	if (dst > src)
		while (len--)
			*((byte *)dst + len) = *((byte *)src + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char    *dest;

	dest = src + 1;
	printf("%s\n", (char *)ft_memmove(src, dest, 8));
}
*/
