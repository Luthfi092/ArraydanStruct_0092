#include <iostream>
using namespace std;

struct detailAlamat {
    string desa;
    string kota;

};

struct Orang {
    string nama;
    detailAlamat alamat;
    int umur;
};

int main(){
    Orang mhs;
    //mengisi data
    cout << "Mengisi data" << endl;
    cout << "Nama: ";
    cin >> mhs.nama;
    cout << "Alamat: ";
    cin >> mhs.alamat.desa;
    cout << "Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur: ";
    cin >> mhs.umur;
    //tampilkan 
    cout << "Menampilkan Data" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Desa: " << mhs.alamat.desa << endl;
    cout << "Kota: " << mhs.alamat.kota << endl;
    cout << "Umur: " << mhs.umur << endl;
     
}