/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:14:24 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/11/07 23:27:24 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (-2147483648 == n)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n *= -1;
		write(fd, "-", 1);
	}
	if (0 == n)
		write(fd, "0", 1);
	else if (n > 0 && n < 10)
		ft_putchar_fd((n + 48), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
