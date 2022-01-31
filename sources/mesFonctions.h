#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H

void NbChiffre(int a);
void SommeTableau (int tab [], int tSize);
void MinTableau (int tab [], int tSize);
void MaxTableau (int tab [], int tSize);
void ArrayCopy (int copy [], int tab [], int tSize);
void InvertedArrayCopy (int copy[], int tab [], int tSize);
void remplirTableau2D (int tab [][10], int tSize);
void AfficherTableau2D (int tab [][10], int colSize, int rowSize);
void RemplirTableauSerie (int tab[], int tSize);
void Password ();
void InvertedString (char sCopy [],char string [], int sSize);
void Calculatrice (char s [], int sSize);
void NbChiffreinStr (char s [], int sSize);
void EstPalindrome (char s [], int  sSize);
void RemplirPrenom (char toFill[], char pre1 [], char pre2 []);
void InvTabInt (int tabInv[], int tab[], int tSize);
void ConvBin (int bin[], int tSize, int nb);
void VerifCompte (char nCompte [], int sSize);
void NbJusteAvantGrand (int tab [], int tSize);
void AfficherTableau(int tab [], int tSize);

#endif
