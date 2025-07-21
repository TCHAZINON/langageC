

	#include <stdio.h>
2
3	int main()
4	{
5	  int n;
6	  int somme = 0;
7	  for(int i = 0; i < n; i+2){
8	    somme += i;
9	    printf("Entrez un nombre :");
10	    scanf("%d",&n);
11	  }
12	  printf("somme = %d", somme);
13	  return 0;
14	}

