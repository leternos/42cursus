/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:05:36 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 21:11:47 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		++count;
	while (n)
	{
		++count;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_len(n);
	ptr = malloc(len + 1);
	if (NULL == ptr)
		return (NULL);
	ptr[len] = '\0';
	if (0 == n)
		ptr[0] = '0';
	else if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		if (n < 0)
			ptr[--len] = (~(n % 10) + 1) + 48;
		else
		{
			ptr[--len] = (n % 10) + 48;
			n /= 10;
		}
	}
	return (ptr);
}

/*
int main()
{
  char *str = ft_itoa(-2134);
  printf("%s\n", str);

  str = ft_itoa(42);
  printf("%s\n", str);
  str = ft_itoa(707);
  printf("%s\n", str);

  str = ft_itoa(INT32_MIN);
  printf("%s\n", str);

  str = ft_itoa(INT32_MAX);
  printf("%s\n", str);

  str = ft_itoa(0);
  printf("%s\n", str);

  return 0;
}
*/