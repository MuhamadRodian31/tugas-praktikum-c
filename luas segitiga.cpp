#include <iostream>
using namespace std;

int main() {
    double alas, tinggi, luas;

    // Input panjang alas dan tinggi segitiga
    cout << "Masukkan panjang alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan hasil
    cout << "Luas segitiga adalah: " << luas << endl;

    return 0;
}
