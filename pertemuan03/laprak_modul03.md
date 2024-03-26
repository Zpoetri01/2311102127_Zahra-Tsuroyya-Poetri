# <h1 align="center">Laporan Praktikum Modul Single And Double Linked List</h1>
<p align="center">Zahra Tsuroyya Poetri - 2311102127</p>

## Dasar Teori

#### 1. Single Linked List
adalah salah satu cara untuk menyimpan sekumpulan elemen. Sama halnya dengan array, elemen yang disimpan dapat berupa karakter atau integer. Masing-masing elemen dalam linked list disimpan dalam bentuk sebuah node. Node adalah gabungan dua sub-elemen atau komponen; Bagian data yang menyimpan elemen dan bagian next yang menyimpan link ke node selanjutnya. Linked list terbentuk saat terdapat banyak node yang saling tertaut dan membentuk sebuah rantai. Setiap node menunjuk pada node selanjutnya sesuai urutan. Node pertama yang selalu digunakan sebagai referensi saat melakukan traversing pada list  disebut Head. Node terakhir akan menunjuk ke Null. Linked list dapat diimplementasikan menggunakan struktur dan pointer.

#### 2. Double Linked List
Double Linked List Circular adalah linked list dengan menggunakan pointer, dimana setiap node memiliki 3 field, yaitu:<br/>
- 1 field pointer yang menunjuk pointer berikutnya (next),<br/>
- 1 field menunjuk pointer sebelumnya (prev),<br/>
- serta sebuah field yang berisi data untuk node tersebut.<br/>
Double Linked List Circular pointer next dan prev nya menunjuk ke dirinya sendiri secara circular. Setiap node pada linked list mempunyai field yang berisi data dan pointer ke node berikutnya & ke node sebelumnya. Dibutuhkan dua buah variabel pointer yaitu head dan tail. Head akan selalu menunjuk pada node pertama, sedangkan tail akan selalu menunjuk pada node terakhir.

## Guided 

### 1. Single Linked List

