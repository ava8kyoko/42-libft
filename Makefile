# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 09:53:46 by mchampag          #+#    #+#              #
#    Updated: 2021/05/13 13:53:28 by kyoko            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		gcc

CFLAGS = 	-Wall -Wextra -Werror

SRC = 		$(wildcard *.c)

OBJ = 		$(SRCS:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
# ranlib $(NAME)

# %.o: %.c
#$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
