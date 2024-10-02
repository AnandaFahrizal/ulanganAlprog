#include <iostream>
using namespace std;

double berat;
double tinggi;
double imt;

int main(){
    int imt_2 = static_cast<int>(imt);
    int berat_ideal = 1;

    cout << "Masukkan berat badan(kg): ";
    cin >> berat;
    
    cout << "Masukkan tinggi badan(m): ";
    cin >> tinggi;

    imt = berat / (tinggi * tinggi);

    cout << "Imt anda adalah " << imt << "Kg" << endl;

    if (imt < 18.4){
        cout << "Berat badan kurang." << endl;
    } else if (imt >= 18.5 && imt < 24.9 ){
        cout << "Berat badan ideal." << endl;
    } else if (imt >= 25 && imt < 29.9 ){
        cout << "Berat badan lebih." << endl;
    } else if (imt >= 30 && imt < 39.9 ){
        cout << "Gemuk." << endl;
    } else{
        cout << "Sangat gemuk." << endl;
    }

    switch (berat_ideal){
        case 1:
            cout << endl << "Indeks Massa tubuh yang ideal" << endl;
            cout << "Kurang dari 19: Berat badan kurang." << endl;
            cout << "19-25: Berat badan ideal." << endl;
            cout << "25-30: Berat badan lebih." << endl;
            cout << "30-40: Gemuk." << endl;
            cout << "Diatas 40: Sangat gemuk." << endl;
            break;
    }
    return 0;
}
