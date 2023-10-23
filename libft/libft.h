#ifndef LIBFT_H
# define LIBFT_H

# include<stdlib.h>
# include<unistd.h>
# include<stddef.h> 

typedef struct	s_list
{
	void					*content;
	struct s_list	*next;
}							t_list;

size_t				ft_strlen(const char *str);
void				*ft_memset(void *ptr, int value, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_atoi(const char *nptr);
void				ft_bzero(void *ptr, size_t n);
int					ft_isalnum(char c);
int					ft_isalpha(char c);
int					ft_isascii(char c);
int					ft_isdigit(char c);
int					ft_isprint(char c);
void 				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void 				*ft_memset(void *ptr, int value, size_t n);
char 				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char 				*ft_strnstr(const char *big, const char *little, size_t n);
char 				*ft_strchr(const char *s, int c);
char				ft_tolower(char c);
char				ft_toupper(char c);

#endif