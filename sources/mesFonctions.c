#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PASSWORD "1234"

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
void ArrayCopy (int copy[], int tab [], int tSize) {
        int i;
        for (size_t i = 0; i < tSize; i++)
        {
                copy[i] = tab[i];
        }
}
// EX 53 - Copie inversé d'un tableau
void InvertedArrayCopy (int copy[], int tab [], int tSize) {
        int i, y = tSize - 1;
        for (size_t i = 0; i < tSize; i++)
        {
                copy[y] = tab[i];
                y--;
        }
}
// EX 54 - Afficher tableau de multiplication en utilisant un tableau en 2D
void remplirTableau2D (int tab [][10], int tSize) {
        int i,y;
        for (size_t i = 0; i < tSize; i++)
        {
                for (size_t y = 0; y < tSize; y++)
                {
                        tab[i][y] = (i + 1) * (y + 1);
                }
        }
}
void AfficherTableau2D (int tab [][10], int colSize, int rowSize) {
        int i,y;
        for (size_t i = 0; i < rowSize; i++)
        {
                for (size_t y = 0; y < colSize; y++)
                {
                        printf("%d\t",tab[i][y]);
                }
                printf("\n");
        }
        
}
// EX 55 - Créer un tableau avec la série suivante : 1-10-2-9-3-8-4-7-5-6
void RemplirTableauSerie (int tab[], int tSize) {
        int i;
        for (size_t i = 0; i < tSize; i++)
        {
                if (i % 2)
                {
                        tab[i] = (tSize - i + 1) + i/2;
                } else  tab[i] = (i + 1) - i/2;
        }      
}
// EX 56 - Demander le password un maximum de 3x
void Password () {
        int i=0;
        char p [5];
        do{
                i++;
                printf("Entrer mot de passe : ");
                fflush(stdin);
                scanf("%5s", p);
        }while((i < 3) && (strcmp(p, PASSWORD)));

        if(strcmp(p, PASSWORD) == 0) printf("Bienvenue\n");
        else printf("Erreur, trop d'essai\n");
}
// EX 57 - Copie inversé d'un tableau de String
void InvertedString (char sCopy [],char string [], int sSize){
        int i, y = sSize - 2;
        for (size_t i = 0; i < sSize - 1; i++)
        {
                sCopy[i] = string[y];
                y--;
        }
        sCopy[sSize-1] = '\0';
}
// EX 58 - Encoder dans une chaine de caractère un calcul du style « 8+3 ». Le programme donne le résultat
void Calculatrice (char s [], int sSize) {
        double resultat = 0, num1, num2;
        int i = 0; 
        char operateur;

        num1 = atof(s);

        while ( (! ((s[i] == '+') || (s[i] == '-') || (s[i] == 'x') || (s[i] == '/')) ) && (i < sSize) )
        {       
                s[i] = '0';
                i++;
        }
        operateur = s[i];
        s[i] = '0';
        num2 = atof(s);


        switch (operateur)
        {
        case '+':
                resultat = num1 + num2;
                break;
        case '-':
                resultat = num1 - num2;
                break;
        case 'x':
                resultat = num1 * num2;
                break;
        case '/':
                resultat = num1 / num2;
                break;
        default:
                printf("Erreur");
        }

        printf("%.1f %c %.1f = %.1f\n", num1, operateur, num2, resultat);
}

// EX 59 - Donner le nombre de chiffre présent dans une chaîne de caractères
void NbChiffreinStr (char s [], int sSize) {
        int nb = 0;
        for (size_t i = 0; i < sSize; i++)
        {
                if ((s[i] > 47) && (s[i] < 58)) nb++; 
        }
        printf("Il y a %d nombre dans la chaine %s\n", nb, s);
}

// EX 60 - Vérifier si string est un palindrome
void EstPalindrome (char s [], int  sSize) {
        int i = 0, y = sSize -2, palind = 0;
        while ((i < sSize -1) && (s[i] == s[y]))
        {       
                printf("%c \t %c\n", s[i], s[y]);
                i++;
                y--;
        }
        if (y == -1) palind = 1;
        if (palind) printf("Est un palindrome\n");
        else printf("N'est pas un palindrome\n");
}

// EX Supplémentaire 1 - Tab[51] entrer 2 prénoms 1 au début l'autre à la fin -- entre les 2 prénoms
void RemplirPrenom (char toFill[], char pre1 [], char pre2 []) {
        int sizePre1 = strlen(pre1), sizePre2 = strlen(pre2), i;
    
        strcat(toFill, pre1);

        for (size_t i = sizePre1; i < 50 - sizePre2; i++)
        {
                toFill[i] = '-';
        }
        strcat(toFill, pre2);
}
// EX Supplémentaire 2 - inversion tab int
void InvTabInt (int tabInv[], int tab[], int tSize) {
        int i, y = tSize - 1;
        for (size_t i = 0; i < tSize; i++)
        {
                tabInv[i] = tab[y];
                y--;
        }
        
}
// EX Supplémentaire 3 - Conversion binaire
void ConvBin (int bin[], int tSize, int nb) {
        int i ;

        for(i = 0; i < tSize; i++) 
        {
                if(nb != 0) {
                        bin[i] = nb % 2;
                        nb = (nb - bin[i]) / 2;
                } else bin[i] = 0;
        } 
}
// EX Supplémentaire 4 - Numéro de compte (001-2259888-57) 10 chiffres / 97 modulo 
// (BE23 1236 4789 1429) %97 = les deux chiffres de fin 
void VerifCompte (char nCompte [], int sSize) {
        char nCompteBis[13];
        int i, j = 0, intCompte, nbVerif, algo;
        if (sSize == 15) sSize = 12;
        else sSize = 17;


        switch (sSize)
        {
        case 12:
                algo = atoi(nCompte);
                // 100 000 000 et 90 000 000
                algo = ((algo - 1) * 100000000) + 90000000;
                nCompte[3] = '0';
                intCompte = atoi(nCompte);

                //On récup la valeur d'origine
                intCompte -= algo;
              
                break;
        case 17:
                for (size_t i = 5; i < sSize; i++)
                {   
                        if(nCompte[i] == 32) i++;
                        nCompteBis[j] = nCompte[i];
                        j++;
                }
                nCompteBis[j] = '\0';
                intCompte = atoi(nCompteBis);
                
                break;
        default:
                printf("Erreur");
        }

        //On récup le chiffre de vérification
                for (size_t i = 0; i < sSize; i++)
                {
                        nCompte[i] = '0';
                }
                nbVerif = atoi(nCompte); 

        if (nbVerif == (intCompte % 97)) printf("%d = %d. Le compte est valide\n", nbVerif, intCompte % 97);
        else printf("%d != %d. Le compte est invalide\n", nbVerif, intCompte % 97);
}

// EX Supplémentaire 5 - Tab (1, 45, 89, 14, 25, 3, 58, 101, 87, 56) Afficher le nb juste avant le plus grand (ici 89)
void NbJusteAvantGrand (int tab [], int tSize) {
        int i, max = tab[0], sndMax = tab[0];


        for (size_t i = 1; i < tSize; i++)
        {
                if(tab[i] > max) {
                        sndMax = max;
                        max = tab[i];
                }
        }
        printf("Le 2eme nombre le plus grand du tab est : %d\n",sndMax);
}

void AfficherTableau(int tab [], int tSize) {
        int i;
        for (size_t i = 0; i < tSize; i++)
        {
                printf("%d ", tab[i]);
        }
        printf("\n");
}
