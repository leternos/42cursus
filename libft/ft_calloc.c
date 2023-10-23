/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:03:29 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 16:21:33 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void *ft_memset(void *ptr, int value, size_t n);

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total = nmemb * size;
    void *p = malloc(total);

    if (!p)
        return (NULL);

    return (ft_memset(p, 0, total));
}

void *ft_memset(void *ptr, int value, size_t n)
{
    unsigned char *s;

    s = (unsigned char *)ptr;
    while (n > 0)
    {
        s[n - 1] = value;
        n--;
    }
    return (ptr);
}

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
