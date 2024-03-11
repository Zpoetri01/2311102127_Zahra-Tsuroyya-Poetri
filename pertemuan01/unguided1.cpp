#include <iostream> 
using namespace std;

// Fungsi untuk mengonversi suhu dari Celcius ke Fahrenheit
float KonvCtoF (float C_127) {
    return (C_127 * 9/5) + 32;
}

// Fungsi untuk mengonversi suhu dari Fahrenheit ke Celcius
float KonvFtoC (float F_127) {
    return (F_127 - 32) * 5/9;
}

int main() {
    float suhu_127;
    int pilih_127;

     // Menampilkan menu program konversi suhu
    cout << "Program Konversi Suhu" << endl;
    cout << "1. Konversi Celcius ke Fahrenheit" << endl;
    cout << "2. Konversi Fahrenheit ke Celcius" << endl;
    cout << "Pilih: ";
    cin >> pilih_127;

    // Memilih case sesuai dengan pilihan pengguna
    switch (pilih_127) {
        case 1: 
            // Meminta suhu dalam Celcius dari pengguna
            cout << "Masukkan suhu dalam Celcius : ";
            cin >> suhu_127;
            // Menampilkan hasil konversi dari Celcius ke Fahrenheit
            cout << "Suhu dalam Fahrenheit : " << KonvCtoF(suhu_127) << endl;
            break;
        case 2:
            // Meminta suhu dalam Fahrenheit dari pengguna
            cout << "Masukkan suhu dalam Fahrenheit : ";
            cin >> suhu_127;
            // Menampilkan hasil konversi dari Fahrenheit ke Celcius
            cout << "Suhu dalam Celcius : " << KonvFtoC(suhu_127) << endl;
            break;
        default: 
            // Menampilkan pesan kesalahan jika pilihan tidak valid
            cout << "Pilihan tidak valid!" << endl;
    }
    return 0; // Mengembalikan nilai ke nol
}