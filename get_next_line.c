/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:04:33 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/12/04 13:33:57 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*lastnod;
	int		i;
	int		k;
	char	*buf;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (ft_del(lst));
	lastnod = ft_lastnode(lst);
	i = 0;
	k = 0;
	while (lastnod->content[i] != '\0' && lastnod->content[i] != '\n')
		++i;
	while (lastnod->content[i] != '\0' && lastnod->content[++i])
		buf[k++] = lastnod->content[i];
	buf[k] = '\0';
	ft_del(lst);
	ft_attach(lst, buf);
}

void	ft_attach(t_list **lst, char *buf)
{
	t_list	*new_node;
	t_list	*lastnod;

	if (!buf[0])
		return (free(buf));
	new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		free(buf);
		return (ft_del(lst));
	}
	lastnod = ft_lastnode(lst);
	if (!lastnod)
		*lst = new_node;
	else
		lastnod->next = new_node;
	new_node->content = buf;
	new_node->next = NULL;
}

char	*ft_newline(t_list **lst, char *line, int l_line)
{
	t_list	*temp;
	int		displacer;

	temp = *lst;
	displacer = 0;
	l_line += ft_contsize(temp);
	line = (char *)malloc(sizeof(char) * (l_line + 1));
	if (!line)
	{
		ft_del(lst);
		return (NULL);
	}
	displacer = ft_cpylst(temp, line, displacer);
	line[l_line] = '\0';
	return (line);
}

void	ft_lstnew(t_list **lst, int fd)
{
	int		char_read;
	char	*buf;

	char_read = 0;
	while (!found_newline(*lst))
	{
		buf = malloc(BUFFER_SIZE + 1);
		if (NULL == buf)
			return (ft_del(lst));
		char_read = read(fd, buf, BUFFER_SIZE);
		if (!char_read)
		{
			free(buf);
			return ;
		}
		buf[char_read] = '\0';
		ft_attach(lst, buf);
	}
}

char	*get_next_line(int fd)
{
	static t_list	*lst = NULL;
	char			*line;
	int				l_line;

	line = NULL;
	l_line = 0;
	if (read(fd, &line, 0) < 0)
	{
		ft_del(&lst);
		return (NULL);
	}
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_lstnew(&lst, fd);
	if (lst == NULL)
		return (NULL);
	line = ft_newline(&lst, line, l_line);
	if (lst == NULL)
		return (NULL);
	ft_lstclear(&lst);
	return (line);
}
