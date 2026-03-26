#ifndef HEADERS_H
#define HEADERS_H

#include <vector>
#include <iostream>
#include <string>

            
    
            





class book{
    int s;
    std::string name;
    std::string author;
    std::string genre;
    int pages;
    bool borrowed;
    double ratings;
    public:
        void borrow(void){
        borrowed = !borrowed;
    }
    void modify(void){
        do {
            
            std::cout<<"*********modify ************ ";
            std::cout<<"aight wtchu tryna modify lil bro : ";
            std::cout<<"1 is for name  \n ";
            std::cout<<"2 is for author  \n ";
            std::cout<<"3 is for pages  \n ";
            std::cout<<"4 is for genre  \n ";
            std::cout<<"-1 is for exit  \n ";
            std::cin>>s;
            switch (s){
                case 1:
                    std::cout<<" new name type shi? : \n";
                    std::cin>>name;
                    break;
                case 2:
                    std::cout<<" new author type shi? : \n";
                    std::cin>>author;
                    break;
                    case 3:
                    std::cout<<" new pages type shi? : \n";
                    std::cin>>pages;
                    break;
                    case 4:
                    std::cout<<" new genre type shi? : \n";
                    std::cin>>genre;
                    break;
                    default:
                        std::cout<<" type a valid choice nigga \n";}
            }while(s!=-1);
            
        }
    }
class author{
    int s;
    std::string name;
    int age ;
    int bookcnt ;
    std::string color;
    public:
        void modify(void){
        do {
            std::cout<<"*********modifying a nigga************ ";
            std::cout<<"aight wtchu tryna modify lil bro : ";
            std::cout<<"1 is for name  \n ";
            std::cout<<"2 is for age  \n ";
            std::cout<<"3 is for viewing books number  \n ";
            std::cout<<"4 is for skin color  \n ";
            std::cout<<"-1 is for exit  \n ";
            std::cin>>s;
            switch (s){
                case 1:
                    std::cout<<" new name type shi? : \n";
                    std::cin>>name;
                    break;
                case 2:
                    std::cout<<" new age type shi? : \n";
                    std::cin>>age;
                    break;
                    case 3:
                    std::cout<<"dis nigga got "<<bookcnt <<"books \n";
                    break;
                    case 4:
                    std::cout<<" new skin type shi? : \n";
                    std::cin>>color;
                    break;
                    default:
                        std::cout<<" type a valid choice nigga \n";}
            }while(s!=-1);
            
        }
    };
extern std::vector<book> books;
extern std::vector<author> authors;
#endif