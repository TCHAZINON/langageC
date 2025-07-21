#include <stdio.h>

int main() {
   int age ;
   printf("quelle est votre age?");
   scanf("%d", &age);
   if(age >= 18){
    printf("Selon la loi togolaise, vous etes mageur");
   }else{
    printf("Selon la loi togolaise, vous etes mineur");
   }
return 0;
}
