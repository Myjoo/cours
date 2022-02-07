#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Struct.h"

void PrintPersonne(Personnes p) {
    printf("\nNom = %s\n", p.nom);
    printf("Prenom = %s\n", p.prenom);
    printf("age = %d\n", p.age);    
}

void PrintDate(Date d) {
    printf("\n%d/%d/%d\n", d.jour, d.mois, d.annee);
}

void ParcourirStruct(Personnes * header){
    int i = 1;
    Personnes * temp = header;

    while(temp != NULL){
            printf("\ntour %d", i++);
            PrintPersonne(*temp);
            temp = temp->next;
        }
}

Personnes * NewPersonne (Personnes * header, Personnes * p, char nom [], char prenom [] , int age) {
    strcpy(p->nom, nom);
    strcpy(p->prenom, prenom);
    p->age = age;
    p->next = header;

    return p;
}
