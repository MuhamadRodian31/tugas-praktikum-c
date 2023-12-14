#include <stdio.h>

int main() {
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', '\0'};
    int count[26] = {0}; // Array untuk menyimpan jumlah kemunculan setiap huruf
    int maxCount = 0;

    // Menghitung jumlah kemunculan setiap huruf dalam array A
    for (int i = 0; A[i] != '\0'; i++) {
        count[A[i] - 'A']++;
    }

    // Mencari huruf dengan jumlah kemunculan terbanyak
    for (int i = 0; i < 26; i++) {
        if (count[i] > count[maxCount]) {
            maxCount = i;
        }
    }

    // Mencetak huruf yang paling sering muncul dan jumlah kemunculannya
    printf("Huruf yang paling sering muncul: %c\n", 'A' + maxCount);
    printf("Jumlah kemunculan: %d\n", count[maxCount]);

    return 0;
}

