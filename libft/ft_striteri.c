/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:13:07 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/10/26 21:13:15 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (NULL == s || NULL == f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		++i;
	}
}

/*
int	main(int argc, char **argv)
{
	void	(*f)(unsigned int, char *);

	f = ft_capitalize;
	ft_striteri(argv[1], f);
	printf("%s\n", argv[1]);
}
*/
