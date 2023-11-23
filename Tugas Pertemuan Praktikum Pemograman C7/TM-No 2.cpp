#include <stdio.h>

int main() {
    int A[11]; // Array yang sudah disediakan
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int i, j = 0;

    // Menyimpan nilai genap ke dalam array A
    printf("Data dalam dokumen: ");
    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        printf("%d ", data[i]);
        if (data[i] % 2 == 0) { // Jika nilai genap
            A[j] = data[i];
            j++;
        }
    }

    // Mencetak isi array A yang berisi nilai genap
    printf("\nIsi array A setelah menyimpan nilai genap:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

