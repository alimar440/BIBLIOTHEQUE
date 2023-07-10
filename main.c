#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotheque.h"

int main() {
    char nom[10] = "B.U" ;
    char univ[5] = "UGB" ;

    biblio *bib = creation_de_bibliotheque(nom,univ) ;
    affichage_bibliotheque(*bib) ;

    int choix = 0 ;

    printf ("Veillez saisir les livres du bibliotheque : \n") ;
    saisie_bibliotheque(bib) ;

    do {
        printf("\nMenu :\n") ;
        printf("1. Ajouter un livre\n") ;
        printf("2. Rechercher un livre par identifiant\n") ;
        printf("3. Afficher tous les livres de la bibliothèque\n") ;
        printf("4. Afficher les livres de la discipline 'Informatique'\n") ;
        printf("5. Afficher les livres d'un auteur\n") ;
        printf("6. Quitter\n") ;

        printf("Votre choix : " );
        scanf("%d", &choix) ;

        switch (choix) {
            case 1:
                ajout_livre(bib) ;
                break ;
            case 2: {
                char identifiant[20] ;
                printf("Identifiant du livre : ") ;
                scanf("%s", identifiant) ;
                recherche(*bib, identifiant) ;
                break ;
            }
            case 3:
                affichage_bibliotheque(*bib) ;
                break ;
            case 4:
                livre_informatique(*bib) ;
                break ;
            case 5: {
                char auteur[20] ;
                printf("Nom de l'auteur : ") ;
                scanf("%s", auteur) ;
                livre_auteur(*bib, auteur) ;
                break ;
            }
            case 6:
                printf("Au revoir.\n") ;
                break ;
            default:
                printf("Choix invalide. Veuillez réessayer.\n") ;
                break ;
        }

    } while (choix != 6) ;


    destruction(bib) ;

    return 0 ;
}
