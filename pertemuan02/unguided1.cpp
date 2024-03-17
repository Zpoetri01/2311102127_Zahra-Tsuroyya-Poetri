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
