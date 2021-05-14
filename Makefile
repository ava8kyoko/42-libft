# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 09:53:46 by mchampag          #+#    #+#              #
#    Updated: 2021/05/14 15:21:38 by mchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		gcc

CFLAGS = 	-Wall -Wextra -Werror

# SRCS = 		$(wildcard *.c)

SRCS =		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
			ft_tolower.c ft_toupper.c\

OBJS = 		$(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
# ranlib $(NAME)

# %.o: %.c

# $(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
