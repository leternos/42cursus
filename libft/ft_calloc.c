/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:03:29 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/27 12:14:29 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*p;

	total = nmemb * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	return (ft_memset(p, 0, total));
}

/*
int main(void)
{
    size_t nmemb = 6; // Number of elements (including the null terminator)
    size_t size = sizeof(char); // Size of each element

    char *p = (char *)ft_calloc(nmemb, size);
    if (p) {
        printf("%s\n", p);
        free(p);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

*/