#include <iostream>
using namespace std;
// Fungsi utama (main program)
int main() {
	
    //Variabel dan tipe data
    int nilai = 12;
    float desimal = 3.14;
    char huruf = 'Z';

	// Penggunaan if else
    int usia = 18;

    if (usia >= 18) {
        cout << "\nAnda bisa memiliki KTP." << endl;
    } else {
        cout << "\nAnda belum bisa." << endl;
    }
    
    // Penggunaan while
    int hitung = 0;
    while (hitung < 3) {
        cout << "\nHitungan: " << hitung << endl;
        hitung++;
    }

    // Penggunaan do while
    int angka = 1;
    do {
        cout << "Angka: " << angka << endl;
        angka++;
    } while (angka <= 5);

    // Array satu dimensi
    int arraySatuD[4] = {101, 201, 301, 401};

    cout << "\nArray Satu Dimensi:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Elemen ke-" << i << ": " << arraySatuD[i] << endl;
    }

    // Array multidimensi dan loop for bersarang
    int arrayDuaD[3][2] = {{5, 6}, {7, 8}, {9, 10}};

    cout << "\nArray Multidimensi:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemen " << i << "," << j << ": " << arrayDuaD[i][j] << endl;
        }
    }

    // Input
    int inputNilai;
    cout << "\nMasukkan sebuah nilai: ";
    cin >> inputNilai;
    cout << "Anda memasukkan: " << inputNilai << endl;

	// Menampilkan output
    cout << "Variabel dan Tipe Data:" << endl;
    cout << "Nilai: " << nilai << endl;
    cout << "Desimal: " << desimal << endl;
    cout << "Huruf: " << huruf << endl;

    // Komentar
    // Ini adalah komentar saya

    return 0;
}
