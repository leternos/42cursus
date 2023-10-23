/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:56:29 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 18:07:15 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char *s1;
	const unsigned char *s2;
	size_t i;

	s1 = ptr1;
	s2 = ptr2;
	i = 0;

	while (i < num)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    
    int result1 = ft_memcmp(str1, str2, 5); // Comparing "Hello" and "Hello"
    int result2 = ft_memcmp(str1, str3, 5); // Comparing "Hello" and "World"
	
    printf("%d\n%d", result1, result2);

	
    if (result1 == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }
    
    if (result2 == 0) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }
    
    return 0;
}
