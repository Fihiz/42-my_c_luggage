/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:07:14 by sad-aude          #+#    #+#             */
/*   Updated: 2021/04/28 23:37:30 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

/*									BONUS LST									*/

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*									FT_ASCII									*/
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_strcapitalize(char *str);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*									FT_COPY										*/
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *src);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);

/*									FT_FREE										*/
void			double_ft_strdel(char **dest);
void			ft_strdel(char **str);

/*									FT_INIT										*/
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			*ft_realloc(void *ptr, size_t new_size, size_t old_size);
void			*ft_stringnew(int size);

/*									FT_ITOA										*/
int				ft_atoi(const char *str);
char			*ft_itoa_base(unsigned int value, int base);
char			*ft_itoa(int n);
char			*ft_ultoa_base(unsigned long long value, int base);
char			*ft_ultoa(unsigned long int n);

/*									FT_LST										*/
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void(*f)(void*));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);

/*									FT_MEM										*/

void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t i);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			ft_memdel(void **str);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);

/*									FT_PUT										*/
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);

/*									FT_SPLIT_TRIM								*/
char			**ft_split(char const *s, char c);
char			*ft_strtrim(char const *s1, char const *set);

/*									FT_STR										*/
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strjoin(char *s1, char *s2, int id);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/*									FT_STRCHR									*/
char			*ft_strchr(const char *s, int c);
int				ft_strichr(char *str, char c);
char			*ft_strrchr(const char *s, int c);

/*									FT_SUB										*/
char			*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
char			*ft_substr(char *s, unsigned int start, size_t len, int id);

#endif
