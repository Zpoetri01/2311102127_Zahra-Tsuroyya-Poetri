#include <iostream> // untuk mendefinisikan operator input dan output
#include <string> // untuk mendefinisikan string
using namespace std;

// Deklarasi kelas Mahasiswa
class Mahasiswa {
private:
    string nim_127;
    string nama_127;
    float nilai_127;

public:
    // Konstruktor
    Mahasiswa(string n, string nm, float nl) {
        nim_127 = n;
        nama_127 = nm;
        nilai_127 = nl;
    }

    // Fungsi untuk menampilkan data mahasiswa
    void tampilkanData() {
        cout << "NIM    : " << nim_127 << endl;
        cout << "Nama   : " << nama_127 << endl;
        cout << "Nilai  : " << nilai_127 << endl;
    }
};

int main() {
    // Membuat objek dari kelas Mahasiswa
    Mahasiswa mhs("2311102127", "Zahra Tsuroyya Poetri", 85.5);

    // Menampilkan data mahasiswa
    mhs.tampilkanData();

    return 0; // Mengembalikan nilai ke nol
}