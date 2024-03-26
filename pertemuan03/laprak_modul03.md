# <h1 align="center">Laporan Praktikum Modul Single And Double Linked List</h1>
<p align="center">Zahra Tsuroyya Poetri - 2311102127</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

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

## Guided

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
a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah
nama dan usia anda. <br/>
[Nama_anda] [Usia_anda] <br/>
John             19 <br/>
Jane             20 <br/>
Michael          18 <br/>
Yusuke           19 <br/>
Akechi           20 <br/>
Hoshino          18 <br/>
Karin            18 <br/>
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
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
