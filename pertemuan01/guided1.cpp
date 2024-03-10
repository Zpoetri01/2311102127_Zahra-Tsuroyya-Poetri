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
            cout << "Result: " << fixed << setprecision(2) << num1_127 / num2_127; // program akan menampilkan hasil dari pembagian num1 & num2
   dengan hasil apabila bilangan desimal tetap akan ditampilkan dengan dua angka dibelakang koma     
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
    return 0; mengembalikan nilai nol 
}
