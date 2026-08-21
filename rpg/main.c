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

    printf("vyber si zbran:\n");

    for (int i = 0; i < 3; i++) {
        const char* nazev = nazvy_zbrani[i];
        printf("%d: %s\n", i + 1, nazev);
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), stdin);
    const long volba = strtol(buffer, NULL, 10);

    // napiste podminku, ze promenna volba je 1 az 3


    getchar();

    return 0;
}
