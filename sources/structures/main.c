#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Struct.h"
#include "StructFunc.h"

int main () {

    Personnes * header = NULL;

    Date * d1 = malloc(sizeof(Date));
    NewDate(d1, 29, 01, 1999);


    Personnes p1;
    strcpy(p1.nom, "Dehar");
    strcpy(p1.prenom, "Gauthier");
    p1.sex = MASCULIN;
    p1.dat = d1;
    p1.next = NULL;
    
    Personnes p2 = {"Frusciante", "John", d1, 0};
    Personnes p3 = {"Monroe", "Marilyn", d1, 1};

    p1.next = &p2;
    p2.next = &p3;

    header = &p1;


    Personnes *p5 = malloc(sizeof(Personnes));

    p5->dat = d1;
    p5->sex = 0;
    strcpy(p5->nom,"Cobain");
    strcpy(p5->prenom,"Kurt");

    p5->next = header;
    header = p5;

    Personnes *p6 = malloc(sizeof(Personnes));
    header = NewPersonne(header, p6, "Jackson", "Michael", d1, 2);

    ParcourirStruct(header);

    PrintDate(p6->dat);

    //Struct date naissance (jour,mois,annee) et Struct pilote (nom, date) et 
    //struct voiture (int num plaque, enum marque, tab[] pilote)
    // => Faire un tableau de 3 voitures
    //Hardcoder 2 voitures et 3eme demander num / marque / etc...
    // Afficher tab des 3 voitures avec tous les datas
    //Fonction afficherVoiture(numero Voiture)

    return 0;
}