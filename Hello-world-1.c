#include <stdio.h>

int main(void) {
    int tab[] = {72, 101, 108, 111, 87, 114, 100, 33};
    int sent = 12;

    for(int i = 0; i < sent; i++) {
        if (i == 0)
            printf("%c", tab[i]);
        else if (i == 1)
            printf("%c", tab[i]);
        else if (i == 2 || i == 3 || i == 9)
            printf("%c", tab[2]);
        else if (i == 4 || i == 7)
            printf("%c", tab[3]);
        else if (i == 5)
            printf(" ");
        else if (i == 6)
            printf("%c", tab[4]);
        else if (i == 8)
            printf("%c", tab[5]);
        else if (i == 10)
            printf("%c", tab[6]);
        else
            printf("%c", tab[7]);
    }
    printf("\n");

    return 0;
}
