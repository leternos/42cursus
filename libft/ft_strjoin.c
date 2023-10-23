/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:22:20 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/23 15:45:34 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	char *str;

	str = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	i = 0;

	while (s1[i] && s2[i])
	{
		str[i] = s1[i] + s1[strlen(s1) + i];
		i++;
	}
	str[i] = '\0';
	
	return (str);
}

int	main(void)
{
	const char *s1 = "Primeira";
	const char *s2 = "Segunda";
	
	char *result = ft_strjoin(s1, s2);

	printf("As duas: %s\n", result);

	return (0);
}