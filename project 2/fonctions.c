#include "headers.h"



int show_menu(void){
    int m;
    printf("welcome to hospitals database\n");
    printf("1-add a patient \n");
    printf("2-add a hospital\n");
    printf("3-search for a patient \n");
    printf("4-search for a hospital\n");
    printf("5-extract data to binary/.txt\n");
    printf("6-import data from binary/.txt\n");
    printf("7-modify data\n");
    printf("8-admin mode\n");
    printf("9-quit\n");
    scanf("%d",&m); 
    return m;
}
int add_patient(struct hospital* hospitals){
    char s[10];
    struct patient* temp,*parc;
    float found=true;
    printf("which hospital u which to add the next nigga at? :\n");
    scanf("%s",s);

    while(hospitals->next_hospital!=NULL && found==false){
        if (strcmp(hospitals->name,s)==0){
            found=true;}
        hospitals=hospitals->next_hospital;
    }
    if(found==false){
        printf("hospital not found gang....\n");
        return 0;}
    if(hospitals->nb_patients=hospitals->capacity){
        printf("we got no more beds gang...");
        return 0; }
    hospitals->nb_patients++;
    temp=type_patient();
    if(hospitals->nb_patients==0){
        hospitals->patient=(struct patient*)malloc(sizeof(patient));
        hospitals->patient=temp;
    }else{
        parc=hospitals->patient;
        while(parc->next_patient!=NULL){
            parc=parc->next_patient;
        }
        parc->next_patient=(struct patient*)malloc(sizeof(patient));
        parc->next_patient=temp;
    }
    return 1;
}
int add_hospital(struct hospital* hospitals){
    struct hospital* temp; 
    
    while(hospitals->next_hospital!=NULL){
        hospitals->next_hospital;
    }
    temp=type_hospital();
    hospitals->next_hospital=(struct hospital*)malloc(sizeof(struct hospital*));
    hospitals->next_hospital=temp;
    return 0;}
int search_hospital(struct hospital* hospitals){
    char s[10];
    struct patient* temp,*parc;
    float found=true;
    printf("wht's the name of hospital : :\n");
    scanf("%s",s);
    while(hospitals->next_hospital!=NULL && found==false){
        if (strcmp(hospitals->name,s)==0){
            found=true;}
        hospitals=hospitals->next_hospital;
    }
    if(found==false){
        printf("hospital not found gang....\n");
        return 0;}
    printf("<===========hospital info================>\n");
    printf("name : %s\n",hospitals->name);
    printf("capacity : %d\n",hospitals->capacity);
    printf("number of patients : %s\n",hospitals->nb_patients);
    printf("city : %s\n",hospitals->city);
    return 0;}
int search_patient(struct hospital* hospitals){
    char s[10];
    struct patient* temp;
    float found=true;
    printf("which hospital u which to add the next nigga at? :\n");
    scanf("%s",s);

    while(hospitals->next_hospital!=NULL && found==false){
        if (strcmp(hospitals->name,s)==0){
            found=true;}
        hospitals=hospitals->next_hospital;
    }
    if(found==false){
        printf("hospital not found gang....\n");
        return 0;}
    temp=hospitals->patient;
    printf("whts the name of the patient gang : \n");
    scanf("%s",s);
    while(temp->next_patient!=NULL){
        if(strcmp(temp->name,s)==0){
            printf("<=============patient info==================>");
            printf("name : %s\n",temp->name);
            printf("age : %d\n",temp->age);
            printf("number of kids : %d\n",temp->kids);
            printf("disease : %s\n",temp->disease);
            printf("condition : %s\n",temp->condition);
            return 0;
        }
        temp=temp->next_patient;}
    printf("that nigga either dead or u trippin gng ....\n");
    return 1;
}
int extract(struct hospital* hospitals){
    int m;
    char s[10];
    struct patient* perc;
    printf("binary or .txt file?(1 or 0)");
    scanf("%d",&m);
    printf("what would u want to name ur file( give only name without .bin)\n");
    scanf("%s",s);
    strcat(s,".bin");
    if(m==1){
        FILE *f=fopen(s,"wb");
        while(hospitals!=NULL){
            perc=hospitals->patient;
            fwrite(hospitals,sizeof(struct hospital),1,f);
            while(perc!=NULL){
                fwrite(perc,sizeof(struct patient),1,f);
                perc=perc->next_patient;}
            hospitals=hospitals->next_hospital;
        }
    }else if(m==0){
        FILE *f=fopen(s,"w");
        while(hospitals!=NULL){
            perc=hospitals->patient;
            fprintf(f,"HOSPITAL : %s %d %d %s\n",hospitals->name,hospitals->nb_patients,hospitals->capacity,hospitals->city);
            while(perc!=NULL){
                fprintf(f,"PATIENT : %s %d %s %s %d\n",perc->name,perc->age,perc->disease,perc->condition,perc->kids);
                perc=perc->next_patient;}
            hospitals=hospitals->next_hospital;}}
    else {
        printf("wrong choice mate ..");
    }}
int import(struct hospital* hospitals){
    char s[10];
    int m;
    struct hospitals* temp_h;
    struct patients* temp_p;    
    printf("binaire or .txt(0 or 1)");
    scanf("%d",&m);
    if(m==0){
        printf("whts the name of the file : \n");
        scanf("%10s",s);
        strcat(s,".bin");
        FILE *f=fopen(s,"rb");
        temp_h=(struct hospitals*)malloc(sizeof(struct hospitals*));


        while(fread(temp_h,sizeof(struct hospital*),1,f)==1){
            




        }
    }
    
    
















}



struct hospital* type_hospital(void){
    struct hospital* temp;
    printf("hospital name : \n");
    scanf("%s",temp->name);
    printf("hospital capacity : \n");
    scanf("%s",temp->capacity);
    printf("hospital city : \n");
    scanf("%s",temp->city);
    temp->nb_patients=0;
    return temp;
}
struct patient* type_patient(void){
    struct patient* temp;
    printf("give me names... : \n");
    scanf("%s",temp->name);
    printf("give his age : \n");
    scanf("%d",&temp->age);
    printf("how many kids : \n");
    scanf("%d",&temp->kids);
    printf("disease : \n");
    scanf("%s",temp->disease);
    printf("condition : ");
    scanf("%s",temp->condition);
    return temp;}

