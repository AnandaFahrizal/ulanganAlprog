#include <iostream>
using namespace std;

char hitungHurufMutu(double nilaiAkhir) {
    if (nilaiAkhir >= 85 && nilaiAkhir < 100)
        return 'A';
    else if (nilaiAkhir >= 80 && nilaiAkhir < 85)
        return 'B';
    else if (nilaiAkhir >= 75 && nilaiAkhir < 80)
        return 'C';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 75)
        return 'D';
    else
        return 'E';
}

int main(){
    int npm;
    string nama;
    double absen;
    double tugas;
    double uts;
    double uas;
    double nilaiAkhir;
    char hurufMutu;

    cout << "Input" << endl;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan NIP: ";
    cin >> npm;
    cout << "Masukkan Nilai Absen(0-100): ";
    cin >> absen;
    cout << "Masukkan Nilai Tugas(0-100): ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS(0-100): ";
    cin >> uts;
    cout << "Masukkan Nilai UAS(0-100): ";
    cin >> uas;

    nilaiAkhir = (absen * 0.10) + (tugas * 0.20) + (uts * 0.30) + (uas * 0.40);

    hurufMutu = hitungHurufMutu(nilaiAkhir);

    cout << endl;
    cout << "Output" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << absen << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
