#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar;
    
    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);
    
    if (jamMasuk < 0 || jamMasuk > 24 || jamKeluar < 0 || jamKeluar > 24) {
        printf("Jam masuk atau jam keluar tidak valid.\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }
    
    int lamaParkir = jamKeluar - jamMasuk;
    int biayaParkir;
    
    switch (lamaParkir) {
        case 0:
        case 1:
        case 2:
            biayaParkir = 2000;
            break;
        default:
            biayaParkir = 2000 + (lamaParkir - 2) * 500;
            break;
    }
    
    printf("Biaya parkir: %d rupiah\n", biayaParkir);
    
    return 0; // Program selesai tanpa kesalahan
}

