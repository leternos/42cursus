/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:23:40 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/16 19:18:12 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	int	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);	
}

int	main(void){
	char src[] = "Hello World";
	char dest [20];
	
	ft_memcpy(dest, src, sizeof(src));

	printf("%s\n", src);
	printf("%s\n", dest);

	return (0);
	
}