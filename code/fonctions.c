#include "headers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int save(char fichier[]){
    char nom[20],prenom[20];
    int nb,n;
    FILE *f=fopen(fichier,"a");
    if(f==NULL){
        return 1;
    }
    printf("combien d'employés voulez vous ajouter");
    scanf("%d",&n);
    for(int h=0;h<n;h++){
        printf("nom :");
        scanf("%s",nom);
        printf("prenom :");
        scanf("%s",prenom);
        printf("nbre enfants :");
        scanf("%d",&nb);
        fprintf(f,"%s %s %d\n",nom,prenom,nb);
    }
    fclose(f);
    return 0;
    }
int chercher(char nom[],char nf[]){
    char id[20],prenom[20];
    int x;
    FILE *f=fopen(nf,"r");
    if(f==NULL){
        return 1;
    }
    while(fscanf(f,"%s %s %d",id,prenom,&x)==3){
        if(strcmp(nom,id)==0){
            printf("prenom : %s",prenom);
            fclose(f);
            return 0;
        }

    }
    printf("employée introuvable");
    fclose(f);
    return 0;}

int afficher(char nf[],int n){
    char id[20],prenom[20];
    int x;
    FILE *f=fopen(nf,"r");
    if(f==NULL){
        return 1;
    }
    while(fscanf(f,"%s %s %d",id,prenom,&x)==3){
        if(x>=n){
            printf("prenom : %s , nom : %s \n",prenom,id);
        }

    }
    fclose(f);
    return 0;}


int supprimer(){
    char id[20],prenom[20];
    int x;
    FILE *f=fopen("nombre_enfants.txt","r");
    FILE *temp=fopen("tmp.txt","w");
    if(f==NULL || temp==NULL){
        return 1;
    }
    while(fscanf(f,"%s %s %d",id,prenom,&x)==3){
        if(x!=0){
            fprintf(temp,"%s %s %d\n",id,prenom,x);
        }

    }
    fclose(f);
    fclose(temp);
    remove("nombre_enfants.txt");
    rename("tmp.txt","nombre_enfants.txt");
    return 0;

    }





