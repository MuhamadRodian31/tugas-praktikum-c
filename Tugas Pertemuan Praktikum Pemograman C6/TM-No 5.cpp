#include <stdio.h>

int main() {
    double saldo = 1000000; // Saldo awal
    double bunga = 0.02;    // Persentase bunga per bulan
    int bulan = 10;         // Jumlah bulan

    for (int i = 1; i <= bulan; i++) {
        saldo += saldo * bunga; // Menambahkan bunga ke saldo setiap bulan
    }

    printf("Jumlah uang setelah %d bulan: Rp. %.2f\n", bulan, saldo);

    return 0;
}

