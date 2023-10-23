/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:47:47 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/23 15:16:47 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;
	
	str = (char *)malloc(len + 1);
	i = 0;
	
	if (str == NULL)
		return NULL;
		
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';

	return(str);
}

int	main(void)
{
	const char *s = "Hello this is a string";

	char *result = ft_substr(s, 6, 16);

	if  (result != NULL)
	{
		printf("Substring: %s\n", result);
		free(result);
	} 
	else
	{
		printf("Memory allocation failed. \n");
	}

	return (0);
}
