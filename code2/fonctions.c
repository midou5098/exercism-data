#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "headers.h"

etudiant saisir(){
    etudiant e;
    printf("donner l id , nom , moyenne et specialité: ");
    scanf(" %d %s %f %s",&e.id,e.nom,&e.moy,e.spec);
    return e;}

int chercher(char nf[],int id){
    etudiant idw;
    FILE *f=fopen(nf,"rb");
    if(f==NULL){
        return 0;}
    while(fread(&idw,sizeof(etudiant),1,f)==1){
            if (idw.id==id){
                fclose(f);
                return 1;}}
    fclose(f);
    return 0;}

int ajouter(char nf[],etudiant e){
    if (chercher(nf,e.id)==1){
            return 0;}
    FILE *f=fopen(nf,"ab");
    fwrite(&e,sizeof(etudiant),1,f);
    fclose(f);
    return 1;}

int afficher(char nf[]){
    etudiant x,idk,tab[100];
    int i=0;
    FILE *f=fopen(nf,"rb");
    if(f==NULL){
        return 0;
    }
    while(fread(&idk,sizeof(etudiant),1,f)==1){
            if (idk.moy>=10){
                tab[i]=idk;
                i++;}}
    for(int h=0;h<i-1;h++){
        for(int j=0;j<i-1;j++){
        if(tab[j].moy>tab[j+1].moy){
            x=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=x;}}}
    for(int u=0;u<i;u++){
        printf("nom %s , id %d , moyenne %f,specialité %s",tab[u].nom,tab[u].id,tab[u].moy,tab[u].spec);
    }
    fclose(f);
    return 1;}

int changer(char nf[],int id,char spes[]){
    etudiant idk;
    FILE *f=fopen(nf,"rb");
    FILE *temp=fopen("temp.bin","wb");
    if(f==NULL || temp==NULL){
        return 0;}
    while(fread(&idk,sizeof(etudiant),1,f)==1){
        if(idk.id==id){
            strcpy(idk.spec,spes);
            fwrite(&idk,sizeof(etudiant),1,temp);
        }
        else{fwrite(&idk,sizeof(etudiant),1,temp);

        }

    }
    fclose(temp);
    fclose(f);
    remove(nf);
    rename("temp.bin",nf);
    return 1;
    }
