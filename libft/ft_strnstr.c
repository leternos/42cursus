/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:18:46 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:44:22 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;

	l_len = ft_strlen(little);
	if (!l_len)
		return ((char *)big);
	while (*big && l_len <= len--)
	{
		if (!ft_memcmp(big, little, l_len))
			return ((char *)big);
		big++;
	}
	return (0);
}

/*
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

*/