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
    struct Mahasiswa_127_zahra mhs1_127, mhs2_127; // mendeklarasikan dua variabel Mahasiswa_127_zahra dengan nama mhs1_127 dan mhs2_127
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
