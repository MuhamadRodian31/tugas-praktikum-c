#include <stdio.h>

int main() {
    int jam_masuk, menit_masuk, jam_pulang, menit_pulang;
    int lama_kerja;

    printf("Masukkan jam masuk (1-24): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan menit masuk: ");
    scanf("%d", &menit_masuk);

    printf("Masukkan jam pulang (1-24): ");
    scanf("%d", &jam_pulang);
    printf("Masukkan menit pulang: ");
    scanf("%d", &menit_pulang);

    int perbedaan_jam = jam_pulang - jam_masuk;

    switch (perbedaan_jam) {
        case 0:
            if (menit_pulang >= menit_masuk) {
                lama_kerja = menit_pulang - menit_masuk;
            } else {
                lama_kerja = (60 - menit_masuk) + menit_pulang;
            }
            break;
        case 1:
            if (menit_pulang >= menit_masuk) {
                lama_kerja = (perbedaan_jam * 60) + (menit_pulang - menit_masuk);
            } else {
                lama_kerja = ((perbedaan_jam - 1) * 60) + (60 - menit_masuk) + menit_pulang;
            }
            break;
        default:
            lama_kerja = (perbedaan_jam * 60) + menit_pulang - menit_masuk;
    }

    printf("Lama kerja pegawai adalah %d menit (%d jam %d menit).\n", lama_kerja, lama_kerja / 60, lama_kerja % 60);

    return 0;
}

