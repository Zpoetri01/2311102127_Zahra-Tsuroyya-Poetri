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
