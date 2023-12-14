#include <stdio.h>

int main() {
    char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
    int flag = 0;

    // Memeriksa huruf yang sama dalam array A
    for (int i = 0; i < 7; i++) { // Menggunakan panjang array sebelum null-terminator
        for (int j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                flag = 1;
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (!flag) {
        printf("TIDAK ADA\n");
    }

    return 0;
}

