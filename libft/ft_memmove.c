/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:01:20 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/20 15:28:33 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;
	size_t	i;
	
	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			d[n -1] = s[n - 1];
			n--;
		}
	}
		else
		{
			while (i < n)
			{
				d[i] = s[i];
				i++;
			}
		}
	return (dest);
}	
	
int main() {
    char data[20] = "Hello, World!";
    char* src = &data[0];
	//char *src = "Mundo Ola";
    char* dest = &data[7];
	//char *dest = "Ola Mundo";

    //ft_memmove(dest, src, 6); // copy World
	ft_memmove(dest, src, 6);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
