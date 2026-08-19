#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // TODO osetrit chybove stavy a neplatne hodnoty

    char znaky[256];

    puts("Zadej vysku v centimetrech: ");
    fgets(znaky, sizeof(znaky), stdin);
    const long vyska = strtol(znaky, NULL, 10);

    if (vyska <= 0) {
        puts("Neplatna vyska.");
        return 1;
    }

    puts("Zadej hmotnost v kilogramech: ");
    fgets(znaky, sizeof(znaky), stdin);
    const long hmotnost = strtol(znaky, NULL, 10);

    printf("vyska: %ld, hmotnost: %ld\n", vyska, hmotnost);

    const double vyska_metry = (double)vyska / 100.0;

    const double bmi = (double)hmotnost / (vyska_metry * vyska_metry);

    printf("bmi: %.1f\n", bmi);

    if (bmi >= 40.0) {
        puts("Morbidni obezita.");
    }
    else if (bmi > 35.0) {
        puts("Obezita 2. stupne.");
    }
    else if (bmi > 30.0) {
        puts("Obezita 1. stupne.");
    }
    else if (bmi > 25.0) {
        puts("Nadvaha.");
    }
    else if (bmi > 18.5) {
        puts("Optimalni hmotnost.");
    }
    else if (bmi > 16.5) {
        puts("Podvaha.");
    }
    else {
        puts("Tezka podvyziva.");
    }

    puts("* Vypocet BMI je pouze orientacni, zavisi na veku, pohlavi a fyzicke kondici konkretniho cloveka.");
    puts("Konec programu, stiskni jakoukoliv klavesu pro konec.");

    getchar();

    return 0;
}
