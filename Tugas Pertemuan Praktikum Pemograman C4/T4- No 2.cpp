#include <stdio.h>

int main() {
    int N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N > 50) {
        N = N + 10;
    } else {
        N = N - 25;
    }

    printf("Nilai N setelah diubah: %d\n", N);

    return 0;
}

