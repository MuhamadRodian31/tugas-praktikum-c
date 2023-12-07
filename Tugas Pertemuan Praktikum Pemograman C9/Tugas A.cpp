#include <stdio.h>

int main() {
    int arr[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19}; // Isi array contoh
    int n, i, found = 0;

    printf("Masukkan nilai integer yang ingin Anda cari: ");
    scanf("%d", &n);

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == n) {
            found = 1;
            printf("ADA, nilai %d ditemukan di indeks %d\n", n, i);
        }
    }

    if (!found) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
