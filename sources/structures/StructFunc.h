#ifndef STRUCTFUNC_H
#define STRUCTFUNC_H

void PrintPersonne(Personnes p);
void PrintDate(Date d);
void ParcourirStruct(Personnes * header);
Personnes * NewPersonne (Personnes * header, Personnes * p, char nom [], char prenom [] , int age);

#endif