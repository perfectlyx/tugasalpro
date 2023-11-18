#include <iostream>
using namespace std;

struct mahasiswa{
    string nim,nama;
};

int main(){
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
            if(data[j].nim > data[j+1].nim){
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