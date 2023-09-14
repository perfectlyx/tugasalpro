#include <iostream>
using namespace std;
   
int main () {
    //cabang 1
     /*int a;

    cout << "Input nilai: ";
    cin >> a;
    
    if (a >= 90) {
        cout << "Nilai angka : A" << endl;
    }
    if (a < 90) {
        cout << "Nilai Angka : B" << endl;
    }
    else {
        cout << "Maaf anda tidak lulus" << endl;
    }*/
    

    //cabang 2
    /*int a;
    cout << "Input Nilai: ";
    cin >> a;
    
    if (a%2==0) {
        cout << "Nilai : " << a << " adalah bilangan genap" << endl;
    }
    else {
        cout << "Nilai : " << a << " adalah bilangan ganjil" << endl;
    }*/

    //cabang 3
    /*int gol;
    cout << "Masukkan Gol: " ;
    cin >> gol;

    switch (gol) {
        case 1 :
        cout << "GAJI = 100";
        break;
        case 2 :
        cout << "GAJI = 200";
        break;
        case 3 :
        cout << "GAJI = 300";
        break;
        default :
        cout << "Golongan Salah";
    }*/

    //cabang 4
    /*int a,b,c,max;
    cout << "Masukkan A: ";
    cin >> a;
    cout << "Masukkan B: ";
    cin >> b;
    cout << "Masukkan C: ";
    cin >> c;

    if (a > b)
    if (a > c) max =a; // a>b and a>C
    else max = c; // c>= a>b

    else
    if (b > c) max = b; // b>=a and b>c
    else max = c; // c >= b>= a
    
    cout << "Maksimum adalah: " << max << endl;
    */

   //cabang 5 Minimum
   /*int a,b,c,min;
    cout << "Masukkan 3 buah bilangan: ";
    cin >> a >> b >> c;

    if (a < b)
    if (a < c) min =a; // a>b and a>C
    else min = c; // c>= a>b

    else
    if (b < c) min = b; // b>=a and b>c
    else min = c; // c >= b>= a
    
    cout << "Minimum adalah: " << min << endl;
    */

   //cabang 6
    /*int a,b,c;
    cout << "Masukkan A: ";
    cin >> a;
    cout << "Masukkan B: ";
    cin >> b;
    cout << "Masukkan C: ";
    cin >> c;

    cout << "Nilai tertinggi adalah: ";
    if(a>=b && a>=c) cout << a << endl;
    if(b>=a && b>=c) cout << b << endl;
    if(c>=a && c>=b) cout << c << endl;
*/

    //cabang 7
    /*char jawab;
    cout << "Yakin (y/t) : ";
    cin >> jawab;
    if (jawab == 'Y' || jawab == 'y')
    cout << "Ok anda yakin" << endl;
    else
    cout << "Maaf, anda tidak yakin" << endl;
    */

   //cabang 8
    /*string jawab;
    cout << "Yakin (y/t) : ";
    cin >> jawab;
    if (jawab == "Y" || jawab == "y")
    cout << "Ok anda yakin" << endl;
    else
    cout << "Maaf, anda tidak yakin" << endl;
    */

   //cabang 9
   /*char status;
   int grade;
   
   cout << "Masukkan Grade : ";
   cin >> grade;
   //mendapatkan status pelajar
   status = (grade >= 60) ? 'L': 'G';   // untuk ? itu tanda IF, : tanda ELSE
   //print status
   cout << status << endl;
    */
   
   //cabang 10
   /*string status;
   int grade;
   
   cout << "Masukkan Grade : ";
   cin >> grade;
   //mendapatkan status pelajar
   status = (grade >= 60) ? "L": "G";   // untuk ? itu tanda IF, : tanda ELSE
   //print status
   cout << status << endl;
    */

   //cabang 11
   /*int m = 26, n = 82;
   int min = m < n ? m:n;
   cout << "Bilangan terkecil adalah : " << min << endl;
   */

  //cabang 12
   /*int m = 100, n = 4;
   int max = m > n ? m:n;
   cout << "Bilangan terbesar adalah : " << max << endl;
    */

   //cabang 13
   int uts,uas,tugas;
   float nilai_akhir;
   int hasil_nim;
   string nama,nim;

   cout << "Masukkan NIM: ";
   cin >> nim;
   cout << "Masukkan Nama: ";
   cin >> nama;
   cout << "Masukkan nilai UTS: ";
   cin >> uts;
   cout << "Masukkan nilai UAS: ";
   cin >> uas;
   cout << "Masukkan nilai tugas: ";
   cin >> tugas;

   cout << "Menghitung Data Mahasiswa" << endl;
   cout << "NIM : " << nim << endl;
   cout << "Nama: " << nama << endl;
   //mengambil digit nim akhir
    if (hasil_nim = (int) (hasil_nim - '0') % 2==0) {
        cout << "Nim Genap" << endl;
    }
    else {
        cout << "Nim Ganjil" << endl;
    }
   //program nilai uts uas tugas
    cout << "Nilai minimum adalah: ";
    if(uts<uas && uts<=tugas) cout << uts << endl;
    if(uas<=uts && uas<=tugas) cout << uas << endl;
    if(tugas<=uts && tugas<=uas) cout << tugas << endl;

    nilai_akhir = (uts + uas + tugas) / 3;
    cout << "nilai akhir: " << nilai_akhir << endl;
    
   //program rata" nilai
   if (nilai_akhir >= 90) {
        cout << "Nilai angka : A" << endl;
    }
    else if (nilai_akhir >= 80) {
        cout << "Nilai Angka : A-" << endl;
    }
    else if (nilai_akhir >= 75) {
        cout << "Nilai Angka : B+" << endl;
    }
    else if (nilai_akhir >= 70) {
        cout << "Nilai Angka : B" << endl;
    }
    else if (nilai_akhir >= 65) {
        cout << "Nilai Angka : C+" << endl;
    }
    else if (nilai_akhir >= 55) {
        cout << "Nilai Angka : C" << endl;
    }
    else if (nilai_akhir >= 55) {
        cout << "Nilai Angka : D" << endl;
    }
    else if (nilai_akhir < 55) {
        cout << "Nilai Angka : E" << endl;
    }

    return 0;
}


