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