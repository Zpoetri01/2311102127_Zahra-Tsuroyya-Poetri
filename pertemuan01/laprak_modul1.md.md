# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Zahra Tsuroyya Poetri - 2311102127</p>

## Dasar Teori

Tipe data adalah jenis data yang akan disimpan di dalam suatu variabel untuk menjalankan sebuah program. Berikut tipe data yang dipelajari:

1. Tipe Data Primitif
   Tipe data primitif adalah tipe data dasar pada pemrograman yang hanya mampu menyimpan satu nilai pada setiap satu variabel. Contoh tipe data primitif, yaitu:
   - Interger (int), merupakan tipe data bilangan bulat.<br/>
   - Float merupakan tipe data bilangan desimal.<br/>
   - Karakter (char), merupakan tipe data yang menyimpan hanya satu digit karakter.<br/>
   - Boolean (bool), merupakan tipe data logika yang hanya bernilai true dan false.<br/>
   
3. Tipe Data Abstrak
   Tipe data abstrak atau yang biasa disebut Abstract Data Type (ADT) merupakan model matematika yang merujuk pada sejumlah bentuk struktur data yang memiliki kegunaan atau perilaku yang serupa, atau suatu tipe data dari suatu bahasa pemrograman yang memiliki sematik yang serupa.
   
4. Tipe Data Koleksi
   Tipe data koleksi adalah suatu jenis atau tipe data yang digunakan untuk menghimpun kumpulan data, atau data yang berjumlah lebih dari satu. Tipe 
data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses sejumlah 
besar data dengan cara yang terstruktur. Ada beberapa tipe koleksi yang digunakan, sebagai berikut:
- Array : struktur data statis yang menyimpan elemen-elemen dengan tipe data yang sama.<br/>
- Vector : kemampuan untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan.<br/>
- Map : terasa mirip dengan array namun dengan index yang memungkinkan untuk berupa tipe data selain integer. Pada map, indeks tersebut diberi nama “key”.<br/>

## Guided 

### 1. [Tipe Data Primitif]

```C++
#include <iostream> // Untuk menjalankan operasi input dan output
#include <iomanip> // Untuk mengontrol format output data 
using namespace std; // Agar cout dan cin tidak memerlukan std::
int main() 
{
    char op_zahra; // Mendeklarasikan variabel 'op' dengan tipe data char 
    float num1_127, num2_127; // Mendeklarasikan variabel 'num1' & 'num2' dengan tipe data float
    // Pengguna dapat menginputkan operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op_zahra;
    // Pengguna dapat menginputkan dua operand 
    cout << "Enter two operands: ";
    cin >> num1_127 >> num2_127;
    // Menggunakan statement switch 
    switch (op_zahra)
    {
    // Jika pengguna memasukkan +
    case '+':
        cout << "Result: " << num1_127 + num2_127; // Program akan menampilkan hasil dari penjumlahan num1 & num2
        break; 
    // Jika pengguna memasukkan -
    case '-':
        cout << "Result: " << num1_127 - num2_127; // Program akan menampilkan hasil dari pengurangan num1 & num2
        break;
    // Jika pengguna memasukkan *
    case '*':
        cout << "Result: " << num1_127 * num2_127; // Program akan menampilkan hasil dari perkalian num1 & num2
        break;
    // Jika pengguna memasukkan /
    case '/':
        if (num2_127 != 0)
        {
            cout << "Result: " << fixed << setprecision(2) << num1_127 / num2_127; // Program akan menampilkan hasil dari pembagian num1 & num2 dengan hasil apabila bilangan desimal tetap akan ditampilkan dengan dua angka dibelakang koma     
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
    return 0; // mengembalikan nilai ke nol 
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

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

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
![Screenshot (1264)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/6ec64f1f-e2be-40a3-b3a2-28aea7b02360)
![Screenshot (1255)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/8f081455-0a4c-4e90-ba65-6d9217387123)


Kode di atas digunakan untuk menampilkan program konversi suhu. Program tersebut memiliki 2 pilihan yaitu konversi celcius ke fahrenheit dan konversi fahrenheit ke celcius. Pengguna akan memasukkan suhu jika sudah memilih diantara 2 pilihan tersebut. Hasil dari program akan menampilkan suhu yang telah dikonversikan.

Kesimpulan Tipe Data Primitif:
Tipe data primitif merupakan tipe data yang sudah tersedia dari sistem untuk menyimpan nilai-nilai dasar seperti bilangan bulat, bilangan desimal, karakter, dan boolean, tergantung pada penggunaan. 

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!

A. Fungsi Class 
Class digunakan untuk menciptakan suatu instance dari objek dimana terdiri dari sekumpulan objek dengan kesamaan data / properti / atribut , fungsi / behavior / method dan hubungan ke objek lain.

B. Fungsi Struct 
Struct digunakan untuk menjadikan seperti sebuah tabel yang mendeklarasikan elemen di dalam variabel yang diberikan.

C. Contoh Program Class
```C++
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
```
#### Output:
![Screenshot (1259)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/f6ec3a8c-e579-497f-b0f3-6853fc0bb4f2)

Kode di atas merupakan contoh program class untuk membuat objek dari kelas mahasiswa yang berisikan nim, nama, dan nilai. Lalu program akan menampilkan data dari kelas mahasiswa tersebut. 

D. Contoh Program Struct
```C+
#include <iostream>
#include <string>
using namespace std;

