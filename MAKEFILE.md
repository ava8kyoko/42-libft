
Makefile et règles
https://www.youtube.com/watch?v=-riHEHGP2DU Make - écrire un Makefile
/!\ Le nom des commandes peut être n'importe quoi. /!\

# Appelle la cible finale (ici prog), donc l'ordre n'a plus d'importance
# Écrire dans la ligne de commande:
make all

# VARIABLES nom modifiables
Évite de tout mettre en dur, permet d'utiliser des commandes génériques

# Compilateur
CC = gcc

# Exécutable
EXEC = prog

# fichiers sources
SRC = $(wildcard *.c)
même chose que
SRC = main.c player.c

# objets
OBJ = $(SRC:.c=.o)
même chose que
OBJ = main.o player.o

# Exemples de variables par convention
# pour faire des commentaires 

# Compilateur C vs C++
CC / CXX
# Flags C VS C++
CFLAGS / CXXFLAGS
# Édition de liens
LDFLAGS
#Fichiers objets
OBJ 
# Exécutable
EXEC

# VARIABLES SPÉCIALES
$@ nom cible
$< nom première dépendance
$^ liste dépendances
$? liste dépandances plus récentes que la cible
$* nom fichier, sans son extension

# CONDITIONS
ne pas en abuser, seulement l'essentiel
Pas obligatoire

WINDOWS = yes

ifeq ($(WINDOWS), yes)
    EXEC = prog.exe
else
    EXEC = prog

ifdef

all : prog

# A besoin de main.o et de player.o pour être exécuté, 
# donc si absents, passe aux deux prochaines directives.
prog //Cible : main.o player.o //Dépendance
    gcc -o prog main.o player.o//Commande à exécuter si dépendance satisfaite

# MÊME CHOSE QUE... DOIT ÊTRE APRÈS %.o
$(EXEC) : $(OBJ)
    $(CC) -o $@ $^

# Compile main.c pour créer main.o
# Effectué uniquement lors de la première tentative de compilation 
# et lorsque le fichier main.c est modifié.
main.o : main.c
    $(CC) -o main.o -c main.c

# Autre façon de faire sans variables
player.o : player.c
    gcc -o player.o //.o est la sortie -c player.c

# Au lieu d'avoir les deux dernières DOIT ÊTRE AVANT $(EXEC)
%.o : %.c
    $(CC) -o $@ -c $<

# Commande de nettoyage qui supprime tous les fichier objets (.o)
# à adapter en fonction du système d'exploitation (OS ici est linux)
clean :
    rm -rf *.o

# Commande maximale qui enlève tout.
# Fera clean et ensuite ses propres directives
mrproper : clean
    rm -rf prog

# Commande d'archivage
# Créer fichier zip pour tous les fichiers sources (.c)
zip : 
