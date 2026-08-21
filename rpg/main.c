#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
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

    int dp_hrdina = 4;          // damage points
    int hp_hrdina = 100;        // heal points

    if (volba > 1 && volba < 4) {
        const int index_zbrane = volba - 1;

        dp_hrdina = dp_zbrani[index_zbrane];

        printf("Zvolil jsi: %s, dp: %d\n", nazvy_zbrani[index_zbrane], dp_hrdina);
    }
    else {
        printf("zvolil jsi spatne, budes pouzivat jen pesti, dp: %d.\n", dp_hrdina);
    }

    int hp_monstrum = 120;
    int dp_monstrum_max = 15;

    printf("Z temnoty se vynorilo monstrum hp: %d, souboj zacina\n", hp_monstrum);


    getchar();

    return 0;
}
