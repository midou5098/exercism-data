#ifndef KJKJ_H_INCLUDED
#define KJKJ_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book{
    char book_name[20];
    char book_author[20];
    int pages;
    struct book* next_book;
}book;

typedef struct genres{
    char genre_name[20];
    int  number_books;
    struct book* books;
    struct genres* next_genre;
}genres;










#endif