// Deklarasi struktur Laptop
struct Laptop {
    string nama_127;
    int layar_127;
    int ram_127;
};

// Deklarasi fungsi dataLaptop yang menerima objek Laptop sebagai parameter
void dataLaptop(const Laptop& laptop) {
    cout << "Nama Laptop : " << laptop.nama_127 << endl;
    cout << "Layar       : " << laptop.layar_127 << " Inch" << endl;
    cout << "RAM         : " << laptop.ram_127 << " GB" << endl;
}

int main() {
    // Membuat objek dari struktur Laptop
    Laptop laptop;

    // Mengisi data laptop
    laptop.nama_127 = "Lenovo Thinkpad T480s";
    laptop.layar_127 = 14; 
    laptop.ram_127 = 16;   

    // Menampilkan data laptop
    cout << "Data Laptop" << endl;
    dataLaptop(laptop);

    return 0; // Mengembalikan nilai ke nol
}
```
#### Output: 
![Screenshot (1265)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/a84b72b3-6ec1-451e-ae8b-9863398dc7d1)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map!

```C++
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Membuat map untuk menyimpan umur anak-anak desa
    map<string, int> umurAnakDesa_127;

    // Memasukkan data umur anak-anak desa ke dalam map
    umurAnakDesa_127["Amanda"] = 10;
    umurAnakDesa_127["Naya"] = 8;
    umurAnakDesa_127["Shafa"] = 9;
    umurAnakDesa_127["Santoso"] = 7;
    umurAnakDesa_127["Ian"] = 6;

    // Menampilkan umur anak-anak desa menggunakan fungsi map
    cout << "Umur anak-anak desa:" << endl;
    for (const auto& elemen : umurAnakDesa_127) {
        cout << elemen.first << ": " << elemen.second << " tahun" << endl;
    }

    return 0; // Mengembalikan nilai ke nol
}
```

#### Output: 
![Screenshot (1267)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/970f92a1-a0b6-4545-baef-3a18b3040301)

Kode di atas merupakan program menyimpan umur anak-anak desa menggunakan fungsi map. Terdapat 5 umur anak-anak desa di dalam fungsi map yang dapat dideklarasikan dengan perulangan for.

Perbedaan Array dengan Map: 
    1. Tipe Data<br/>
       - Array menggunakan tipe data primitif.<br/>
       - Map menggunakan tipe data bebas.<br/>     
    2. Ukuran<br/>
       - Ukuran array biasanya tetap dan harus ditentukan saat pembuatan array.<br/>
       - Tidak ada batasan dalam map, biasanya dapat diperluas atau dikurangi sesuai kebutuhan.<br/>   
    3. Akses Data<br/>
       - Array menggunakan indeks numerik untuk mengakses elemen-elemen didalamnya.<br/>
       - Elemen pada map diakses menggunakan key yang terkait dengan setiap nilai key.<br/>
        
## Kesimpulan
Tipe data C++ merupakan elemen penting yang digunakan pada suatu program agar berjalan sesuai dengan keinginan. Pada pembelajaran kali ini, dapat mempelajari 3 tipe data, yaitu tipe data primitif dengan contoh interger, float, karakter, dan boolean, tipe data abstrak dengan contoh class dan struct, dan tipe data koleksi dengan contoh array, vector, dan map. Setiap tipe data memiliki kegunaannya masing masing yang memiliki perbedaan dan beberapa kesamaan. 

## Referensi
[1] W, Yogga Pratama. (2020). Materi Analysis Data. Bandar Lampung: Universitas Mitra Indonesia<br/>
[2] Sindar, Anita. (2019). Struktur Data Dan Algoritma Dengan C++. CV.AA.Rizky<br/>
