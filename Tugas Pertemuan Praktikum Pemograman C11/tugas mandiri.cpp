#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, count_above = 0, count_below = 0;
    float average;

    // Menghitung jumlah nilai dan rata-ratanya
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    average = (float)sum / 12;

    // Memindahkan nilai ke array B atau C berdasarkan rata-rata
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[count_above] = A[i];
            count_above++;
        } else {
            C[count_below] = A[i];
            count_below++;
        }
    }

    // Menampilkan isi array A
    printf("Isi array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Isi array B: ");
    for (int i = 0; i < count_above; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Isi array C: ");
    for (int i = 0; i < count_below; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

