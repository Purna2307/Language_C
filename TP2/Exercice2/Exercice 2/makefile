#
//  makefile
//  Exercice 2
//
//  Created by Purna  on 17/09/2024.
//

CC = gcc
CFLAGS = -Wall -std=c99
OBJ = point.o tab_point.o princ.o

# Cible par défaut
all: programme

# Compilation du programme final
programme: $(OBJ)
	$(CC) $(CFLAGS) -o programme $(OBJ)

# Compilation des fichiers objets
point.o: point.c point.h
	$(CC) $(CFLAGS) -c point.c

tab_point.o: tab_point.c tab_point.h point.h
	$(CC) $(CFLAGS) -c tab_point.c

princ.o: princ.c tab_point.h point.h
	$(CC) $(CFLAGS) -c princ.c

# Nettoyer les fichiers objets et exécutables
clean:
	rm -f *.o programme
