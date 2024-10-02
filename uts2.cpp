#include <iostream>
using namespace std;

int main(){
    int angka; 

    cout << "Masukkan Angka: ";
    cin >> angka;

    for (int i = 1; i <= angka; i++){
        for (int j = 0; j -i; j++){
            cout << "";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}