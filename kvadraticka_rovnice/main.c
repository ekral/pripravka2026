#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // TODO osetrit chybove stavy a neplatne hodnoty

    char znaky[256];

    puts("Zadej vysku v centimetrech: ");
    fgets(znaky, sizeof(znaky), stdin);
    const long vyska = strtol(znaky, NULL, 10);

    puts("Konec programu, stiskni jakoukoliv klavesu pro konec.");

    getchar();

    return 0;
}
