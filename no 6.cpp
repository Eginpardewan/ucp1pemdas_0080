#include <iostream>
using namespace std;

int sTangerang, sBekasi;
string status;

void input()
{
    cout << "Masukan status = ";
    cin >> status;
    cout << "Masukan Status Tangerang = ";
    cin >> sTangerang;
    cout << "Masukan status Bekasi = ";
    cin >> sBekasi;
}

int statusKota() { 
    const char sTangerang = 75, sBekasi = 45;
    return (sTangerang * sTangerang) + (sBekasi * sBekasi);
}

void display() {
    cout << "Status = " << status << endl;
    cout << "Status Tangerang = " << sTangerang << endl;
    cout << "Status Bekasi = " << sBekasi << endl;
    
}

int main() {
    srand(time(0));

    string nama;
    char pilihan;

    do {
        cout << "Masukan nama =";
        cin >> nama;

        cout << "Apakah anda ingin mengulang lagi? (y/n)";
        cin >> pilihan;

    } while (pilihan <= 'y' || pilihan == 'y');
}