#include <stdio.h>

int main() {
    int kecepatan = 2; // kecepatan dalam meter/detik
    int waktu = 100;   // waktu dalam detik

    int jarak = kecepatan * waktu;
    printf("Jarak yang ditempuh dalam 100 detik adalah: %d meter\n", jarak);

    return 0;
}

