// Ce fichier contiendra toutes les classes du projet
#include <stdio.h>

typedef struct {
	int vies;
	char nom[25];
    int const classe; // 0 = shogun, 1 = samuraï, 2 = ninja, 3 = ronin
    int cartes[25]; // Stockes les cartes d'un joueur selon son id
} Joueurs;

