#include <stdio.h>
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
    // TODO pomoci cyklu for vypiste zbrane na terminal
    const char* nazev = nazvy_zbrani[0];
    printf("%d: %s\n", 1, nazev);

    getchar();

    return 0;
}
