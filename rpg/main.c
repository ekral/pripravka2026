#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
    srand(time(NULL));

    char jmeno[30];

    printf("=== VITEJ V RPG ARENE === \n");
    printf("Zadej jmeno sveho hrdiny: ");
    fgets(jmeno, 30, stdin);
    jmeno[strcspn(jmeno, "\n")] = 0; // je to bezpecne, odstrani znak noveho radku, na konec ulozim znak 0

    printf("jmeno tveho hrdiny je %s \n", jmeno);

    const char* nazvy_zbrani[] = { "mec", "sekera", "kouzelna hulka" };
    const int dp_zbrani[] = { 12, 15, 10}; // damage points zbrani

    printf("vyber si zbran:\n");

    for (int i = 0; i < 3; i++) {
        const char* nazev = nazvy_zbrani[i];
        printf("%d: %s\n", i + 1, nazev);
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), stdin);
    const long volba = strtol(buffer, NULL, 10);

    int dp_hrdina_min = 4;      // damage points
    int hp_hrdina = 100;        // heal points

    if (volba > 0 && volba < 4) {
        const int index_zbrane = volba - 1;

        dp_hrdina_min = dp_zbrani[index_zbrane];

        printf("Zvolil jsi: %s, dp: %d\n", nazvy_zbrani[index_zbrane], dp_hrdina_min);
    }
    else {
        printf("zvolil jsi spatne, budes pouzivat jen pesti, dp: %d.\n", dp_hrdina_min);
    }

    int hp_monstrum = 120;
    int dp_monstrum_max = 15;

    printf("Z temnoty se vynorilo monstrum hp: %d, souboj zacina\n", hp_monstrum);

    int kolo = 1;

    while (hp_hrdina > 0 || hp_monstrum > 0) {
        printf("--- KOLO %d ---\n", kolo);

        int dp_hrdina = dp_hrdina_min + (rand() % 5); // k min jsme pricetli nahodne cislo od 0 do 4

        const int cislo = rand() % 5; // od 0 do 4

        if (cislo == 0) {
            dp_hrdina = dp_hrdina * 2;
            printf("KRITICKY DAMAGE!\n");
        }

        hp_monstrum -= dp_hrdina;

        if (hp_monstrum < 0) {
            hp_monstrum = 0;
        }

        printf("%s zautocil dp: %2d, monstrum ma %3d hp\n", jmeno, dp_hrdina, hp_monstrum);

        if (hp_monstrum <= 0) {
            break;
        }

        int dp_monstrum = 5 + (rand() % (dp_monstrum_max - 4));

        hp_hrdina -= dp_monstrum;

        // TODO Pokud je hp_hrdina zaporne, hp_hrdina jej nastavte na 0
        if (hp_hrdina < 0) {
            hp_hrdina = 0;
        }

        printf("monstrum vraci uder dp: %2d, hrdina hp: %3d\n", dp_monstrum, hp_hrdina);

        ++kolo;
    }


    getchar();

    return 0;
}
