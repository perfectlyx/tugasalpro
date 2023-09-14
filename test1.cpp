#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    double a, b, c, x;

    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    cout << "input c: ";
    cin >> c;

    x = ((-b) +- sqrt(pow(b,2)-4*a*c))/ 2*a;
    cout << "result: " << x;
    


   /* const double phi = 3.14;
    float jari_jari, luas, keliling;
    jari_jari = 10;
    
    luas = phi * pow(jari_jari, 2);
    keliling = 2 * phi * jari_jari;

    cout << "luas: " << luas << endl;
    cout << "keliling: " << keliling;
    */
    /*float p,le,l;

    cout << " input p: ";
    cin >> p;
    cout << "input le: ";
    cin >> le;

    l = 0.5 * p * le;
    cout << "hasil l : " << l;
    */


// TUGAS
    cout << "bilangan minimum int: " << INT_MIN << endl;
    cout << "bilangan maximum int: " << INT_MAX << endl;
    cout << "bilangan tipe int: " <<sizeof(int)<<endl;
    
    cout << "bilangan minimum char: " << CHAR_MIN << endl;
    cout << "bilangan maximum char: " << CHAR_MAX << endl;
    cout << "bilangan tipe char: " <<sizeof(char)<<endl;

    //cout << "bilangan minimum: " << UCHAR_MIN << endl;
    cout << "bilangan maximum uchar: " << UCHAR_MAX << endl;
    cout << "bilangan tipe uchar: " <<sizeof(unsigned char)<<endl;

    cout << "bilangan minimum shrt: " << SHRT_MIN << endl;
    cout << "bilangan maximum shrt: " << SHRT_MAX << endl;
    cout << "bilangan tipe short: " <<sizeof(short)<<endl;

    //cout << "bilangan minimum: " << USHRT_MIN << endl;
    cout << "bilangan maximum ushrt: " << USHRT_MAX << endl;
    cout << "bilangan tipe ushrt: " <<sizeof(unsigned short)<<endl;

    //cout << "bilangan minimum: " << UINT_MIN << endl;
    cout << "bilangan maximum: " << UINT_MAX << endl;
     cout << "bilangan tipe uint: " <<sizeof(unsigned int)<<endl;

    cout << "bilangan minimum long: " << LONG_MIN << endl;
    cout << "bilangan maximum long: " << LONG_MAX << endl;
    cout << "bilangan tipe long: " <<sizeof(long)<<endl;

    //cout << "bilangan minimum: " << ULONG_MIN << endl;
    cout << "bilangan maximum ulong: " << ULONG_MAX << endl;
    cout << "bilangan tipe ulong: " <<sizeof(unsigned long)<<endl;

    cout << "bilangan minimum double: " << numeric_limits<double>::min() << endl;
    cout << "bilangan maximum double: " << numeric_limits<double>::max() << endl;

    cout << "bilangan minimum float: " << numeric_limits<float>::min() << endl;
    cout << "bilangan maximum float: " << numeric_limits<float>::max() << endl;

}