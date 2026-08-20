#include <stdio.h>

int main() {

    int t1 = 98;
    int t2 = 2;

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

    int prumer = (t1 + t2) / 2; // celociselne deleni, zaokrouhluje dolu

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



    return 0;
}