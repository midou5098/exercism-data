#include "string.h"
int m;
char n[10];
struct genres* library;
int main(void){
    do{
    m=show_menu();
    switch(m){
        case 1:
            printf("finna add a book or genre?\n");
            scanf("%d",&n);
            if (strcmp(n,"book")==0){
                add_book(&library);}
            else{
                add_genre(&library);}
            break;
        case 2:
            printf("finna search a book or genre?\n");
            scanf("%d",&n);
            if (strcmp(n,"book")==0){
                search_b(&library);}
            else{
                search_g(&library);}
            break;
        case 3:
            printf("finna delete a book or genre?\n");
            scanf("%d",&n);
            if (strcmp(n,"book")==0){
                delete_book(&library);}
            else{
                delete_genre(&library);}
            break;
        case 4:
            printf("finna export as binary file or text?\n");
            scanf("%d",&n);
            if (strcmp(n,"binary")==0){
                export_binary(&library);}
            else{
                export_text(&library);}
            break;
        case 5:
            printf("finna import as binary file or text?\n");
            scanf("%d",&n);
            if (strcmp(n,"binary")==0){
                import_binary(&library);}
            else{
                import_text(&library);}
            break;
            }
            



























    }while(m!=7);

}