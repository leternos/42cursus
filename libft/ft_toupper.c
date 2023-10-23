/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:52:50 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/16 19:03:24 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;

		return (c);
}

int main(void)
{
	char res = ft_toupper('A');
	printf("%c\n", res);
	return (0);
}