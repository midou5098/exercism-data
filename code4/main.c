
#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int m,idw;
struct cellule *train;
int main(){
    do{
        printf("<====================menu======================>\n");
        printf("              1 pour ajouter en tete            \n");
        printf("              2 pour ajouter en queue           \n");
        printf("              3 pour chercher                   \n");
        printf("              4 pour afficher                   \n");
        printf("              0 pour sortir                     \n");
        scanf(" %d",&m);
        if(m==1){
            train=ajout(train);
        }
        else if(m==2){
            train=que(train);
        }
        else if(m==3){
            printf("donner le numero ");
            scanf("%d",&idw);
            chercher(train ,idw);
        }
        else if(m==4){
            afficher(train);
        }
    }while(m!=0);
    return 1;}

