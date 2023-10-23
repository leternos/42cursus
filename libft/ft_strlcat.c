/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:30:34 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 16:21:09 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);
    size_t total_len = dst_len + src_len;
    size_t i = 0;

    if (size <= dst_len)
        return size + src_len;

    while (src[i] && (dst_len + i < size - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    
    dst[dst_len + i] = '\0'; 

    return total_len;
}

int main(void)
{
	char src[20] = "hello";
	char dest[20] = "haro";
	size_t result = ft_strlcat(dest, src, 6);
	printf("%zu", result);
	printf("%s", dest);
	
	return (0);
}