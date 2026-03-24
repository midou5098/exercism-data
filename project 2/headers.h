#ifndef headers_h
#define headers_h
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct patient {
    char name[10];
    int age;
    char disease[20];
    char condition[50];
    int kids;
    struct patient* next_patient;}patient;

typedef struct hospital {
    char name[10];
    int nb_patients;
    int capacity;
    char city[10];
    struct patient* patient;
    struct hospital* next_hospital;}hospital;
int show_menu(void);
int add_patient(struct hospital* hospitals);
int add_hospital(struct hospital* hospitals);
int search_hospital(struct hospital* hospitals);
int search_patient(struct hospital* hospitals);
int extract(struct hospital* hospitals);
struct hospital* type_hospital(void);
struct patient* type_patient(void);
#endif
