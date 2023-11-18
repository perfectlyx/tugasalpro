#include <iostream>
#include <cmath>

using namespace std;

void menu_1()
{
	float x1, x2, y1, y2, hasil;
    float *ptr_x1 = &x1, *ptr_x2 = &x2, *ptr_y1 = &y1, *ptr_y2 = &y2, *ptrhasil = &hasil;

	cout << "Menghitung Koordinat Kartesius" << endl << endl;
    cout << "Masukkan nilai x1: ";
    cin >> *ptr_x1;
    cout << "Masukkan nilai y1: ";
    cin >> *ptr_y1;
    cout << "Masukkan nilai x2: ";
    cin >> *ptr_x2;
    cout << "Masukkan nilai y2: ";
    cin >> *ptr_y2;

    *ptrhasil = sqrt(pow((*ptr_x2 - *ptr_x1), 2) + pow((*ptr_y2 - *ptr_y1), 2));
    
    cout << "Jarak antara dua titik adalah: " << *ptrhasil << endl << endl;
    
	cout << "Address Jarak : " << &hasil << endl;
    cout << "Address x1 : " << &x1 << endl;
	cout << "Address y1 : " << &y1 << endl;
	cout << "Address x2 : " << &x2 << endl;
	cout << "Address y2 : " << &y2 << endl << endl;


}

void menu_2(){
    int n;
    cout << "Masukkan deret : ";cin >> n;
    int *ptr_n = &n;
    unsigned long long fact = 1;
    for (int i = *ptr_n; i>=1; i--)
    {
        if (i % 2 == 0)
        {
            fact = fact * i;
            cout << i << "*";
        }
    }
    cout << " : " << fact << endl;
    cout << endl;
    
	cout << "Address Deret : " << &n << endl << endl;
}

void menu_3(){
    int n;
    cout << "Masukkan jumlah data :  "; cin >> n;
    char data[n];

    for(int i=0;i<n;i++){
        cout << "Masukkan data [" << i+1 << "] : "; cin >> data[i];
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            char *ptr_data= &data[j];
            char *ptr_data_next= &data[j+1];

            if(*ptr_data> *ptr_data_next){
                char temp = *ptr_data;
                *ptr_data= *ptr_data_next;
                *ptr_data_next = temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        int p=1;
        for(int j=i+1;j<n;j++){
            if(data[i]== data[j]){
                p++;
            }
        }
        if(data[i]==data[i-1]){
            continue;

        }
        cout << data[i]  << " : "<< p << endl;
    }
    cout << "Address Inputan data huruf " << &n << endl;
    cout << endl;
}


void menu_4(){
    int n;
    
    cout << "Masukkan jumlah mahasisiwa : ";cin >> n;
    int  nim[n];
    string nama[n];

    cout << endl;

    for(int i=0;i<n;i++){
        cout << "Mahasiswa  ke- " << i+1 << endl;;
        cout << "NIM [" << 0 << "] : "; cin >> nim[i];
        cout << "NAMA[" << 1 << "] : "; cin >> nama[i];
        cout << endl;
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int *ptr_nim = &nim[j];
            int *ptr_nim_next = &nim[j+1];

            string *ptr_nama = &nama[j];
            string *ptr_nama_next = &nama[j+1];

            if(*ptr_nim< *ptr_nim_next){

                int temp = *ptr_nim;
                *ptr_nim= *ptr_nim_next;
                *ptr_nim_next = temp;

                string tempstr =  *ptr_nama;
                *ptr_nama = *ptr_nama_next;
                *ptr_nama_next= tempstr;
            }
        }
    }

	 for(int i =0;i<n;i++){
        cout << "NIM :" << nim[i];
        cout << "\tNAMA :" << nama[i];
        cout << endl;
    }
    cout  << endl;
	cout << endl;
	cout << "Address Jumlah Inputan Mahasiswa : " << &n << endl;
	
}

void menu_5()
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
        cout << " 1. Menghitung koordinat kartesius" << endl;
        cout << " 2. Menghitung faktorial bilangan genap" << endl;
        cout << " 3. Menghitung jumlah huruf yang sama" << endl;
        cout << " 4. Mengurutkan nim mahasiswa" << endl;
        cout << " 5. Keluar" << endl;
        cout << endl;

        cout << " Masukkan pilihan: ";
        cin >> *ptrpil;
        cout << endl;
        switch (*ptrpil)
        {
        case 1:
            menu_1();
            break;
        case 2:
            menu_2();
            break;
        case 3:
            menu_3();
            break;
        case 4:
            menu_4();
            break;
        case 5:
            menu_5();
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