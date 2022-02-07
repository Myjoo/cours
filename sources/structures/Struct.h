#ifndef STRUCT_H
#define STRUCT_H

typedef enum Sexe {
    MASCULIN,
    FEMININ,
    AUTRES
}Sexe;

typedef struct Date Date;
typedef struct Date 
{
    int jour;
    int mois;
    int annee;
}Date;

typedef struct Personnes Personnes;
typedef struct Personnes
{
    char nom [15];
    char prenom [15];
    Date * dat;
    Sexe sex;
    Personnes * next;
}Personnes;

#endif