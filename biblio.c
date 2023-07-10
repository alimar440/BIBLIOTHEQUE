#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotheque.h"

/*typedef struct {
    char id[20] ;
    char titre[20] ;
    char auteur[20] ;
    char discipline[20] ;
} livre ;

typedef struct {
    char nom[10] ;
    char universite[5] ;
    livre liste[100];
    int nblivre ;
}biblio ;*/

biblio* creation_de_bibliotheque(char* name , char* univ ){
    biblio *bib = malloc(sizeof(biblio)) ;
    //bib->liste = calloc(100 , sizeof(livre)) ;
    bib->nblivre = 0 ;

    strcpy(bib->nom ,name) ;
    strcpy(bib->universite ,univ) ;

    return bib ;
}

void destruction(biblio *bib){
    //free(bib->liste);
    free(bib);
}

void ajout_livre(biblio *bib) {
    printf("Titre : ");
    scanf("%s", bib->liste[bib->nblivre].titre);

    printf("Auteur : ");
    scanf("%s", bib->liste[bib->nblivre].auteur);

    printf("Dicipline : ");
    scanf("%s", bib->liste[bib->nblivre].discipline);

    bib->nblivre++;
}

void recherche (biblio bib , char* ident){
    for (int i = 0; i < bib.nblivre; i++) {
        if (strcmp(bib.liste[i].id, ident ) == 0) {
            printf("Livre trouvé :\n");
            printf("ID : %s\n", bib.liste[i].id);
            printf("Titre : %s\n", bib.liste[i].titre);
            printf("Auteur : %s\n", bib.liste[i].auteur);
            printf("Discipline : %s\n", bib.liste[i].discipline);
            return;
        }
    }

}
void livre_informatique(biblio bib){
    char* ident = "informatique" ;
    for (int i = 0; i < bib.nblivre; i++) {
        if (strcmp(bib.liste[i].discipline, ident ) == 0) {

            printf("ID : %s\n", bib.liste[i].id);
            printf("Titre : %s\n", bib.liste[i].titre);
            printf("Auteur : %s\n", bib.liste[i].auteur);

            return;
        }
    }
}

void livre_auteur(biblio bib , char* writer){

    for (int i = 0; i < bib.nblivre; i++) {
        if (strcmp(bib.liste[i].auteur, writer ) == 0) {

            printf("ID : %s\n", bib.liste[i].id);
            printf("Titre : %s\n", bib.liste[i].titre);
            printf("Auteur : %s\n", bib.liste[i].auteur);

            return;
        }
    }
}


void affichage_bibliotheque(biblio bib) {
    printf("Bibliothèque : %s\n", bib.nom);
    printf("Université : %s\n", bib.universite);
    printf("Nombre de livres : %d\n", bib.nblivre);
    printf("Liste des livres :\n");

    for (int i = 0; i < bib.nblivre; i++) {
        printf("Livre %d :\n", i + 1);
        printf("  ID : %s\n", bib.liste[i].id);
        printf("  Titre : %s\n", bib.liste[i].titre);
        printf("  Auteur : %s\n", bib.liste[i].auteur);
        printf("  Discipline : %s\n", bib.liste[i].discipline);
    }
}

void saisie_bibliotheque(biblio *bib){
   /* printf("Bibliothèque : \n") ;
    scanf("%s", bib.nom) ;
    printf("Université : \n") ;
    scanf("%s", bib.universite) ;*/
    printf("Nombre de livres : \n") ;
    scanf("%d", &bib->nblivre) ;
    printf("remplissez les livres :\n") ;
    for (int i = 0; i < bib->nblivre; i++) {
        printf("Livre %d :\n", i + 1) ;
        printf("  ID : \n");
        scanf("%s",bib->liste[i].id);
        printf("  Titre : \n");
        scanf("%s",bib->liste[i].titre);
        printf("  Auteur : \n");
        scanf("%s",bib->liste[i].auteur);
        printf("  Discipline : \n");
        scanf("%s",bib->liste[i].discipline);
    }

}
