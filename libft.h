/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:07:14 by sad-aude          #+#    #+#             */
/*   Updated: 2021/04/27 18:50:45 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t i);
size_t			ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strcapitalize(char *str);
char			*ft_strchr(const char *s, int c);
int				ft_strichr(char *str, char c);
char			*ft_strrchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strcpy(char *dest, char *src);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_atoi(const char *str);
char			*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *src);
char			*ft_substr(char *s, unsigned int start, size_t len, int id);
char			*ft_strjoin(char *s1, char *s2, int id);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_ultoa(unsigned long int n);
char			*ft_itoa_base(unsigned int value, int base);
char			*ft_ultoa_base(unsigned long long value, int base);
void			ft_strdel(char **str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			*ft_stringnew(int size);
void			*ft_realloc(void *ptr, size_t new_size, size_t old_size);
void			double_ft_strdel(char **dest);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void(*f)(void*));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));

#endif
