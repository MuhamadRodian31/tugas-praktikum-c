#include <stdio.h>
#include <unistd.h>

// Fungsi untuk motor pembuka klep
void motorPembukaKlep(const char *nama_klep, int waktu) {
    printf("Motor pembuka klep %s aktif selama %d menit.\n", nama_klep, waktu);
    sleep(waktu * 60);  // Konversi menit ke detik
}

// Fungsi untuk motor listrik utama
void motorListrikUtama(int kecepatan, int waktu) {
    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama %d menit.\n", kecepatan, waktu);
    sleep(waktu * 60);  // Konversi menit ke detik
}

// Fungsi untuk mencuci berdasarkan level kekeruhan
void cuciBerdasarkanKekeruhan(int kekeruhan, int *kecepatan_motor, int *waktu_pembersihan) {
    int level_kekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

    for (int i = 0; i < sizeof(level_kekeruhan) / sizeof(level_kekeruhan[0]); i++) {
        if (kekeruhan <= level_kekeruhan[i]) {
            *kecepatan_motor = (i + 1) * 1000;
            *waktu_pembersihan = 60;
            break;
        }
    }
}

int main() {
    int kekeruhan, kecepatan_motor, waktu_pembersihan;

    printf("Start ditekan.\n");

    // Motor pembuka klep pengisian air
    motorPembukaKlep("pengisian air", 2);

    // Pendeksian kekeruhan
    printf("Masukkan nilai level kekeruhan air: ");
    scanf("%d", &kekeruhan);

    // Mencari kecepatan motor dan waktu mencuci berdasarkan level kekeruhan air
    cuciBerdasarkanKekeruhan(kekeruhan, &kecepatan_motor, &waktu_pembersihan);

    // Motor listrik utama berputar selama proses mencuci
    motorListrikUtama(kecepatan_motor, waktu_pembersihan);

    // Motor pembuka klep pembuangan air kotor
    motorPembukaKlep("pembuangan air kotor", 2);

    // Motor listrik utama berputar untuk mengeringkan cucian
    motorListrikUtama(2000, 3);

    // Motor pembuka klep pengisian air
    motorPembukaKlep("pengisian air", 2);

    // Motor listrik utama berputar selama sisa waktu mencuci
    motorListrikUtama(kecepatan_motor, waktu_pembersihan);

    // Motor pembuka klep pembuangan air kotor
    motorPembukaKlep("pembuangan air kotor", 2);

    // Motor listrik utama berputar untuk mengeringkan cucian
    motorListrikUtama(2000, 3);

    // Finishing
    printf("Pencucian selesai.\n");

    return 0;
}

