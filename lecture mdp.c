void lecturemdp(Snoopy *joueur1,Balle *maBalle)
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
        exit (1);
    }
    printf("Saisir le mot de passe du niveau auquel vous voulez acceder\n");
    scanf("%s",mdp);
    while (fgets(tempo, sizeof(tempo), fichier) != NULL)
    {
        tab[nbligne] = strdup(tempo);
        nbligne++;
    }
    fclose(fichier);
    for (int i = 0; i < nbligne; i++)
    {
        tab[i][strlen(tab[i]) - 1] = '\0';
        if (strcmp(mdp, tab[i]) == 0)
        {
            printf("Mot de passe correct.\n");
            if (i == 0)
            {
                printf("Vous allez au niveau 1\n");
                while (joueur1->vie > 0)
                {
                    plateau(joueur1,maBalle);
                    afficherInfosJoueur(joueur1);
                    deplacement(joueur1,maBalle);
                    joueur1->niveau=1;
                }
            }
            else if (i == 1)
            {
                printf("Vous allez au niveau 2\n");
                while (joueur1->vie > 0)
                {
                    niveau2(joueur1,maBalle);
                    afficherInfosJoueur(joueur1);
                    deplacement(joueur1,maBalle);
                    joueur1->niveau=2;

                }
            }
            else if (i == 2)
            {
                printf("Vous allez au niveau 3\n");
                joueur1->niveau=3;
            }
            else if (i == 3)
            {
                printf("Vous allez au niveau 4\n");
                joueur1->niveau=4;
            }

        }
        else
        {
            printf("Mot de passe incorrecte\n");
        }
    }
    for (int j = 0; j < nbligne; j++)
    {
        free(tab[j]);
    }
}
