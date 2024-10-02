#include <iostream>
using namespace std;

void ganjilgenap(int batas){
    cout << "Bilangan ganjil dari 1 ke " << batas << endl;
    for (int i = 1; i <= batas; i++){
        if ( i % 2 )
            cout << i << " \n";
        }
    cout << endl;
    cout << "Bilangan genap dari 1 ke " << batas << endl;
    for (int i = 0; i <= batas; i++){
        if ( i % 2 == 0)
            cout << i << " \n";
        }
    cout << endl;
}

int main(){
    int angka;
    cout << "Masukkan Angka: ";
    cin >> angka;
    ganjilgenap(angka);
    for (int i = 0; i <= angka; i++)
    return 0;
}