#include "biblio.h"

void regles()
{
    FILE*fichier=NULL;
         char ligne[1024];

    fichier=fopen("regles.txt","r");
    if (fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier.\n");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }
}
