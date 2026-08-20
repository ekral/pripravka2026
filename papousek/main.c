#include <stdio.h>

int main() {
    int znak;

    while ((znak = getchar()) != 'q') {
        putchar(znak);
    }

    return 0;
}