NAME = libft.a

CC = gcc -c 

FLAGS = -Wall -Wextra -Werror

AR = ar

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC)	$(FLAGS)	$(SRC)
	$(AR)	$(NAME)		$(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

/*
** Règles communes (Makefile)
** • Si le projet le demande, vous devez rendre un Makefile qui
** 	compilera vos sources pour créer la sortie demandée, en
** 	utilisant les flags -Wall, -Wextra et -Werror. Votre Makefile
** 	ne doit pas relink.
** • Si le projet demande un Makefile, votre Makefile doit au
** 	minimum contenir les règles $(NAME), all, clean, fclean et re.
** • Pour rendre des bonus, vous devez inclure une règle bonus à
** 	votre Makefile qui ajoutera les divers headers, librairies ou
** 	fonctions qui ne sont pas autorisées dans la partie principale
** 	du projet. Les bonus doivent être dans une fichier _bonus.{c/h}.
** 	L’évaluation de la partie obligatoire et de la partie bonus sont
** 	faites séparément.
** • Si le projet autorise votre libft, vous devez copier ses sources
** 	et son Makefile	associé dans un dossier libft contenu à la racine.
** 	Le Makefile de votre projet doit compiler la librairie à l’aide
** 	de son Makefile, puis compiler le projet.
*/

/*
**  Considérations techniques
** • Interdiction d’utiliser des variables globales.
** • Si vous avez besoin de fonctions auxiliaires pour l’écriture 
** 		d’une fonction complexe, vous devez définir ces fonctions 
** 		auxiliaires en static dans le respect de la Norme.
** • Vous devez rendre tout vos fichiers à la racine de votre rendu.
** • Vous devez utiliser la commande ar pour créer votre librairie, 
** 		l’utilisation de la commande libtool est interdite.
*/


/*
** NAME = libft.a
** CC = gcc -c
** INCLUDE = libft.h
** FLAGS = -Wall -Wextra -Werror
** AR = ar rc
** 
** SRCS = *.c
** 
** OBJ = *.o
** 
** all: $(NAME)
** 
** $(NAME):
** 	$(CC)  $(FLAGS) $(SRCS)
** 	$(AR)  $(NAME) $(OBJ)
** 	ranlib $(NAME)
** 
** clean:
** 	/bin/rm -f $(OBJ)
** 
** fclean: clean
** 	/bin/rm -rf $(NAME)
** 
** re: fclean all
** 
** .PHONY: all clean fclean re
** © 2021 G
*/