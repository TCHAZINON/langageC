#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_CODE_LEN 11  // 10 caractères max + 1 pour '\0'

int main() {
    char tabArt[MAX][MAX_CODE_LEN];
    int i, n;

    printf("Entrer le nombre d'articles à saisir (max %d): ", MAX);
    scanf("%d", &n);

    while (n < 1 || n > MAX) {
        printf("Saisie invalide. Veuillez ressaisir un nombre entre 1 et %d : ", MAX);
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        do {
            printf("Saisir le code de l'article %d (max 10 caractères) : ", i + 1);
            scanf("%s", tabArt[i]);

            if (strlen(tabArt[i]) > 10) {
                printf("Code trop long. Recommencez.\n");
            }

        } while (strlen(tabArt[i]) > 10);
    }

    printf("\nSaisie terminée.\n");

    return 0;
}
