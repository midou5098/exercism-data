#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED
typedef struct{
    char name[20];
    char prenom[20];
    int nbe;
    }employe;

int save(char fichier[]);
int chercher(char nom[],char nf[]);
int afficher(char nf[],int n);
int supprimer();

#endif // HEADERS_H_INCLUDED
