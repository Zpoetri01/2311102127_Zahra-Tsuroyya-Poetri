# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Zahra Tsuroyya Poetri - 2311102127</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
    // PROGRAM INPUT ARRAY 3 DIMENSI
    int main() {
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                cout << arr[x][y][z] << endl;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
Kode di atas merupakan program input array 3 dimensi dengan elemen x,y,z untuk menghasilkan tampilan array menjadi 2 matriks 3 bari dan 3 kolom.

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main() {
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n"; // Menampilkan pesan meminta pengguna untuk memasukkan angka sejumlah panjang array yang diinginkan 
    for (i = 0; i < a; i++) {
        cout << "Array ke-" << (i) << ": ";// Menampilkan pesan meminta pengguna menginputk nilai array ke-i
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] > maks) {
        maks = array[i];
        lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl; // Menampilkan nilai maksimum dan lokasinya
    }
```
Kode di atas merupakan program mencari nilai maksimal pada array yang sesusai dengan yang keinginan user. Hasil akan menunjukkan nilai maksimum yang sudah diinputkan oleh user dari beberapa angka tadi [i].

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

```C++
// Oleh Zahra Tsuroyya Poetri - 2311102127
#include <iostream> 
using namespace std;

int main() {
    // Mendefinisikan array dengan nama dataArray_127 yang berisi 10 elemen bilangan bulat
    int dataArray_127[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Mencetak elemen-elemen array dataArray_127
    cout << "Data Array : ";
    for (int i = 0; i < 10; ++i) {
        cout << dataArray_127[i] << " ";
    }
    cout << endl;

    // Mencetak nomor genap dari array dataArray_127
    cout << "Nomor Genap : ";
    for (int i = 0; i < 10; ++i) {
        if (dataArray_127[i] % 2 == 0) {
            cout << dataArray_127[i] << ", ";
        }
    }
    cout << endl;

    // Mencetak nomor ganjil dari array dataArray_127
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < 10; ++i) {
        if (dataArray_127[i] % 2 != 0) {
            cout << dataArray_127[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}

```
#### Output:
![Screenshot (1280)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/35bc1673-5bce-47c4-af2b-3b051244bde2)

Kode di atas merupakan program yang digunakan untuk menampilkan output seperti data yang sesuai dengan keinginan user. 
## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
