#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED

typedef struct {
    char id[20] ;
    char titre[20] ;
    char auteur[20] ;
    char discipline[20] ;
}livre ;

typedef struct {
    char nom[10] ;
    char universite[5] ;
    livre liste[100];
    int nblivre ;
}biblio ;


biblio* creation_de_bibliotheque(char* name , char* univ ) ;
void destruction(biblio *bib) ;
void affichage_bibliotheque(biblio bib) ;
void livre_auteur(biblio bib , char* writer) ;
void livre_informatique(biblio bib) ;
void recherche (biblio bib , char* ident) ;
void ajout_livre(biblio *bib) ;
void saisie_bibliotheque(biblio *bib) ;




#endif // BIBLIOTHEQUE_H_INCLUDED
