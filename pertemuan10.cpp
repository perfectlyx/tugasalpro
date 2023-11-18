#include <iostream>

using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int nilai;
};

int main(){
    float rata;
    int jumlahData;  
    cout << "Masukkan jumlah data: "; cin >> jumlahData;
    mahasiswa data[jumlahData];

    for(int i=0;i<jumlahData;i++){
        cout << "Data Mahasiswa ke-"<<i+1 << endl;
        cout << "Masukkan Nim: "; cin>> data[i].nim;
        cout << "Masukkan Nama: "; cin>> data[i].nama;
        cout << "Masukkan Jurusan: "; cin>> data[i].jurusan;
        cout << "Masukkan Nilai: "; cin>> data[i].nilai;
    }
    cout << endl;

    for(int i=0;i<jumlahData;i++){
        cout << "Tampilan Data Mahasiswa ke-"<<i+1 << endl;
        cout << "Nim: " << data[i].nim << endl;
        cout << "Nama: " << data[i].nama << endl;
        cout << "Jurusan: " << data[i].jurusan << endl;
        cout << "Nilai: " << data[i].nilai << endl;


        rata = rata+data[i].nilai;
    }
    cout <<"Rata rata adalah " << rata/jumlahData << endl;

}