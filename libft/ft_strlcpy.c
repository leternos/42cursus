/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:16:30 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/27 12:52:46 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	srcsize = 0;
	i = 0;
	srcsize = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
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