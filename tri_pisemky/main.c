#include <stdio.h>

int main() {

    int t1 = 70;
    int t2 = 70;

    // Ukol 1
    // Bernard psal z predmetu Matematika dva testy
    // Aby v predmetu uspel, tak musel napsat kazdy test za 50 a vice
    // napiste na terminal "Bernard uspel z Matematiky" nebo "Bernard propadl z Matematiky"

    if (t1 >= 50 && t2 >= 50) {
        puts("Bernard uspel z Matematiky");
    }
    else {
        puts("Bernard propadl z Matematiky");
    }

    // Ukol 2
    // Bernard psal z predmetu Matematika dva testy
    // Aby v predmetu uspel, tak staci aby alespon jeden z testu byl za 50 a vice
    // napiste na terminal "Bernard uspel z Matematiky" nebo "Bernard propadl z Matematiky"

    if (t1 >= 50 || t2 >= 50) {
        puts("Bernard uspel z Matematiky");
    }
    else {
        puts("Bernard propadl z Matematiky");
    }

    // Ukol 3
    // Bernard psal z predmetu Matematika dva testy
    // Aby v predmetu uspel, tak z prumeru znamek musi mit 50 a vice
    // napiste na terminal "Bernard uspel z Matematiky" nebo "Bernard propadl z Matematiky"

    const int prumer = (t1 + t2) / 2; // celociselne deleni, zaokrouhluje dolu

    printf("prumer: %d\n", prumer);

    if (prumer >= 50) {
        puts("Bernard uspel z Matematiky");
    }
    else {
        puts("Bernard propadl z Matematiky");
    }

    // Napiste pro Bernarda slovni znamku dle prumeru

    // 90 a vice    A - vyborne
    // 80 - 89      B - velmi dobre
    // 70 - 79      C - dobre
    // 60 - 69      D - uspojive
    // 50 - 59      E - dostatecne
    // 49 a mene    F - neodstatecne

    if (prumer >= 90) {
        puts("A - vyborne");
    }
    else if (prumer >= 80) {
        puts("B - vyborne");
    }
    else if (prumer >= 70) {
        puts("C - dobre");
    }
    else if (prumer >= 60) {
        puts("D - uspojive");
    }
    else if (prumer >= 50) {
        puts("E - dostatecne");
    }
    else {
        puts("F - neodstatecne");
    }

    // Ukol 4
    // Bernard psal z predmetu Matematika tri testy
    // Spocitejte a vypiste kolik testu napsal Bernard na vice nez 50 bodu

    int t3 = 40;

    int pocet = 0;

    if (t1 >= 50) {
        pocet = pocet + 1; // pricte libovolne cislo
    }

    if (t2 >= 50) {
        pocet += 1; // zkraceny zapis pricteni libovolneho cisla
    }

    if (t3 >= 50) {
        ++pocet; // zvyseni promenne o 1
    }

    printf("Pocet Bernardovych uspesnych testu: %d\n", pocet);

    return 0;
}