/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:46:15 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:42:22 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = 0;
	while (str1[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (n != 0 && i == n)
		return (str1[n - 1] - str2[n - 1]);
	else if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}

/*
int main(void)
{
	char s[20] = "Leternos";
	char s2[20] = "Leternos";
	int res = ft_strncmp(s, s2, 3);
	printf("%d\n", res);
	return (0);
}
*/