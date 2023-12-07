#include <stdio.h>

int main() {
    char arr[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'}; // Isi array contoh
    char c;
    int i, found = 0;

    printf("Masukkan karakter yang ingin Anda cari: ");
    scanf(" %c", &c);

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == c) {
            found = 1;
            printf("ADA, karakter %c ditemukan di indeks %d\n", c, i);
        }
    }

    if (!found) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
