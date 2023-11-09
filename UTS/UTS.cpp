#include <stdio.h>
#include <unistd.h>

int main() {
    int level_kekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int kekeruhan;
    int kecepatan_motor, waktu_pembersihan;

    //  tombol Start ditekan
    printf(" Start ditekan.\n");

    // Motor pembuka klep pengisian air
    printf("Motor pembuka klep pengisian air aktif selama 2 menit.\n");
    sleep(2 * 60);  // 2 menit

    // pendeksian kekeruhan
    printf("Masukkan nilai level kekeruhan air: ");
    scanf("%d", &kekeruhan);

    // Mencari kecepatan motor dan waktu mencuci berdasarkan level kekeruhan air 
    for (int i = 0; i < sizeof(level_kekeruhan) / sizeof(level_kekeruhan[0]); i++) {
        if (kekeruhan <= level_kekeruhan[i]) {
            kecepatan_motor = (i + 1) * 1000;
            waktu_pembersihan = 60;
            break;
        }
    }

    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama %d menit.\n", kecepatan_motor, waktu_pembersihan);

    // Motor pembuka klep pembuangan air kotor
    printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit.\n");
    sleep(2 * 60);  // 2 menit

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 60);  // 3 menit

    // Motor pembuka klep pengisian air
    printf("Motor pembuka klep pengisian air aktif selama 2 menit.\n");
    sleep(2 * 60);  // 2 menit

    // Motor listrik utama berputar selama sisa waktu mencuci
    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama sisa waktu mencuci.\n", kecepatan_motor);

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit.\n");
    sleep(2 * 60);  // 2 menit

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian
    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 60);  // 3 menit

    // Finishing
    printf("Pencucian selesai.\n");

    return 0;
}
