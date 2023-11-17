#include <stdio.h>
#include <stdlib.h>

// Définition du type booléen pour les systèmes ne le supportant pas nativement.
typedef int bool;
#define true 1
#define false 0

#ifdef _WIN32
#include <windows.h>
#define Sleep(n) Sleep(n)

#else
#include <unistd.h>
#define Sleep(n) usleep(n * 1000)

#endif



// Fonction pour afficher le plateau
void afficherPlateau() {
    for (int k = 0; k < 10; ++k) {
        for (int j = 0; j < 1; ++j) {
            for (int i = 0; i < 20; ++i) {
                printf("%c%c%c%c%c%c", 0xC9, 0xCD, 0xCD, 0xCD, 0xCD, 0xBB); // Ligne horizontale pour les coins supérieurs
            }

            for (int m = 0; m < 1; ++m) {
                for (int i = 0; i < 20; ++i) {
                    printf("%c%c%c%c%c%c", 0xBA, 0x20, 0x20, 0x20, 0x20, 0xBA); // Espace pour agrandir la taille des cases
                }
            }

            for (int i = 0; i < 20; ++i) {
                printf("%c%c%c%c%c%c", 0xC8, 0xCD, 0xCD, 0xCD, 0xCD, 0xBC); // Ligne horizontale pour les coins inférieurs
            }
            printf("\n");
        }
    }
}

int main() {



        afficherPlateau();



    return 0;
}

