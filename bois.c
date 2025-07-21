#include <stdio.h>
#include <stdlib.h>
struct Panneau_Bois {
    float largeur;
    float longeur;
    float epaisseur;
};

float calcu_volume(float largeur, float longeur, float epaisseur){
    return ((largeur*longeur*epaisseur)/109);
};
int main()
{
    struct Panneau_Bois Bois1;
    Bois1.largeur = 2.3;
    Bois1.longeur = 3.6;
    Bois1.epaisseur = 5.3;

    printf("la largeur du bois est %.2f m\n", Bois1.largeur);
    printf("la longeur du bois est %.2f m\n", Bois1.longeur);
    printf("l' epaisseur du bois est %.2f m\n", Bois1.epaisseur);
    printf("l' volume est %.2f m**3", calcu_volume(Bois1.largeur,Bois1.longeur,Bois1.epaisseur));


    return 0;
}
