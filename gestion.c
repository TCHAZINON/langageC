#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{ float prix_ttc;
float  tva;
float prix_ht;
int remise;
float montantRemise;
float taux_remise;
int jour;
bool a_beneficie = true;

printf("Entrez le prix hors taxe \n");
scanf ("%f", &prix_ht);
printf("Entrez la tva :");
scanf("%d", &tva);
printf("quelle est le jour de la semaine\n ? ");
printf("Taper : \n");

printf("1 lundi \n");

printf("2 mardi \n");

printf("3 mercredi \n");

printf("4 jeudi \n");

printf("5 vendredi\n");

printf("6 samedi \n");

printf("7 dimanche \n");


printf("Entrer le jour");
scanf("%d", &jour);


if (prix_ht< 50000){
    taux_remise = 5;
} else if (prix_ht >= 50000 && prix_ht<=100000){
taux_remise = 10;
} else {
taux_remise = 15;
};

if (jour == 7 || jour ==6){
    taux_remise += 2.0;
    a_beneficie = true;
};


    printf("===================================\n");

    printf("      RECAP DES ACHATS    \n");

    printf("\n==================================");


remise = prix_ht  * taux_remise/100;
prix_ttc = (prix_ht - remise) *(1 + tva/100);

printf ("le prix hors taxe    : %2.f\n", prix_ht);
printf ("Remise               :  %d\n" ,  remise);
printf  ("TVA                 : %2.f\n",     tva);

if (a_beneficie = true ){
printf ("remise suplementaire :",oui);
} else {
printf("remise suplementaire  :", non);};
printf("\n==================================");

printf("prix total a payer    : %2.f",prix_ttc);






    return 0;
}
