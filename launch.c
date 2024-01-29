// Ce fichier initialisera les classes
#include <stdio.h>
#include <stdlib.h>
#include "libraries.c"
#include "nb_joueurs.c"

int main()
{
    printf("Bienvenue sur Katana, le jeu de carte.\n");
    int nombre = nb_joueurs();
    int random;
    int i;
    char nom_joueur[25];
    printf("%d personnes jouent.\n", nombre);

    //int donneur_classe[5][4] = {{1, 1, 1, 0}, {1, 1, 2, 0}, {1, 1, 1, 2}, {1, 1, 1, 3}, {1, 2, 1, 3}};
    for(i; i < nombre + 1; i++) {
        printf("Comment s'appelle le joueur %d ? : ", i + 1);
        scanf("%s", nom_joueur);
        printf("%s", nom_joueur);
    }
    return 0;
}