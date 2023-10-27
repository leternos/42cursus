/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:16:30 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:37:17 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dst || NULL == src || !dstsize)
		return (src_len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}

/*
#define DEST_SIZE 5

int	main(void)
{
	char	dst[DEST_SIZE];
	char	src[] = "rrrrrr\0\0\0\0\0\0";


	printf("%s-> %lu\n", dst, strlcpy(dst, "lorem", DEST_SIZE));

	char	dst1[DEST_SIZE];

	printf("My function -> %s-> %lu\n", dst, ft_strlcpy(dst1, "lorem", DEST_SIZE));

}
*/