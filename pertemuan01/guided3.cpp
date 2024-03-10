#include <iostream> // untuk menjalankan operasi input dan output 
#include <array> // untuk mendefinisikan fungsi array 
using namespace std; // agar cout dan cin tidak memerlukan std::

int main() {
// Deklarasi dan inisialisasi array
    int nilai_127[5];
    nilai_127[0] = 23;
    nilai_127[1] = 50;
    nilai_127[2] = 34;
    nilai_127[3] = 78;
    nilai_127[4] = 90;
    
    // Mencetak array dengan tab
    cout << "Isi array pertama : " << nilai_127[0] << endl;
    cout << "Isi array kedua : " << nilai_127[1] << endl;
    cout << "Isi array ketiga : " << nilai_127[2] << endl;
    cout << "Isi array keempat : " << nilai_127[3] << endl;
    cout << "Isi array kelima : " << nilai_127[4] << endl;

    return 0; // mengembalikan nilai ke nol
}
