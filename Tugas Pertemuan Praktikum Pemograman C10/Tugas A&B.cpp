#include <stdio.h>

int main() {
    // Array A
    int A[5] = {12, 8, 17, 5, 15};

    // Array B
    int B[7] = {5, 11, 7, 25, 9, 12, 14};

    // Array C
    int C[12];

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C
    int index_C = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[index_C] = A[i];
            index_C++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[index_C] = B[i];
            index_C++;
        }
    }

    // Menampilkan isi array C
    printf("Isi array C (a): ");
    for (int i = 0; i < index_C; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    // Reset array C
    index_C = 0;

  
    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C (urutan asli)
	for (int i = 0; i < 5; i++) {
    if (A[i] > 10) {
        C[index_C] = A[i];
        index_C++;
    }
}

    

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C (kebalikan urutan)
    for (int i = 6; i >= 0; i--) {
        if (B[i] > 10) {
            C[index_C] = B[i];
            index_C++;
        }
    }

    // Menampilkan isi array C (b)
    printf("Isi array C (b): ");
    for (int i = 0; i < index_C; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
