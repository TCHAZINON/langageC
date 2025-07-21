#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    float ttc;
    float taux_remise;
    float tva;
    float prix_ht;
    int jour;
    int taux_remise_s;
    float remise;

    printf("entrer le prix hors taxe \n");
    scanf("%f",&prix_ht);
    printf("Quel est le jour de la semaine \n");
    printf("Taper : \n");
    printf("1-Lundi\n");
    printf("2-Mardi\n");
    printf("3-Mercredi\n");
    printf("4-Jeudi\n");
    printf("5-Vendredi\n");
    printf("6-Samedi\n");
    printf("7-Dimanche\n");
    scanf("%d",&jour);
switch (jour) {
    }
    printf("entrer la TVA\n");
    scanf("%f",&tva);

    if  (prix_ht < 50000) {
        taux_remise = 5;}
    else if (prix_ht >= 50000 && prix_ht <= 10000){
        taux_remise = 10; }
    else if (prix_ht > 100000) {
        taux_remise = 15;
    }


 switch (jour) {
   case 1:
   case 2:
       taux_remise_s = 1;
       taux_remise += 1.0;
       break;
   case 3 :
   case 4 :
       taux_remise_s = 2;
       taux_remise += 2.0;

       break;
   case 5 :
       taux_remise_s = 3;
       taux_remise += 3.0;
       break;
   case 6 :
       taux_remise_s = 5;
       taux_remise += 5.0;
       break;
   case 7 :
       taux_remise_s = 7;
       taux_remise += 7.0;
       break;
       default:
           printf("erreur");
           return 1;
        }

    remise = prix_ht*taux_remise/100;
    ttc = (prix_ht-remise)*(1+tva/100);

    printf("======================================================================================\n");
    printf("                           RECAP DES ACHATS                                           \n");
    printf("======================================================================================\n");
    printf("Prix Hors-taxe : %.2f frs\n",prix_ht);
    printf("Remise         : %.2f frs\n",remise);
    printf("TVA            : %.2f %%\n", tva);
    printf("Remise supplementaire : %d %%\n",taux_remise_s);
    printf("======================================================================================\n");
    printf("Prix Total     : %.2f\n", ttc,"frs");



    return 0;
}
