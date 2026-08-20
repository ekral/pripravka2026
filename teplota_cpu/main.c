#include <stdio.h>

int main() {

    const int mereni[] = {35, 34, 38, 45, 70, 68, 50, 36};

    for (int i = 0; i < 8; ++i) {
        const int teplota = mereni[i];
        printf("%d\n", teplota);
    }

    int suma = mereni[0];

    for (int i = 1; i < 8; ++i)
    {
        const int teplota = mereni[i];
        suma += teplota;
    }

    const double prumer = (double)suma / 8;

    printf("prumerna teplota CPU: %f\n", prumer);

    return 0;
}