#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int m,n;
char nom[20],nf[20];
void main(){
    do{
        printf("<====================menu======================>\n");
        printf("              1 pour enregistrer                \n");
        printf("              2 pour chercher                   \n");
        printf("              3 pour afficher                   \n");
        printf("              4 pour supprimer                  \n");
        printf("              0 pour sortir                  \n");
        scanf("%d",&m);
        if(m==1){
            printf(" donner le nom de fichier : ");
            scanf("%s",nf);
            save(nf);
        }
        else if(m==2){
            printf(" donner le nom de fichier : ");
            scanf("%s",nf);
            printf(" donner le nom");
            scanf("%s",nom);
            chercher(nom,nf);
        }
        else if(m==3){
            printf(" donner le nom de fichier : ");
            scanf("%s",nf);
            printf(" donner le nombre");
            scanf("%d",&n);
            afficher(nf,n);
        }
        else if(m==4){
            supprimer();}


    }while(m!=0);}
