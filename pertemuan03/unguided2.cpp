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
                cin.ignore(); // Membersihkan newline dari buffer input sebelum membaca string
                getline(cin, namaProduk);
                cout << "Masukkan harga: ";
                cin >> hargaProduk;
                cin.ignore(); // Membersihkan newline dari buffer input setelah membaca angka
                cout << fixed << setprecision(3) << hargaProduk << endl; // Menggunakan manipulator untuk menampilkan tiga digit nol di belakang koma
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
                cin.ignore(); // Membersihkan newline dari buffer input
                cout << "Masukkan harga baru: ";
                cin >> hargaProdukBaru;
                cin.ignore(); // Membersihkan buffer setelah mengambil input
                cout << fixed << setprecision(3) << hargaProdukBaru << endl; // Menggunakan manipulator untuk menampilkan tiga digit nol di belakang koma
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
                cin.ignore(); // Membersihkan newline dari buffer input sebelum membaca string
                getline(cin, namaProduk);
                cout << "Masukkan harga: ";
                cin >> hargaProduk;
                cout << "Masukkan posisi untuk menambahkan data: ";
                cin >> posisi;
                cin.ignore(); // Membersihkan buffer setelah membaca posisi
                cout << fixed << setprecision(3) << hargaProduk << endl; // Menggunakan manipulator untuk menampilkan tiga digit nol di belakang koma
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
                cin.ignore(); // Membersihkan buffer input sebelum getline
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