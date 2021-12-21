#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TVA 0.21

int main(int argc, char const *argv[]) {
        int nbUtilisateur;
        int i = 0;
        int j = 0;

        // EX IV-32
        // do {
        //     printf("Entrez un chiffre de 1 à 3\n");
        //     fflush(stdin);
        //     scanf("%d", &nbUtilisateur);
        // } while ((nbUtilisateur < 1) || (nbUtilisateur > 3));

        // EX IV-35
        // printf("Entrez un entier\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < 11; i++) {
        //     printf("%d\n", nbUtilisateur + i);
        // }

        // EX IV-36
        // printf("Entrez un entier\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 1; i < 11; i++) {
        //     printf("%d\n", nbUtilisateur * i);
        // }

        // EX IV-37
        // printf("Entrez un entier\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = nbUtilisateur - 1; i > 1; i--) {
        //     nbUtilisateur *= i;
        // }
        // printf("%d\n", nbUtilisateur);

        // EX IV-40
        // Variante A
        // for (size_t i = 0; i < 10; i++) {
        //     printf("\n");
        //     for (size_t j = i*10; j < i*10 + 10; j++) {
        //         printf("%d ", j);
        //     }
        // }
        // printf("\n");
        // Variante B
        // for (size_t i = 1; i < 10; i++) {
        //     printf("\n");
        //     for (size_t j = i; j < 100; j+=10) {
        //         printf("%d ", j);
        //     }
        // }

        // EX IV-42
        // Carré plein
        // printf("Taille du carré\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < nbUtilisateur; i++) {
        //     printf("\n");
        //     for (size_t j = 0; j < nbUtilisateur; j++) {
        //         printf("*");
        //     }
        // }
        // Carré vide
        // printf("Taille du carré\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < nbUtilisateur; i++) {
        //     printf("\n");
        //     for (size_t j = 0; j < nbUtilisateur; j++) {
        //         if((i == 0) || (i == nbUtilisateur - 1)){
        //             printf("*");
        //         }
        //         else if ((j == 0) || (j == nbUtilisateur - 1)) {
        //             printf("*");
        //         } else printf(" ");
        //     }
        // }
        // Triangle bord à Gauche
        // printf("Taille du triangle\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < nbUtilisateur; i++) {
        //     printf("\n");
        //     for (size_t j = 0; j < i+1; j++) {
        //         printf("*");
        //     }
        // }
        // Triangle bord à Droite
        // printf("Taille du triangle\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < nbUtilisateur; i++) {
        //     printf("\n");
        //     for (size_t j = nbUtilisateur; j > 0; j--) {
        //         if(j <= i+1){
        //             printf("*");
        //         } else printf(" ");
        //     }
        // }
        // Triangle inversé Gauche
        // printf("Taille du triangle\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 1; i < nbUtilisateur+1; i++) {
        //     printf("\n");
        //     for (size_t j = 0; j < nbUtilisateur-i ; j++) {
        //         printf("*");
        //     }
        // }
        // Triangle inversé Droite
        // printf("Taille du triangle\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < nbUtilisateur; i++) {
        //     printf("\n");
        //     for (size_t j = 0; j < nbUtilisateur; j++) {
        //         if(j >= i){
        //             printf("*");
        //         } else printf(" ");
        //     }
        // }
        // Sablier
        printf("Taille du sablier\n");
        fflush(stdin);
        scanf("%d", &nbUtilisateur);
        for (size_t i = 0; i < nbUtilisateur * 2; i++) {
                printf("\n");
                for (size_t j = 0; j < nbUtilisateur; j++) {
                        if ((i >= nbUtilisateur) && (j + i%nbUtilisateur < nbUtilisateur - 1)) printf(" ");
                        else if ((j < i) && (i < nbUtilisateur)) printf(" ");
                        else printf("* ");
                }
        }
        // Sapin inversé
        // printf("Taille du sapin\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = 0; i < nbUtilisateur; i++) {
        //     printf("\n");
        //     for (size_t j = 0; j < nbUtilisateur; j++) {
        //         if (j < i ) printf(" ");
        //         else printf("* ");
        //     }
        // }
        // Sapin
        // printf("Taille du sapin\n");
        // fflush(stdin);
        // scanf("%d", &nbUtilisateur);
        // for (size_t i = nbUtilisateur; i > 0; i--) {
        //     printf("\n");
        //     for (size_t j = 0; j < nbUtilisateur + 1; j++) {
        //         if (j < i ) printf(" ");
        //         else printf("* ");
        //     }
        // }

        int aleatoire;
        int zero = 0;
        int un = 0;
        int deux = 0;
        int trois = 0;
        int quatre = 0;
        int cinq = 0;

        srand(time(NULL));

        for (size_t i = 0; i < 100; i++) {
                aleatoire = rand()%6;
                switch (aleatoire) {
                case 0: zero++;
                        break;
                case 1: un++;
                        break;
                case 2: deux++;
                        break;
                case 3: trois++;
                        break;
                case 4: quatre++;
                        break;
                case 5: cinq++;
                        break;
                default: printf("Erreur");
                }
        }

        printf("Occurence 0 : %d\n", zero);
        printf("Occurence 1 : %d\n", un);
        printf("Occurence 2 : %d\n", deux);
        printf("Occurence 3 : %d\n", trois);
        printf("Occurence 4 : %d\n", quatre);
        printf("Occurence 5 : %d\n", cinq);

        return 0;
}
