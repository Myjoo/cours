#include <stdio.h>
#include <stdlib.h>
#include "mesFonctions.h"
#define TVA 0.21

int main() {
        int nb = 862, tSize = 3;
        int tab [] = {5, 7, 3};
        int *copy = NULL;

        NbChiffre(nb);

        SommeTableau(tab, tSize);

        MinTableau(tab, tSize);

        MaxTableau(tab, tSize);

        copy = ArrayCopy(tab, tSize);
        AfficherTableau(copy, tSize);

        return 0;
}
