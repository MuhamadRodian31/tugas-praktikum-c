#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    // Input panjang sisi alas dan tinggi segitiga
    printf("Masukkan panjang sisi alas segitiga : ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi segitiga : ");
    scanf("%f", &tinggi);

    // Hitung panjang sisi miring dengan teorema Pythagoras
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    // Tampilkan panjang sisi miring segitiga
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}

