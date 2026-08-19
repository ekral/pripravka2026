#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    char buffer[256];

    puts("Zadej plochu pozemku v metrech ctverecnich: ");
    fgets(buffer, 256, stdin);
    const double plocha = strtod(buffer, NULL);

    if (plocha <= 0) {
        perror("Plocha musi byt vetsi nez nula.");
        return 1;
    }

    puts("Zadej vzdalenost od sousedova pozemku v metrech: ");
    fgets(buffer, 256, stdin);
    const double vzdalenost = strtod(buffer, NULL);

    if (plocha <= 0) {
        perror("Vzdalenost musi byt vetsi nez nula.");
        return 1;
    }

    const double a = 1.0;
    const double b = vzdalenost;
    const double c = -plocha;

    const double D = (b * b) - (4 * a * c);

    if (D > 0.0) {
        const double x1 = (-b + sqrt(D)) / (2 * a);
        const double x2 = (-b - sqrt(D)) / (2 * a);

        const double x = x1 > 0.0 ? x1 : x2;

        printf("Dum bude mit rozmery %.2f x %.2f\n", x, x);
        printf("Pozemek bude mit rozmery %.2f x %.2f\n", x, x + 3);
    }
    
    return 0;
}
