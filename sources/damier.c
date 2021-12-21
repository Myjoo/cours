#include <stdio.h>
#include <stdlib.h>

void AfficherDamier (int tailleDamier, int tailleCase) {
        int i, j, k;
        for (size_t i = 1; i <= tailleDamier * tailleCase; i++) {
                for (size_t j = 1; j <= tailleDamier; j++) {
                        for (size_t k = 0; k <= tailleCase; k++) {
                                if( ( (i/tailleCase) + (i % tailleCase > 0) +j) %2) printf("O ");
                                else printf("X ");
                        }
                }
                printf("\n");
        }

}

int main(int argc, char const *argv[]) {
        int tailleDamier, tailleCase;

        printf("taille du damier\n");
        fflush(stdin);
        scanf("%d", &tailleDamier);

        printf("taille des cases du damier\n");
        fflush(stdin);
        scanf("%d", &tailleCase);

        int i =0; int j=0;

        AfficherDamier(tailleDamier, tailleCase);


        //Display a board of var * var
        // for (size_t i = 0; i < tailleDamier; i++) {
        //         printf("\n");
        //         for (size_t j = 0; j < tailleDamier; j++) {
        //                 if((i+j)%2) printf("O ");
        //                 else printf("X ");
        //         }
        // }

        // Display a board of  x *  x and tiles are y * y
        // char symbole;
        // int finDeCase = 0;
        // for (size_t i = 0; i < tailleDamier * tailleCase; i++) {
        //         printf("\n");
        //         for (size_t j = 0; j < tailleDamier; j++) {
        //                 if (finDeCase < tailleCase) {
        //                         if((j)%2) symbole = 'O';
        //                         else symbole = 'X';
        //                 }
        //                 else {
        //                         if((j)%2) symbole = 'X';
        //                         else symbole = 'O';
        //                 }
        //                 for (size_t k = 0; k < tailleCase; k++) {
        //                         printf("%c ", symbole);
        //                 }
        //         }
        //         if (finDeCase + 1 == (tailleCase + tailleCase)) finDeCase = -1;
        //         finDeCase++;
        // }
        // printf("\n");



        return 0;
}
