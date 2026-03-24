#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <string.h>



wagon saisir(struct cellule *train){
    int timp,s;
    wagon e;
    printf("donner le type");
    scanf(" %s",e.type);
    do{
        printf("donner l' état (doit etre soit 1 ou 0) : ");
        scanf(" %d",&timp);
    }while(timp>1 || timp<0);
    if (timp==0){
    strcpy(e.etat,"panne");

    }
    else{
        strcpy(e.etat,"bon etat");
    }
    do{
        printf("donner le numero : ");
        scanf(" %d",&s);
    }while(chercher(train,s)==1);
    e.num=s;

    return e;}

struct cellule * ajout(struct cellule *train){
    wagon e=saisir(train);
    struct cellule * T= (struct cellule*) malloc(sizeof(struct cellule));
    T->wg=e;
    T->ls=train;
    train=T;
    return train;
    }
struct cellule *que(struct cellule *train){
    struct cellule * T= (struct cellule*) malloc(sizeof(struct cellule));
    T->wg=saisir(train);
    struct cellule *temp=train;
    while (train->ls!=NULL){
        train = train->ls;
    }
    train->ls=T;
    return temp;
    }


int chercher(struct cellule *train,int id){
    while (train!=NULL){
        if (train->wg.num==id){
            printf("\nwagon numero %d\n , type %s \n, etat %s\n\n",train->wg.num,train->wg.type,train->wg.etat);
            return 1;
        }
        else {
            train=train->ls;
        }
    }
    return 0;
}
void afficher(struct cellule *train){
    while (train!=NULL){
        printf("\nwagon numero %d\n , type %s \n, etat %s\n\n",train->wg.num,train->wg.type,train->wg.etat);
        train = train->ls;}}





