#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

typedef struct{
    int id;
    char nom[20];
    float moy;
    char spec[20];

    }etudiant;

etudiant saisir();
int chercher(char nf[],int id);
int ajouter(char nf[],etudiant e);
int afficher(char nf[]);
int changer(char nf[],int id,char spes[]);



#endif // HEADERS_H_INCLUDED
