/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:30:30 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/11/07 19:04:13 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str_end;

	str_end = (char *)s + ft_strlen(s);
	while (str_end > s && *str_end != (char)c)
		str_end--;
	if (*str_end == (char)c)
		return (str_end);
	return (NULL);
}
