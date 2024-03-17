// Oleh Zahra Tsuroyya Poetri - 2311102127
#include <iostream>
using namespace std;

int main() {
    int nilai_127;

    // Meminta pengguna untuk memasukkan nilai array
    cout << "Masukkan nilai array: ";
    cin >> nilai_127;

    // Membuat array sesuai dengan nilai yang dimasukkan pengguna
    int arr[nilai_127];

    // Meminta pengguna untuk memasukkan nilai-nilai array
    cout << "Masukkan nilai-nilai array:\n";
    for (int d = 0; d < nilai_127; d++) {
        cout << "Nilai " << d + 1 << ": ";
        cin >> arr[d];
    }

    // Menginisialisasi nilai maksimum dan minimum
    int max = arr[0];
    int min = arr[0];
    int rataRata = 0;

    // Mencari nilai maksimum, minimum, dan menghitung jumlah
    for (int d = 0; d < nilai_127; d++) {
        if (arr[d] > max) {
            max = arr[d];
        }
        if (arr[d] < min) {
            min = arr[d];
        }
        rataRata += arr[d];
    }

    // Menghitung rata-rata
    double rata = static_cast<double>(rataRata) / nilai_127;

    // Menampilkan hasil
    cout << "\nNilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << rata << endl;

    return 0;
}
