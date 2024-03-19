# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Zahra Tsuroyya Poetri - 2311102127</p>

## Dasar Teori
Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. <br/>
1. Array Satu Dimensi<br/>
   Array satu dimensi merupakan kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda.  Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan Deklarasi : Type_Data Nama_Variabel [index] Misalnya : int Z[10]; <br/>
2. Array Dua Dimensi <br/>
   Array dua dimensi sering digambarkan sebagai sebuah matriks, merupakan perluasan dari array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dan beberapa kolom elemen, maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen bertipe sama. Deklarasi : Type_Data Nama_Variabel [Index1] [index2]; Misal : int Z[3][2];<br/>
3. Array MultiDimensi <br/>
   Array ini seperti array dimensi dua tetapi dapat memiliki ukuran yang lebih besar. Sebenarnya array dimensi banyak ini tidak terlalu sering digunakan, tetapi sewaktu-waktu kalau dimensi yang dibutuhkan banyak, maka array ini sangat memegang peranan yang penting Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3]; Misal : int Z [3][4][2]; <br/>

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
#### Output:
![image](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/452689df-8a7d-48a0-b405-df3047810a70)

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
![Screenshot (1280)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/46100088-3aef-4411-b395-070df5f37936)

Kode di atas merupakan program yang digunakan untuk menampilkan output seperti keinginan user, data yang tersimpan di dalam array berupa angka 1-10. Hasil menentukan nomor genap dan nomor ganjil pada angka tersebut.

## Unguided

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
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
```

#### Output: 

![Screenshot (1284)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/10314df1-428d-4443-a3cf-b771510ff5bf)
![Screenshot (1284)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/0c377a7c-c249-45d6-8f9a-7642af9a1616)

Kode di atas merupakan program input array tiga dimensi yang dapat diinputkan jumlah atau ukuran elemennya [2][3][3] sesuai yang diiginkan user.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
```C++
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
```
#### Output:
![Screenshot (1286)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/087cf0d2-791f-4f9e-a5af-4587324a32d0)

Kode di atas merupakan menu untuk mencari nilai minimum, nilai maksimum dan nilai rata rata menggunakan array. User dapat menginputkan nilai yang akan di inisialisasi oleh array dan menampilkan hasil. 

## Kesimpulan


## Referensi
[1] Pratama, Muhammad A. 2020. “STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++.” OSF Preprints. <br/>
[2] lestari, Komang. 2019. “STUKTUR DATA STATIS ARRAY.” OSF Preprints. <br/>
