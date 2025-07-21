
#include <stdio.h>


int main(void)
{

typedef  struct versement {
    double lundi;
    double mardi;
    double mercredi;
    double jeudi;
    double vendredi;
}versement;
versement mois[4];
double total_semaine[4]= {0};
double total_mensuel = 0;
double max_semaine = total_semaine[0];



     for (int i = 0; i < 4; i++){


 printf("\n~*~*~*~*~*~*~*~*SEMAINE %d~*~*~*~*~*~*~~*~*~\n", i+1);


            printf("lindi\n");
            scanf("%lf",&mois[i].lundi);

            printf("mardi\n");
            scanf("%lf",&mois[i].mardi);

            printf("mercredi\n");
            scanf("%lf",&mois[i].mercredi);

            printf("jeudi\n");
            scanf("%lf",&mois[i].jeudi);

            printf("vendredi\n");
            scanf("%lf",&mois[i].vendredi);

            total_semaine[i] += mois[i].lundi + mois[i].mardi + mois[i].mercredi +
                                 mois[i].jeudi + mois[i].vendredi;

            total_mensuel += total_semaine[i];



     }
     int max_indice = 0;
            for(int i = 0; i < 4; i++){
                    printf("\ntotal semaine %d : %.2lf\n", i + 1, total_semaine[i]);
            max_semaine = total_semaine[i] > max_semaine? total_semaine[i]:max_semaine;
                max_indice = i;
            }
        printf("\nsemaine avec plus de revenue %d : = %.2lf\n",max_indice +1, max_semaine);


    printf("total mensuel : %.2lf\n", total_mensuel);

    return 0;
}
