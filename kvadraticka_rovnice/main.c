#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // m = x;
    // n = x + 3;
    // 40 m^2
    // m * n = x * (x + 3) = 80
    // x^2 + 3x - 80 = 0

    const double a = 1.0;
    const double b = 3.0;
    const double c = -80.0;

    const double D = (b * b) - (4 * a * c);

    if (D > 0.0) {
        const double x1 = (-b + sqrt(D)) / (2 * a);
        const double x2 = (-b - sqrt(D)) / (2 * a);

        double x = 0.0;

        // Priradte promenne x hodnotu x1 nebo x2 podle toho ktera je kladna
        if (x1 > 0.0) {
            x = x1;
        }
        else {
            x = x2;
        }

        printf("Dum bude mit rozmery %.2f x %.2f\n", x, x);
        printf("Pozemek bude mit rozmery %.2f x %.2f\n", x, x + 3);
    }
    return 0;
}