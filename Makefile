# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 09:53:46 by mchampag          #+#    #+#              #
#    Updated: 2021/06/23 16:33:18 by mchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

HEADER =	libft.h

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
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

BONUS =		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

$(NAME): $(OBJS)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus : $(OBJS) $(BONUS_OBJS)
		ar -rc $(NAME) $(OBJ) $(BONUS_OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
