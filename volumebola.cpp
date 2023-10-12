#include <iostream>
#include <cmath> // Untuk menggunakan nilai pi
using namespace std;

int main() {
    double r;
    const double pi = 3.14159; // Anda dapat menggunakan nilai pi yang lebih akurat jika diperlukan

    // Input jari-jari bola
    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    // Menghitung volume bola
    double volume = (4.0 / 3.0) * pi * pow(r, 3);

    // Menampilkan hasil
    cout << "Volume bola adalah: " << volume << endl;

    return 0;
}
