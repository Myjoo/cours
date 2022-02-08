#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Struct.h"
#include "StructFunc.h"

void PrintPersonne(Personnes * p) {
    char genre[15];
    SetSexe(p, genre);
    printf("\n%s %s (%s)\n", p->nom, p->prenom, genre);
}

void PrintDate(Date * d) {
    printf("\n%d/%d/%d\n", d->jour, d->mois, d->annee);
}

void ParcourirStruct(Personnes * header){
    int i = 1;
    Personnes * temp = header;

    while(temp != NULL){
            printf("\ntour %d", i++);
            PrintPersonne(temp);
            temp = temp->next;
        }
}

Personnes * NewPersonne (Personnes * header, Personnes * p, char nom [], char prenom [] , Date *date, int sexe) {
    int temp = sexe;

    strcpy(p->nom, nom);
    strcpy(p->prenom, prenom);
    p->dat = date;
    p->sex = (Sexe) temp;
    p->next = header;

    return p;
}

void NewDate (Date * d, int age, int mois, int annee) {
    d->jour = age;
    d->mois = mois;
    d->annee = annee;
}
void SetSexe(Personnes * p, char *genre) {
    switch (p->sex)
    {
    case 0:
        strcpy(genre, "Homme");
        break;
    case 1:
        strcpy(genre, "Femme");
        break;
    case 2:
        strcpy(genre, "Non-Binaire");
        break;
    default:
        strcpy(genre, "Inconnu");
    }
}
