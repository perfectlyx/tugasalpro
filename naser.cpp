#include <iostream>

using namespace std;

//int main(){
  //  int i=5;
   // if(i%2==0){
    //    cout<<"i = "<<i<< " adalah bilangan genap";
    //}
    //else {
     //   cout<<"i = "<< i <<" adalah bilangan ganjil";
    //}
    //return 0;
//}

//int main(){
   // int n,d;
    //cout<<"masukkan bilangan pertama: ";cin>>n;
    //cout<<"masukkan bilangan kedua: ";cin>>d;
    //if(n%d==0){
      //  cout<< n <<" habis dibagi oleh "<<d<<endl;
    //}
   // return 0;
//}

//int main(){
    //int gol = 5;
    //if(gol==1){
     //   cout<<"gaji = 100";
    //}
    
    //else if(gol==2){
     //   cout<<" gaji = 200";
    //}
    //else if(gol==3){
      //  cout<<"gaji = 300";
        
    //}
    //else{
      //  cout<<" golongan salah";

    //}
    //return 0;

//}

int main(){
    int gol = 2;
    switch (gol){
      //  case 1 : cout<<" gaji = 100";
        //break;
      //  case 2 : cout<<"gaji = 200";
       // break;
       // case 3 : cout<<"gaji + 300";
       // break;s
       // default : cout<<"golongan salah";
       // break;
    //    return 0;
    //}
//}

//int main(){
  //  int a,b,c,max;

   // cout<<"masukkan 3 buah bilangan: ";

    //cin>> a >> b >> c;

   // if (a>b)
   // if(a>c) max = a;
  //  else max = c;

    else 
    if (b>c) max = b ;
    else max = c;
    cout<<"maksimum adalah :"<<max<<endl;
    return 0; 
}

int main(){
    int a,b,c,min;

    cout<<"masukkan 3 buah bilangan: ";

    cin>> a >> b >> c;

    if (a<b)
    if(a<c) min = a;
    else min = c;

    else 
    if (b<c) min = b ;
    else min = c;
    cout<<"minimum adalah :"<<min<<endl;
    return 0; 
}

int main(){
    int a,b,c;
    cout<<"masukkan 3 buah angka: ";
    cin >> a >> b >> c;
    cout<<"nilai tertinngi adalah: ";
    if(a>=b && a>=c) cout<< a <<endl;
    if(b>=a && b>=c) cout<< b <<endl;
    if(c>=a && c>=b) cout<< c <<endl;
    
}

int main(){
    int a,b,c;
    cout<<"masukkan 3 buah angka: ";
    cin >> a >> b >> c;
    cout<<"nilai terendah adalah: ";
    if(a<=b && a<=c) cout<< a <<endl;
    if(b<=a && b<=c) cout<< b <<endl;
    if(c<=a && c<=b) cout<< c <<endl;
    
}

int main(){
    char jawab;
    cout<<"yakin (y/t): ";
    cin>> jawab;
    if (jawab=='Y'|| jawab=='y')
    cout<<"OK, anda yakin"<<endl;
    else
    cout<<"Maaf, anda kurang yakin.."<<endl;
}

int main(){
    char status;
    int grade;
    cout<<"masukkan nilai: ";
    cin>> grade;
    status = (grade >= 60) ? 'L' : 'G';
    cout<< status <<endl;
} 

int main(){
    char status;
    string status_2;
    int grade;
    cout<<"masukkan nilai: ";
    cin>> grade;
    status_2 = (grade >= 60) ? "lulus" : "gak lulus";
    cout<< status_2 <<endl;
} 

int main(){
    int m=26,n=82;
    int min= m < n ? m:n;
    cout<<"bilangan terkecil adalah:  "<< min<<endl;
}

int main(){
    int m=1000000,n=123;
    int max= m > n ? m:n;
    cout<<"bilangan terbesar adalah:  "<< max<<endl;
}



    int main() {
	string nama;
	string mata_kuliah;
	string hasil;
	string var;
	string var2;
	string nim;
	int nilai;

	char lastDigit = nim[nim.length() - 1];
	int lastDigitInt = atoi(&lastDigit);


	cout << "Masukkan nama : " << endl;
	cin >> nama;
	cout << "Masukkan nim: " << endl;
	cin >> nim;
	cout << "Masukkan NIlai: " << endl;
	cin >> nilai;
	cout << "Masukkan mata kuliah : " << endl;
	cin >> mata_kuliah;


	if (nilai >= 90) {
		hasil = " A ";
	}
	else if (nilai >= 80 && nilai < 90) {
		hasil = " A- ";
	}
	else if (nilai >= 75 && nilai < 80) {
		hasil = " B+ ";
	}
	else if (nilai >= 74 && nilai < 75) {
		hasil = " B- ";
	}
	else if (nilai >= 60 && nilai < 65) {
		hasil = " C ";
	}
	else if (nilai >= 55 && nilai < 60) {
		hasil = " D ";
	}
	else if (nilai < 55) {
		hasil = " D ";
	}

	if (lastDigitInt % 2 == 0) {
		var = " (genap) ";
	}
	else if (lastDigitInt % 2 == 1) {
		var = " (ganjil) ";
	}

	if (mata_kuliah == "alpro") {
		var2 = " Wajib ";
	} else {
		var2 = " tidak wajib";
	}

	cout << nama << endl;
	cout << nim << var << endl;
	cout << hasil << endl;
	cout << var2 << endl;
return 0;



}

