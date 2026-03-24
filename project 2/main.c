#include "headers.h"
struct hospital *hospitals;

int main(void) {
    int choice,n;
    char s[5];    
    do {
        choice = show_menu();
        
        switch(choice) {
            case 1:
                add_patient(hospitals);
                break;
                
            case 2:
                add_hospital(hospitals);
                break;
                
            case 3:
                search_patient(hospitals);
                break;
                
            case 4:
                search_hospital(hospitals);
                break;
                
            case 5:
                extract(hospitals);
                break;
            case 6:
                import();
                break;
            case 7:
                printf("wanna modify a patient or a hospital(1 or 0)\n");
                scanf("%d",&n);
                if(n==1){
                    modify_patient();}
                else if(n==0){
                    modify_hospital();}
                else{
                    printf("wrong choice mate....\n");}
                break;
            case 8:
            printf("wht's the password? : \n");
            scanf("%5s",s);
            if(strcmp(s,"ceren")==0){
                admin_mode();
            }
            
            
            }
        
    } while(choice != 9);
    
    return 0;
}