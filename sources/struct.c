#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Personnes Personnes;
typedef struct Personnes
    {
        char nom [15];
        char prenom [15];
        int age;
        Personnes * next;
    }Personnes;

void printPersonne(Personnes p) {
    printf("\nNom = %s\n", p.nom);
    printf("Prenom = %s\n", p.prenom);
    printf("age = %d\n", p.age);    
}
void parcourirStruct(Personnes * header){
    int i = 1;
    Personnes * temp = header;

    while(temp != NULL){
            printf("\ntour %d", i++);
            printPersonne(*temp);
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

int main () {

    Personnes * header = NULL;

    Personnes p1;
    strcpy(p1.nom, "Dehar");
    strcpy(p1.prenom, "Gauthier");
    p1.age = 22;
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


    parcourirStruct(header);

    return 0;
}