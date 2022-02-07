#ifndef STRUCTFUNC_H
#define STRUCTFUNC_H

void PrintPersonne(Personnes * p);
void SetSexe(Personnes *p, char *genre);
void PrintDate(Date * d);
void ParcourirStruct(Personnes * header);
Personnes * NewPersonne (Personnes * header, Personnes * p, char nom [], char prenom [] , Date *dat, int sexe);
void NewDate (Date * d, int age, int mois, int annee);

#endif