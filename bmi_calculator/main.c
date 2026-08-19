#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // TODO osetrit chybove stavy a neplatne hodnoty

    char znaky[256];

    puts("Zadej vysku v centimetrech: ");
    fgets(znaky, sizeof(znaky), stdin);
    const long vyska = strtol(znaky, NULL, 10);

    puts("Zadej hmotnost v kilogramech: ");
    fgets(znaky, sizeof(znaky), stdin);
    const long hmotnost = strtol(znaky, NULL, 10);

    printf("vyska: %ld, hmotnost: %ld\n", vyska, hmotnost);

    const double vyska_metry = (double)vyska / 100.0;

    const double bmi = (double)hmotnost / (vyska_metry * vyska_metry);

    printf("bmi: %.1f\n", bmi);

    puts("Konec programu, stiskni jakoukoliv klavesu pro konec.");
    getchar();

    return 0;
}
