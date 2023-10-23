/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:18:46 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 18:28:41 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t n)
{
	if (*little == '\0')
		return (char *)big;
	while (*big != '\0' && n > 0)
	{
		const char *haystack = big;
		const char *needle = little;
		
		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		
		if (*needle == '\0')
			return (char *)big;
		big++;
		n--;
	}
	return NULL;
}

int main(void)
{
	char big[] = "Hello, , This, yes, This is a test string";
	char little[] = "This is a test";
	
	char *result = ft_strnstr(big, little, 35);
	
	if (result != NULL)
		printf("Sub found at pos: %ld\n", (result - big));
	else
		printf("Sub not found");
	return (0);
}
