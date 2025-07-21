#include <stdio.h>
#include <stdlib.h>

int main()
{
 char c;
 float g;
 int f = 10000;
 float T;
 float cout;
 float couT;
 char client;

 printf("     Choisissez la classe (120000)    ");
 printf("\n p______> premiere classe");
 printf("\n e______> economique classe (300000)");
 scanf ("%c",&e || &p);
 if (client = e){
    cout = 300000;
 }else if (client = p){
         cout = 120000;

 };
 printf("\nle poids de vos bagage ");
 scanf("%f", &g);

 // calcul du montant des bagages
 T = g * 12000;
 couT = T + f + cout;

 printf("\nles frais de reservation est %d:",f);
 printf("\nmontant a payer pour les bagages %2f", T);
 printf("\ntotal:", couT);


    return 0;
}
