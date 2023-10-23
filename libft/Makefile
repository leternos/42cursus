# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcouto-f <gcouto-f@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 16:58:43 by gcouto-f          #+#    #+#              #
#    Updated: 2023/10/20 18:04:31 by gcouto-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a

SRC = 	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_strlen.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_tolower.c\
			ft_toupper.c

OBJS 	= 	$(SRCS:.c=.o)
RM		= 	rm -f		
LIBC	= 	ar -rcs
FLAGS	= 	-Wall -Wextra -Werror
INCS	= 	.

.c.o :
		${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}
			
all: $(NAME)

$(NAME): $(OBJS)
		${LIBC} $(NAME) $(OBJS)


fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJS) $(OBJS_B)

re:fclean all

.PHONY: all clean fclean re .c.o
