# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 14:55:27 by sad-aude          #+#    #+#              #
#    Updated: 2021/03/11 13:07:45 by salome           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_ascii/ft_isalnum.c \
			ft_ascii/ft_isalpha.c \
			ft_ascii/ft_isascii.c \
			ft_ascii/ft_isdigit.c \
			ft_ascii/ft_isprint.c \
			ft_ascii/ft_strcapitalize.c \
			ft_ascii/ft_tolower.c \
			ft_ascii/ft_toupper.c \
			ft_copy/ft_strcpy.c \
			ft_copy/ft_strdup.c \
			ft_copy/ft_strlcpy.c \
			ft_free/double_ft_strdel.c \
			ft_free/ft_strdel.c \
			ft_init/ft_bzero.c \
			ft_init/ft_calloc.c \
			ft_init/ft_realloc.c \
			ft_init/ft_stringnew.c \
			ft_itoa/ft_atoi.c \
			ft_itoa/ft_itoa_base.c \
			ft_itoa/ft_itoa.c \
			ft_itoa/ft_ultoa_base.c \
			ft_itoa/ft_ultoa.c \
			ft_mem/ft_memset.c \
			ft_mem/ft_memcpy.c \
			ft_mem/ft_memccpy.c \
			ft_mem/ft_memmove.c \
			ft_mem/ft_memchr.c \
			ft_mem/ft_memcmp.c \
			ft_mem/ft_memdel.c \
			ft_printf/ft_convert_characters.c \
			ft_printf/ft_convert_hexandpointer.c \
			ft_printf/ft_convert_int.c \
			ft_printf/ft_convert_symbols.c \
			ft_printf/ft_printf.c \
			ft_printf/ft_spec.c \
			ft_printf/utils_for_hexa_two.c \
			ft_printf/utils_for_hexa.c \
			ft_printf/utils_for_int.c \
			ft_printf/utils_for_pointer.c \
			ft_printf/utils_for_widthandprec.c \
			ft_put/ft_putchar_fd.c \
			ft_put/ft_putendl_fd.c \
			ft_put/ft_putnbr_fd.c \
			ft_put/ft_putstr_fd.c \
			ft_split_trim/ft_split.c \
			ft_split_trim/ft_strtrim.c \
			get_next_line/get_next_line.c \
			ft_str/ft_strcmp.c \
			ft_str/ft_strjoin.c \
			ft_str/ft_strlcat.c \
			ft_str/ft_strlen.c \
			ft_str/ft_strmapi.c \
			ft_str/ft_strncmp.c \
			ft_strchr/ft_strchr.c \
			ft_strchr/ft_strichr.c \
			ft_strchr/ft_strrchr.c \
			ft_sub/ft_strnstr.c \
			ft_sub/ft_substr.c

BONUSSRCS	=	ft_lst/ft_lstnew_bonus.c \
				ft_lst/ft_lstadd_front_bonus.c \
				ft_lst/ft_lstsize_bonus.c \
				ft_lst/ft_lstlast_bonus.c \
				ft_lst/ft_lstadd_back_bonus.c \
				ft_lst/ft_lstdelone_bonus.c \
				ft_lst/ft_lstiter_bonus.c \
				ft_lst/ft_lstclear_bonus.c \
				ft_lst/ft_lstmap_bonus.c

OBJS	=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(BONUSSRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

HEADER	=	libft.h

all:	$(NAME)

$(NAME):	$(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus:	$(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:		clean
	rm -f $(NAME)

re: fclean all
