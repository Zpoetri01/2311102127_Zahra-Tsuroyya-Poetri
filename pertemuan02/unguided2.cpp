// Oleh Zahra Tsuroyya Poetri - 2311102127
#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array tiga dimensi
    int arr_127[2][3][3];

    // Memasukkan elemen-elemen array
    cout << "Masukkan elemen elemen array:\n";
    for (int v = 0; v < 2; v++) { // 
        for (int w = 0; w < 3; w++) { 
            for (int x = 0; x < 3; x++) { 
                // Meminta pengguna untuk memasukkan nilai untuk setiap elemen array
                cout << "Input Array[" << v << "][" << w << "][" << x << "] = ";
                cin >> arr_127[v][w][x]; // Memasukkan nilai ke dalam array
            }
            cout << endl; // Membuat baris kosong setelah satu dimensi array diisi
        }
    }

    // Menampilkan array yang diinputkan
    cout << "Array yang diinputkan:\n";
    for (int v = 0; v < 2; v++) { 
        for (int w = 0; w < 3; w++) { 
            for (int x = 0; x < 3; x++) { 
                cout << arr_127[v][w][x] << " "; 
            }
            cout << endl; 
        }
        cout << endl; 
    }

    return 0;
}
