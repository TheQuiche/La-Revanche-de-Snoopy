#include "biblio.h"
int main()
{
    int choix,sspgmdp;
    printf("1) Regles du jeu\n2) Lancer un nouveau jeu a partir du niveau 1\n3) Charger une partie\n4) Lancer directement un niveau via son Mot de passe\n5) Scores\n6) Quitter\n");

    scanf("%d",&choix);
    while(choix<1 || choix>6)
    {
        printf("Entrer une valeur entre 1 et 6\n");
        printf("1) Regles du jeu\n2) Lancer un nouveau jeu a partir du niveau 1\n3) Charger une partie\n4) Lancer directement un niveau via son Mot de passe\n5) Scores\n6) Quitter\n");
        scanf("%d",&choix);

    }

    switch(choix)
    {
    case 1:
        printf("Vous avez choisi regles du jeu\n");
        regles();
        break;
    case 2:
        printf("Vous avez choisi lancer un nouveau jeu a partir du niveau 1\n");
        break;
    case 3:
        printf("Vous avez choisi charger une partie\n");
        break;
    case 4:
        printf("Vous avez choisi lancer directement un niveau via son Mot de passe\n");
        sspgmdp=lecturemdp();

        break;
    case 5:
        printf("Vous avez choisi scores\n");
        break;
    case 6:
        printf("Vous avez choisi quitter\n");
        return 0;
        break;
    }
    return 0;
}
