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

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. 
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari 
materi tipe data primitif!]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
