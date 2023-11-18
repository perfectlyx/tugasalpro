#include <iostream>
using namespace std;

struct Time{
    int hour, minute,scnds;
};

struct mahasiswa{
    string nim,nama;
};

void menu1(){
    Time entre,exit,parking;
    int parkingPrice = 3000;
    cout << "Input Entre Time (HH/MM/SS) : ";
    cin >> entre.hour >> entre.minute >> entre.scnds;

    cout << "Input Exit Time (HH/MM/SS) : ";
    cin >> exit.hour >> exit.minute >> exit.scnds;

    parking.hour= exit.hour - entre.hour;
    parking.minute = exit.minute - entre.minute;
    if (parking.minute < 0) {
        parking.minute += 60;
        parking.hour--;
    }
    
    parking.scnds = exit.scnds - entre.scnds;
    if (parking.scnds < 0) {
        parking.scnds += 60;
        parking.scnds--;
    }
    
    if (parking.hour >= 1){
        parkingPrice +=(parking.hour-1)*3000;
        if (parking.minute > 0 || parking.scnds > 0){
            parkingPrice+=3000;
        }
    }
    cout << "Entre Time : " << entre.hour << ":" << entre.minute << ":" << entre.scnds << endl;
    cout << "Exit Time : " << exit.hour << ":" << exit.minute << ":" << exit.scnds << endl;
    cout << "Parking Time : " << exit.hour - entre.hour << ":" << exit.minute - entre.minute << ":" << exit.scnds - entre.scnds << endl;
    cout << endl;
    cout << "Your Parking Fee : " << parkingPrice << " Rupiah " << endl;
    cout << endl;
}

void menu2(){
    int n;
    int *ptr_n=&n;
    cout << "Masukkan Jumlah Mahasiswa: "; cin >> n;
    mahasiswa data[n];
    cout << endl;

    for(int i=0;i<n;i++){
        cout << "Mahasiswa  ke- " << i+1 << endl;
        cout << "NIM [" << 0 << "] : "; cin >> data[i].nim;
        cout << "NAMA[" << 1 << "] : "; cin >> data[i].nama;
        cout << endl;
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(data[j].nim < data[j+1].nim){
                mahasiswa temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

	 for(int i =0;i<n;i++){
        cout << "NIM :" << data[i].nim;
        cout << "\tNAMA :" << data[i].nama;
        cout << endl;
    }
    cout  << endl;
	cout << endl;
	cout << "Address Jumlah Inputan Mahasiswa : " << ptr_n << endl;
}

void menu3()
{
    cout << " Terima kasih" << endl;
    exit(0);
}

int main()
{
    int pilih;
    int *ptrpil = &pilih;
    bool menu = true;
    while (menu){
        cout << " Main Menu" << endl;
        cout << " 1. Parking Fee" << endl;
        cout << " 2. Mengurutkan Nim Nama Mahasiswa" << endl;
        cout << " 3. Keluar" << endl;
        cout << endl;

        cout << " Masukkan pilihan: ";
        cin >> *ptrpil;
        cout << endl;
        switch (*ptrpil)
        {
        case 1:
            menu1();
            break;
        case 2:
            menu2();
            break;
        case 3:
            menu3();
            break;
        default:
            cout << " Pilihan tidak tersedia" << endl;
            break;
        }
    }
    return 0;
}
 
// Nama : Ahmad Fikri Assidiq
// NIM 	: 3337230091