```C++
#include <iostream>
using namespace std;
/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    int data;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}
// Tambah Belakang
void insertBelakang(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}
// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == false)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
Kode di atas merupakan program single list non-circular yang digunakan untuk menampilkan list nilai sesuai posisi yang dimasukkan oleh pengguna pada fungsi int main. Di kode tersebut pengguna menginginkan output nilai dengan posisi insertDepan, insertBelakang, insertTengah, hapusDepan, hapusBelakang, hapusBelakang, ubahDepan, ubahBelakang, dan ubahTengah. Jadi, nilai dapat berpindah-pindah, dihapus, bahkan diubah sesuai posisi yang diinginkan pengguna.

### 2. Double Linked List

```C++
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    void
        push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        head = newNode;
    }
    void
        pop()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        delete temp;
    }
    bool
        update(int oldData, int newData)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data == oldData)
            {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void
        deleteAll()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void
        display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    DoublyLinkedList list;
    while (true)
    {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter data to add: ";
            cin >> data;
            list.push(data);
            break;
        }
            case 2:
            {
                list.pop();
                break;
            }
            case 3:
            {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData,
                                           newData);
                if (!updated)
                {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4:
            {
                list.deleteAll();
                break;
            }
            case 5:
            {
                list.display();
                break;
            }
            case 6:
            {
                return 0;
            }
            default:
            {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

Kode di atas merupakan program double linked list yang digunakan untuk menampilkan sebuah menu yang dapat di tambah, update, dan hapus data pada menu tersebut, sesuai keinginan pengguna.

## Unguided 

### 1. Program Single Linked List
Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut: <br/>
###### a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah
###### nama dan usia anda. <br/>
###### [Nama_anda] [Usia_anda] <br/>
###### John             19 <br/>
###### Jane             20 <br/>
###### Michael          18 <br/>
###### Yusuke           19 <br/>
###### Akechi           20 <br/>
###### Hoshino          18 <br/>
###### Karin            18 <br/>
###### b. Hapus data Akechi <br/>
###### c. Tambahkan data berikut diantara John dan Jane : Futaba 18 <br/>
###### d. Tambahkan data berikut diawal : Igor 20 <br/>
###### e. Ubah data Michael menjadi : Reyn 18 <br/>
###### f. Tampilkan seluruh data <br/>

```C++
#include <iostream>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    int usia;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Deklarasi fungsi
int hitungList();

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return (head == NULL);
}

// Tambah Data di Depan
void tambahDepan(string nama, int usia) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang
void tambahBelakang(string nama, int usia) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah
void tambahTengah(string nama, int usia, int posisi) {
    if (posisi < 1 || posisi > hitungList() + 1) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, usia);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;

    Node *bantu = head;
    for (int i = 1; i < posisi - 1 && bantu != NULL; ++i) {
        bantu = bantu->next;
    }

    if (bantu == NULL) {
        cout << "Posisi melebihi panjang linked list" << endl;
        return;
    }

    baru->next = bantu->next;
    bantu->next = baru;
}

// Data Hapus Tengah
void hapusTengah(int posisi) {
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi di luar jangkauan" << endl;
        return;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
        return;
    } else {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }
            if (nomor == posisi) {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}

// Ubah Data di Tengah
void ubahTengah(string namaBaru, int usiaBaru, int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    Node *bantu = head;
    int nomor = 1;
    while (bantu != NULL && nomor < posisi) {
        bantu = bantu->next;
        nomor++;
    }

    if (bantu == NULL) {
        cout << "Posisi melebihi panjang linked list" << endl;
        return;
    }

    bantu->nama = namaBaru;
    bantu->usia = usiaBaru;
}


// Hitung Jumlah List
int hitungList() {
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tampilkan List
void tampil() {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *bantu = head;
    while (bantu != NULL) {
        cout << bantu->nama << "\t" << bantu->usia << endl;
        bantu = bantu->next;
    }
}

int main() {
    init();
    tambahBelakang("Zahra", 18);
    tambahBelakang("John", 19);
    tambahBelakang("Jane", 20);
    tambahBelakang("Michael", 18);
    tambahBelakang("Yusuke", 19);
    tambahBelakang("Akechi", 20);
    tambahBelakang("Hoshino", 18);
    tambahBelakang("Karin", 18);

    tampil();

    cout << endl;
    
    cout << "Hapus data Akechi" << endl;

    hapusTengah(6);
    tampil();

    cout << endl;

    cout << "Tambah data diantara John dan Jane" << endl;

    tambahTengah("Futaba", 18, 3);
    tampil();

    cout << endl;

    cout << "Tambah data diawal" << endl;

    tambahDepan("Igor", 20);
    tampil();

    cout << endl;

    cout << "Ubah data Michael" << endl;

    ubahTengah("Reyn", 18, 6);
    tampil();

    cout << endl;

    return 0;
}
```
#### Output:
![Screenshot (1323)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/f0196ad1-d43d-42cc-9be9-c906943f0889)
![Screenshot (1324)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/4b9a78cf-3244-4c85-a526-7b6de6f3d03a)

Kode di atas merupakan program single linke list untuk memasukkan data sesuai urutan berdasarkan nama dan usia. Pada program tersebut pengguna dapat menambahkan, menghapus, dan mengubah data diri tersebut sesuai perintah. 

### 2. Program Double Linked List
Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / diurutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga. <br/>
###### Nama Produk, Harga <br/>
###### Originote, 60.000 <br/>
###### Somethinc, 150.000 <br/>
###### Skintific, 100.000 <br/>
###### Wardah, 50.000 <br/>
###### Hanasui, 30.000 <br/>

Case: <br/>
1. Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific<br/>
2. Hapus produk wardah<br/>
3. Update produk Hanasui menjadi Cleora dengan harga 55.000<br/>
4. Tampilkan menu seperti dibawah ini<br/>
###### Toko Skincare Purwokerto<br/>
###### 1. Tambah Data<br/>
###### 2. Hapus Data<br/>
###### 3. Update Data<br/>
###### 4. Tambah Data Urutan Tertentu<br/>
###### 5. Hapus Data Urutan Tertentu<br/>
###### 6. Hapus Seluruh Data<br/>
###### 7. Tampilkan Data<br/>
###### 8. Exit<br/>

Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :<br/>
###### Nama Produk, Harga
###### Originote, 60.000
###### Somethinc, 150.000
###### Azarine, 65.000
###### Skintific, 100.000
###### Cleora, 55.000

```C++
#include <iostream>
#include <iomanip>
using namespace std;

class Node {
public:
    string namaProduk;
    double hargaProduk;
    Node *prev;
    Node *next;
};

class DoublyLinkedList {
public:
    Node *head;
    Node *tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(string namaProduk, double hargaProduk) {
        Node *newNode = new Node;
        newNode->namaProduk = namaProduk;
        newNode->hargaProduk = hargaProduk;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }

        head = newNode;
    } 

    void pop() {
        if (head == nullptr) {
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }

        delete temp;
    }

    bool update(string namaProduk, double hargaProduk, string namaLama) {
        Node *current = head;
        while (current != nullptr) {
            if (current->namaProduk == namaLama) {
                current->namaProduk = namaProduk;
                current->hargaProduk = hargaProduk;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void tambahTertentu(string namaProduk, double hargaProduk, int posisi) {
        if (posisi < 1) {
            cout << "Posisi harus lebih dari atau sama dengan 1" << endl;
            return;
        }

        if (posisi == 1) {
            push(namaProduk, hargaProduk);
            return;
        }

        Node *baru = new Node;
        baru->namaProduk = namaProduk;
        baru->hargaProduk = hargaProduk;
        baru->prev = nullptr;
        baru->next = nullptr;

        Node *current = head;
        for (int i = 1; i < posisi - 1 && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi melebihi panjang linked list" << endl;
            return;
        }

        baru->next = current->next;
        baru->prev = current;
        if (current->next != nullptr) {
            current->next->prev = baru;
        } else {
            tail = baru;
        }
        current->next = baru;
    }

    void hapusTertentu(int posisi) {
        if (head == nullptr) {
            cout << "List kosong" << endl;
            return;
        }

        if (posisi < 1) {
            cout << "Posisi harus lebih dari atau sama dengan 1" << endl;
            return;
        }

        Node *hapus = head;
        if (posisi == 1) {
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
            delete hapus;
            return;
        }

        Node *current = head;
        for (int i = 1; i < posisi && current != nullptr; ++i) {
            hapus = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi melebihi panjang linked list" << endl;
            return;
        }

        hapus->next = current->next;
        if (current->next != nullptr) {
            current->next->prev = hapus;
        } else {
            tail = hapus;
        }
        delete current;
    }

    void deleteAll() {
        Node *current = head;
        while (current != nullptr) {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        if (head == nullptr) {
            cout << "Tidak ada data" << endl;
            return;
        }
        
        cout << "-----------------------------------------------------" << endl;
        cout << "|" << setw(20) << left << "Nama Produk" << "|" << setw(10) << left << "Harga" << "|" <<  endl;
        cout << "-----------------------------------------------------" << endl;
        
        Node *current = head;
        while (current != nullptr) {
            cout << "|" << setw(20) << left << current->namaProduk << "|" << setw(10) << left << current->hargaProduk << "|" << endl;
            current = current->next;
        }
        cout << "-----------------------------------------------------"<< endl;
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << endl;

        int pilih;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilih;
        cout << endl;

        switch (pilih) {
            case 1: {
                string namaProduk;
                double hargaProduk;
                cout << "Tambah Data" << endl;
                cout << "Masukkan nama produk: ";
                cin.ignore(); 
                getline(cin, namaProduk);
                cout << "Masukkan harga: ";
                cin >> hargaProduk;
                cin.ignore(); 
                cout << fixed << setprecision(3) << hargaProduk << endl; // Menggunakan setprecision untuk menampilkan tiga digit nol di belakang koma
                list.push(namaProduk, hargaProduk);
                break;
            }

            case 2: {
                list.pop();
                break;
            }
            case 3: {
                string namaProdukLama, namaProdukBaru;
                double hargaProdukBaru;
                cout << "Update Data" << endl;
                cout << "Masukkan nama produk yang akan diubah: ";
                cin >> namaProdukLama;
                cin.ignore(); // Membersihkan buffer setelah mengambil input
                cout << "Masukkan nama produk baru: ";
                cin >> namaProdukBaru;
                cin.ignore(); 
                cout << "Masukkan harga baru: ";
                cin >> hargaProdukBaru;
                cin.ignore(); 
                cout << fixed << setprecision(3) << hargaProdukBaru << endl; 
                bool updated = list.update(namaProdukBaru, hargaProdukBaru, namaProdukLama);
                if (!updated) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string namaProduk;
                double hargaProduk;
                int posisi;
                cout << "Tambah Data Urutan Tertentu" << endl;
                cout << "Masukkan nama produk: ";
                cin.ignore(); 
                getline(cin, namaProduk);
                cout << "Masukkan harga: ";
                cin >> hargaProduk;
                cout << "Masukkan posisi untuk menambahkan data: ";
                cin >> posisi;
                cin.ignore(); 
                cout << fixed << setprecision(3) << hargaProduk << endl; 
                list.tambahTertentu(namaProduk, hargaProduk, posisi);
                break;
            }
            case 5: {
                int posisi;
                cout << "Hapus Data Urutan Tertentu" << endl;
                cout << "Masukkan posisi untuk menghapus data: ";
                cin >> posisi;
                cin.ignore(); // Membersihkan newline dari buffer input
                list.hapusTertentu(posisi);
                break;
            }
            case 6: {
                list.deleteAll();
                cout << "Semua data telah dihapus" << endl;
                break;
            }
            case 7: {
                cout << "Data saat ini:" << endl;
                list.display();
                break;
            }
            case 8: {
                cin.ignore(); 
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
    }
    return 0;
}
```
#### Output 
![Screenshot (1304)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/80a1a13e-d547-4a38-96dd-76e6fca4cd91)
![Screenshot (1305)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/c8b2677c-462d-4fec-a62b-dede21a4b58c)
![Screenshot (1306)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/66d57715-e0a8-46c2-a6e9-9aa35c31f25e)
![Screenshot (1307)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/c5556e49-4672-4fbc-a90f-bc10d0f63da8)
![Screenshot (1308)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/934ea109-0a21-4a6a-931d-35368778ebce)
![Screenshot (1309)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/eddd641f-060c-4934-a5e0-cc7cae281f26)
![Screenshot (1310)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/67cab86e-e6c9-4f32-a35d-53ee86dfdf18)
![Screenshot (1311)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/44c202da-5c2c-4478-94c4-503b53635a7b)
![Screenshot (1312)](https://github.com/Zpoetri01/2311102127_Zahra-Tsuroyya-Poetri/assets/162399144/aea2f060-7ac6-4a9c-b10e-78902f5714a2)

Kode di atas merupakan program double linked list yang digunakan untuk memuat data pada toko skincare purwokerto. Data pada awal mula ada merupakan produk skincare originote, somethinc, skintific, wardah, dan hanasui, lalu menambahkan data yaitu produk azarine diantara data produk somethinc dan produk skintific. Setelah itu, menghapus data produk pada posisi data ke 5 yaitu produk wardah. Kemudian update data juga dilakukan, dengan data lama produk hanasui diubah menjadi produk cleora. Data produk sudah disesuaikan perintah, jika ingin melihat tampilan data maka memilih nomor 7 pada menu, dan bagian terakhir untuk keluar, dapat memilih menu nomor 8.

## Kesimpulan
Setelah praktikum dapat membantu praktikan memahami materi single linked list dan double linked list, serta melakukan cara membuat kode program yang dilakukan untuk menjawab soal atau perintah. Materi kali ini lebih banyak dari biasanya jika diimplementasikan pada kode program. Untuk itu, harus lebih teliti sebagai praktikan. 
## Referensi
[1] Putra, Agung k. 2019. “List Linier(linked List) Dan Variasinya_struktur Data.” OSF Preprints. osf.io/preprints/osf/tjnfa
[2] Yulianti, Meyka. 2019. “Struktur Data_double Linked List Circular.” OSF Preprints. osf.io/preprints/osf/2nhs5
