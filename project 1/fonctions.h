#include "headers.h"

int show_menu(void){
    int m;
    printf("welcome to mohamed's library!\n");
    printf("1-add books/genres\n");
    printf("2-search books/genres\n");
    printf("3-delete books/genres\n");
    printf("4-export data to binary/.txt\n");
    printf("5-import data to binary/.txt\n");
    printf("6-show statics\n");
    printf("7-quit\n");
    scanf("%d",&m); 
    return m;
}
int add_book(struct genres* library){
    char s[20];
    book* b;
    book* s_book;
    struct genres* s_genre;
    printf("name the genre");
    scanf("%s",s);
    s_genre=search_genre(s ,library);
    if(s_genre==NULL){
        printf("genre doesnt exist");
        return 0;}
    s_book=s_genre->books;
    b=type_book();
    if(search_book(b,s_book)!=NULL){
        printf("book exists");
        return NULL;
    }
    while(s_book->next_book!=NULL){
        s_book=s_book->next_book;}
    s_book->next_book=(struct book*) malloc(sizeof(book));
    s_book->next_book=type_book();
    return 1;
}
int add_genre(struct genres* library){
    struct genres* n_genre;
    n_genre=type_genres();
    if (search_genre(n_genre->genre_name,library)!=NULL){
        printf("genre exists already nigga !");
        return NULL;
    }
    while(library->next_genre!=NULL){
        library=library->next_genre;}
    library->next_genre=(struct genres*) malloc(sizeof(genres));
    library->next_genre=n_genre;
    return 1;
}

































struct book* type_book(void){
    struct book* bok;
    printf("give name of the film\n");
    scanf("%s",bok->book_name);
    printf("give the author name\n");
    scanf("%s",bok->book_author);
    printf("number of pages?\n");
    scanf("%d",&bok->pages);
    return bok;
}
struct genres* type_genres(void){
    struct genres* t_gen;
    printf("give name of the genre\n");
    scanf("%s",t_gen->genre_name);
    printf("you need to initialize at least one boook in this new genre \n");
    t_gen->books=type_book();
    return t_gen;
}













//void search_b(struct genres* library){
  //  struct book* f_book,s_book;
    //printf("whts the name of the book ");
    //scanf("%s",s_book);
    //f_book=search_book(s_book,library->books)
//}































struct book* search_book(struct book* book,struct book* shelve){
    while (shelve->next_book!=NULL){
        if(strcmp(shelve->book_author,book->book_author)==0 || strcmp(shelve->book_name,book->book_name)==0){
            return shelve;}
        shelve=shelve->next_book;}
    return NULL;
}
struct genres* search_genre(char s[10],struct genres* library){
    struct genres* temp=library;
    while(temp->next_genre!=NULL){
        if (strcmp(temp->genre_name,s)!=0){
            return temp;
        temp=temp->next_genre;}
    return NULL;}}
