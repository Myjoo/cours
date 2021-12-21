#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// EX 49 - Nombre chiffre dans un nombre
void NbChiffre(int a){
        int i=0, b=a;
        if(a > 0){
                do
                {
                        a /= 10;
                        i++;
                } while (a > 0);   
        }
        printf("Il y a %d chiffre dans le nombre %d\n", i, b);
}
// EX 51 - Somme
void SommeTableau (int tab [], int tSize) {
        int i, somme = 0;
        for (size_t i = 0; i < tSize; i++)
        {
                somme+= tab[i];
        }
        printf("Somme du tableau : %d\n", somme);
}
// EX 51 - Min
void MinTableau (int tab [], int tSize) {
        int i, min = tab[0];
        for (size_t i = 1; i < tSize; i++)
        {
               if(min > tab[i]) min = tab[i]; 
        }
        printf("Min du tableau : %d\n", min);
}
// EX 51 - Max 
void MaxTableau (int tab [], int tSize) {
        int i, max = tab[0];
        for (size_t i = 1; i < tSize; i++)
        {
               if(max < tab[i]) max = tab[i]; 
        }
        printf("Max du tableau : %d\n", max);
}
// EX 52 - Copie d'un tableau dans un autre
int * ArrayCopy (int tab [], int tSize) {
        int copy [tSize], i;
        for (size_t i = 0; i < tSize; i++)
        {
                copy[i] = tab[i];
        }
        return copy;
}
// EX 53 - Copie inversé d'un tableau

// EX 57 - Copie inversé d'un tableau de String

void AfficherTableau(int tab [], int tSize) {
        int i;
        for (size_t i = 0; i < tSize; i++)
        {
                printf("%d ", tab[i]);
        }
        printf("\n");
}
