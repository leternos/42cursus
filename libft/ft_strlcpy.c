/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:16:30 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 16:21:12 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';		
	}
	return (src_len);
}

int main(void){
	char dest[20];
	const char *src = "This is a string";
	size_t copied = ft_strlcpy(dest, src, 6);
	

	printf("Copied %zu chars: '%s'\n", copied, dest);
	return (0);
}