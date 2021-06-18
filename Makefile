# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 09:53:46 by mchampag          #+#    #+#              #
#    Updated: 2021/06/18 15:42:13 by mchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		gcc

CFLAGS = 	-Wall -Wextra -Werror

# TARGET =

# SRCS = 		$(wildcard *.c)

SRCS =		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
			ft_tolower.c ft_toupper.c\
			ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
			ft_strnstr.c ft_strrchr.c\
			ft_atoi.c\
			ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memccpy.c\
			ft_memmove.c ft_bzero.c\
			ft_calloc.c ft_strdup.c\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
			ft_strmapi.c\
			ft_putchar_fd.c ft_putstr_fd.c\

OBJS = 		$(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
# ranlib $(NAME)

# %.o: %.c

# $(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJS)

allclean: all clean

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
