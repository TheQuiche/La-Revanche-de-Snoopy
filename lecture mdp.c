#include "biblio.h"

int lecturemdp()
{
    char *tab[30];
    char mdp[30];
    char tempo[20];
    int nbligne=0;
    FILE*fichier=NULL;
    fichier=fopen("niveaumdp.txt","r");
    if (fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier.\n");
        return 1;
    }
    printf("Saisir le mot de passe du niveau auquel vous voulez acceder\n");
    scanf("%s",mdp);
    while (fgets(tempo, sizeof(tempo), fichier) != NULL)
    {
        tab[nbligne] = strdup(tempo);
        nbligne++;
    }
    fclose(fichier);
   for (int i = 0; i < nbligne; i++) {
        tab[i][strlen(tab[i]) - 1] = '\0'; // Retirer le caractère de nouvelle ligne
        if (strcmp(mdp, tab[i]) == 0) {
            printf("Mot de passe correct.\n");
            if (i == 0) {
                printf("Vous allez au niveau 1\n");
            } else if (i == 1) {
                printf("Vous allez au niveau 2\n");
            } else if (i == 2) {
                printf("Vous allez au niveau 3\n");
            } else if (i == 3) {
                printf("Vous allez au niveau 4\n");
            }
            for (int j = 0; j < nbligne; j++) {
                free(tab[j]);
            }
                return 0;

        }
        free(tab[i]);
    }
    printf("Mot de passe incorrecte\n");
    return 1;
}
