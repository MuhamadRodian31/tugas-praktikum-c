#include <stdio.h>

int main() {
    int i, num = 1;

    printf("Deret angka: ");
    for (i = 0; i < 11; i++) {
        printf("%d ", num);
        num *= 2;
    }

    return 0;
}

