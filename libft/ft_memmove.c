/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:33:57 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/11/07 18:35:38 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	typedef unsigned char t_byte;
	if ((NULL == src && NULL == dst) || len <= 0)
		return (dst);
	if (dst > src)
		while (len--)
			*((t_byte *)dst + len) = *((t_byte *)src + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
