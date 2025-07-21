#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_CODE_LEN 11  // 10 + 1 pour le caractère nul '\0'

int main() {
    char tabArt[MAX][MAX_CODE_LEN];
    int tabStock[MAX];
    float tabPrix[MAX];
    int n, i;

    printf("Combien d'articles voulez-vous saisir (max %d) ? ", MAX);
    scanf("%d", &n);

    while (n < 1 || n > MAX) {
        printf("Nombre invalide. Entrez un nombre entre 1 et %d : ", MAX);
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        do {
            printf("Entrez le code de l’article %d (max 10 caractères) : ", i + 1);
            scanf("%s", tabArt[i]);

            if (strlen(tabArt[i]) > 10) {
                printf("Le code est trop long. Veuillez recommencer.\n");
            }
        } while (strlen(tabArt[i]) > 10);

        printf("Entrez le stock de l’article %d : ", i + 1);
        scanf("%d", &tabStock[i]);

        printf("Entrez le prix de l’article %d : ", i + 1);
        scanf("%f", &tabPrix[i]);
    }

    printf("\nSaisie terminée.\n");

    return 0;
}
