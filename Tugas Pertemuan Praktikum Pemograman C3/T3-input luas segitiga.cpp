#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, luas, sisi, keliling;

    // Input panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (dalam cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (dalam cm): ");
    scanf("%f", &tinggi);
    printf("Masukkan Sisi segitiga (dalam cm): ");
    scanf("%f", &sisi);

    // Hitung luas segitiga
    luas = 0.5 * alas * tinggi;

    float hipotenusa = sqrt(alas * alas + tinggi * tinggi);
    
    // Hitung keliling segitiga
    keliling = sisi + sisi + sisi;

    // Tampilkan luas dan keliling segitiga
    printf("Luas segitiga adalah: %.2f cm^2\n", luas);
    printf("Keliling segitiga adalah: %.2f cm\n", keliling);

    return 0;
}

