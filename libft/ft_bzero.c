/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:59:13 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 20:31:33 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)ptr;
	while (n > 0)
	{
		s[n - 1] = '\0';
		n--;
	}
}

/*
int main(void)
{
	char buffer[10] = "teste";
	ft_bzero(buffer, sizeof(buffer));
	printf("%s\n", buffer);
	return (0);
}

*/