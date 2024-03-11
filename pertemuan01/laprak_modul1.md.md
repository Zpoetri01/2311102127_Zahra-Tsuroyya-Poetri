# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Arvinanto Bahtiar</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Guided 

### 1. [Tipe Data Primitif]

```C++
#include <iostream> // untuk menjalankan operasi input dan output
#include <iomanip> // untuk mengontrol format output data 
using namespace std; // agar cout dan cin tidak memerlukan std::
int main() 
{
    char op_zahra; // mendeklarasikan variabel 'op' dengan tipe data char 
    float num1_127, num2_127; // mendeklarasikan variabel 'num1' & 'num2' dengan tipe data float
    // pengguna dapat menginputkan operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op_zahra;
    // pengguna dapat menginputkan dua operand 
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    // Menggunakan statement switch 
    switch (op_zahra)
    {
    // jika pengguna memasukkan +
    case '+':
        cout << "Result: " << num1_127 + num2_127; // program akan menampilkan hasil dari penjumlahan num1 & num2
        break; 
    // jika pengguna memasukkan -
    case '-':
        cout << "Result: " << num1_127 - num2_127; // program akan menampilkan hasil dari pengurangan num1 & num2
        break;
    // jika pengguna memasukkan *
    case '*':
        cout << "Result: " << num1_127 * num2_127; // program akan menampilkan hasil dari perkalian num1 & num2
        break;
    // jika pengguna memasukkan /
    case '/':
        if (num2_127 != 0)
        {
            cout << "Result: " << fixed << setprecision(2) << num1_127 / num2_127; // program akan menampilkan hasil dari pembagian num1 & num2 dengan hasil apabila bilangan desimal tetap akan ditampilkan dengan dua angka dibelakang koma     
        }
        else
        {
            cout << "Error! Division by zero is not allowed."; // hasil program jika memasukkan nol
        }
        break;
    // jika pengguna memasukkan operator selain  +, -, * or /,
    // pesan kesalahan akan ditampilkan
    default:
        cout << "Error! Operator is not correct";
    } // statement switch selesai
    return 0; mengembalikan nilai ke nol 
}
```
Kode di atas adalah program yang menjalankan perhitungan saat pengguna memasukkan operator penambahan, pengurangan, perkalian atau pembagian. Program tersebut menggunakan tipe data primitif 'char' dan 'float'.

### 2. [Tipe Data Abstrak]

```C++
#include <stdio.h> // mendefiniskan fungsi standar input dan output yaitu printf
#include <string.h> // mendefinisikan fungsi standar yaitu strcpy

struct Mahasiswa_127_zahra // deklarasi struct dengan variabel 'Mahasiswa_127_zahra'
{
    char name_zahra [50];
    char address_zahra [100];
    int age_zahra;
};
int main()
{
    struct Mahasiswa_127_zahra mhs1, mhs2; // mendeklarasikan dua variabel Mahasiswa_127_zahra dengan nama mhs1 dan mhs2
    strcpy(mhs1.name_zahra, "Dian");
    strcpy (mhs1.address_zahra, "Mataram");              // menggunakan fungsi strcpy
    mhs1.age_zahra = 22;                            
    strcpy(mhs2.name_zahra, "Bambang");
    strcpy(mhs2.address_zahra, "Surabaya");
    mhs2.age_zahra = 23;

    // menampilkan outputan nilai struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name_zahra);
    printf("Alamat: %s\n", mhs1.address_zahra);
    printf("Umur: %d\n", mhs1.age_zahra);
    printf ("\n");
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name_zahra);
    printf("Alamat: %s\n", mhs2.address_zahra);
    printf("Umur: %d\n", mhs2.age_zahra);
    return 0; // mengembalikan nilai ke nol
}
```
Kode di atas digunakan untuk sebuah program yang menjalankan fungsi struct dengan variabel yang berupa 'Mahasiswa'. Hasil dari program tersebut akan menampilkan nama, alamat, dan umur mahasiswa yang tersimpan didalam fungsi strcpy.

### 3. [Tipe Data Koleksi]

```C++
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
```
Kode di atas digunakan untuk mencetak dari sebuah array. Program tersebut menginisialisasikan nilai ke dalam array yang terdapat 5 nilai yaitu 23, 50, 34, 78, dan 90. 

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!]

```C++
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
```
#### Output:
![Screenshot (1254)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/7ca31cb3-1707-441e-90f1-a9bea2117855)


Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
