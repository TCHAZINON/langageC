#include <stdio.h>

int main(void){
    int x, y, resultat;
    x = 5;
    y = 2;

    resultat = (x > 0) && (y > 0);
    printf("(x > 0) && (y > 0) = %d\n", resultat);

    resultat = (x >= 5) && (y >= 3);
    printf("(x >= 5) && (y >= 3) = %d\n", resultat);
    
    resultat = (x >= 5) || (y >= 3);
    printf("(x >=5) || (y >= 3) = %d\n", resultat);

    resultat = !resultat ;
   
    printf("!resultat = %d\n", resultat);

    return 0;

}