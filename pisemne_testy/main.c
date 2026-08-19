#include <stdio.h>

int main(void) {
    int t1 = 30;
    int t2 = 70;
    double dochazka = 70.0;

    // student Ludvik ziska znamku z predmetu Programovani podle vysledku lepsiho testu,
    // Vypiste na terminal hodnotu lepsiho testu z testu t1 a t2
    // Napriklad napis text "Ludvikuv lepsi vysledek je 50 bodu"

    int vysledek = t1 > t2 ? t1 : t2;
    printf("Ludvikuv lepsi test je %d bodu\n", vysledek);

    // Aby Ludvik v predmetu Programovani uspel, tak jeho nejlepsi test musi byt 50 a vice bodu.
    // napiste, zda Ludvik v Programovani uspel nebo propadl.
    // Doplnte do podminky ze zaroven musel mit Ludvik dochazku alespon 80.0

    if (vysledek >= 50 && dochazka >= 80) {
        puts("Ludvik v Programovani uspel.");
    } else {
        puts("Ludvik v Programovani propadl.");
    }

    return 0;
}