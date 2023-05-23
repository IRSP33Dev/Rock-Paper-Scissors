#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choixJoueur, choixOrdinateur;
    int rejouer = 1;

    printf("Jouons à Pierre, Feuille, Ciseaux !\n");

    while (rejouer) {
        printf("1. Pierre\n");
        printf("2. Feuille\n");
        printf("3. Ciseaux\n");
        printf("Faites votre choix (1-3) : ");
        scanf_s("%d", &choixJoueur);

        // Génère un choix aléatoire pour l'ordinateur (1-3)
        srand(time(NULL));
        choixOrdinateur = rand() % 3 + 1;

        printf("L'ordinateur choisit : ");
        switch (choixOrdinateur) {
        case 1:
            printf("Pierre\n");
            break;
        case 2:
            printf("Feuille\n");
            break;
        case 3:
            printf("Ciseaux\n");
            break;
        }

        printf("Le joueur choisit : ");
        switch (choixJoueur) {
        case 1:
            printf("Pierre\n");
            break;
        case 2:
            printf("Feuille\n");
            break;
        case 3:
            printf("Ciseaux\n");
            break;
        }

        // Détermine le gagnant
        if (choixJoueur == choixOrdinateur) {
            printf("Egalite !\n");
        }
        else if ((choixJoueur == 1 && choixOrdinateur == 3) ||
            (choixJoueur == 2 && choixOrdinateur == 1) ||
            (choixJoueur == 3 && choixOrdinateur == 2)) {
            printf("Le joueur gagne !\n");
        }
        else {
            printf("L'ordinateur gagne !\n");
        }

        // Demande au joueur s'il souhaite rejouer
        printf("Voulez-vous rejouer ? (1 - Oui, 0 - Non) : ");
        scanf_s("%d", &rejouer);
    }

    return 0;
}
