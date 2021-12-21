#include <stdio.h>
#include <stdlib.h>
#include "mesFonctions.h"
#define TVA 0.21

int main() {
        int nb = 862, tSize = 3;
        int tab [] = {5, 7, 3};
        int tab2 [] = {1,2,3,4,5};
        int copy [tSize], invCopy[5];
        int multiplication [10][10];
        int ex55 [10];

        NbChiffre(nb);

        SommeTableau(tab, tSize);

        MinTableau(tab, tSize);

        MaxTableau(tab, tSize);

        ArrayCopy(copy, tab, tSize);
        AfficherTableau(copy, tSize);

        InvertedArrayCopy(invCopy, tab2, 5);
        AfficherTableau(tab2, 5);
        AfficherTableau(invCopy, 5);

        remplirTableau2D(multiplication, 10);
        AfficherTableau2D(multiplication,10,10);

        RemplirTableauSerie(ex55, 10);
        AfficherTableau(ex55, 10);

        Password();

        return 0;
}
