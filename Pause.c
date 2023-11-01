#include <stdio.h>

int main() {
    int choix;
    printf("PAUSE\n");
    printf("1 - Reprendre\n");
    printf("2 - Sauvegarder\n");
    printf("3 - Quitter\n");
    scanf("%d",&choix);
    switch (choix) {
        case 1 :
        {
            // Appel de la fonction joueur
            break;
        }
        case 2 :
        {
            // Appel de la fonction sauvegarde
        }
        case 3 :
        {
            exit(0);
        }
    }
    return 0;
}
