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
