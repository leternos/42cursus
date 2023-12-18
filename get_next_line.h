/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:03:45 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/11/23 16:03:49 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
void				ft_attach(t_list **lst, char *buf);
char				*ft_newline(t_list **lst, char *line, int l_line);
void				ft_clear(t_list **lst);
void				ft_lstnew(t_list **lst, int fd);
t_list				*ft_lastnode(t_list **lst);
int					found_newline(t_list *lst);
int					ft_contsize(t_list *temp);
int					ft_cpylst(t_list *temp, char *line, int displacer);
void				ft_del(t_list **lst);

#endif
