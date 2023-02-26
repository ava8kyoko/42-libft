# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 09:53:46 by mchampag          #+#    #+#              #
#    Updated: 2021/06/25 12:10:14 by mchampag         ###   ########.fr        #
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

OBJS =		$(SRCS:.c=.o)

BONUS =		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			ft_lstmap.c\

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar -rc

RM = rm -f

$(NAME): $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o ${<:.c=.o}

all: $(NAME)

bonus : $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
