#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Struct.h"
#include "StructFunc.h"

int main () {

    Personnes * header = NULL;

    Date d1 = {29, 01, 1999};

    Personnes p1;
    strcpy(p1.nom, "Dehar");
    strcpy(p1.prenom, "Gauthier");
    p1.age = 23;
    p1.next = NULL;
    
    Personnes p2 = {"Frusciante", "John", 53, NULL};
    Personnes p3 = {"Kiedis", "Anthony", 57, NULL};
    Personnes p4 = {"Bond", "James", 007};

    p1.next = &p2;
    p2.next = &p3;
    p3.next = &p4;

    header = &p1;


    Personnes *p5 = malloc(sizeof(Personnes));

    p5->age = 27;
    strcpy(p5->nom,"Cobain");
    strcpy(p5->prenom,"Kurt");

    p5->next = header;
    header = p5;

    Personnes *p6 = malloc(sizeof(Personnes));
    header = NewPersonne(header, p6, "Jackson", "Michael", 29);

    ParcourirStruct(header);

    PrintDate(d1);

    return 0;
}