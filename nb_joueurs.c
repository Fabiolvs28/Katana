// Va demander le nombre de joueur et vérifier le résultat
#include <stdio.h>

int question() {
    int question_nombre;
    printf("Combien de joueurs jouent ? ");
    scanf("%d", &question_nombre);
    return question_nombre;
}

int nb_joueurs()
{
    int nombre = question();
    while (1) {
        if (nombre < 3)
        {
            printf("Il y a trop peu de joueurs !\n");
            nombre = question();
        } else if (nombre > 7)
        {
            printf("Il y a trop de joueurs !\n");
            nombre = question();
        } else {
            break;
        }
    }

    return nombre;
}