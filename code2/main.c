#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int m,idw;
char nf[20],spec[20];
etudiant e;
int main(){
    do{
        printf("<====================menu======================>\n");
        printf("              1 pour ajouter                    \n");
        printf("              2 pour afficher                   \n");
        printf("              3 pour modifier                   \n");
        printf("              0 pour sortir                     \n");
        scanf(" %d",&m);
        if(m==1){
            printf(" donner le nom de fichier : ");
            scanf(" %s",nf);
            e=saisir();
            ajouter(nf,e);
        }
        else if(m==2){
            printf(" donner le nom de fichier : ");
            scanf(" %s",nf);
            afficher(nf);
        }
        else if(m==3){
            printf(" donner l'id d'étudiant : ");
            scanf(" %d",&idw);
            printf(" donner le nom de fichier");
            scanf(" %s",nf);
            printf(" donner la nouvelle specialité");
            scanf(" %s",spec);
            changer(nf,idw,spec);
        }
    }while(m!=0);
    return 1;}
