#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Periksa apakah bilangan adalah ganjil atau genap
    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            printf("Bilangan ini adalah GENAP\n");
        } else {
            printf("Bilangan ini adalah GANJIL\n");
        }
    } else {
        printf("Bilangan yang Anda masukkan bukan bilangan bulat positif.\n");
    }

    return 0;
}

