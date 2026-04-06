#include <iostream>
using namespace std;

struct Orang {
    string nama;
    string alamat;
    int umur;
};

int main(){
    Orang mhs;
    //mengisi data
    cout << "Mengisi data" << endl;
    cout << "Nama: ";
    cin >> mhs.nama;
    cout << "Alamat: ";
    cin >> mhs.alamat;
    cout << "Umur: ";
    cin >> mhs.umur;
    //tampilkan 
    cout << "Menampilkan Data" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Alamat: " << mhs.alamat << endl;
    cout << "Umur: " << mhs.umur << endl;
     
}