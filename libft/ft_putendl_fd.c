/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:16 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/27 11:47:37 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}

/*
int	main()
{
	ft_putendl_fd("hello", 0);
	ft_putendl_fd("hello", 1);
	ft_putendl_fd("hello", 2);
	//3 not in terminal
	ft_putendl_fd("hello", 3);
}
*/
