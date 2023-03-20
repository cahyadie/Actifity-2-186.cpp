#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    do {
        cout << "\n\n ===============";
        cout << "\nM E N U";
        cout << "\n ===============";
        cout << "\n 1. luas persegi panjang";
        cout << "\n 2. luas lingkaran";
        cout << "\n 3. luas segitiga";
        cout << "\n 4. keluar";
        cout << "\n pilihan (1/2/3/4) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "masukan pnajang = ";
            cin >> panjang;
            cout << "masukan lebar = ";
            cin >> lebar;
            cout << "\n luas persegi panjang = " << persegipanjang(panjang, lebar);
            break;
        case 2:
            cout << "masukan jari-jari = ";
            cin >> jejari;
            cout << "\n luas lingkaran = " << lingkaran(jejari);
            break;
        case 3:
            cout << "masukan alas = ";
            cin >> alas;
            cout << "masukan tinggi = ";
            cin >> tinggi;
            cout << "\n luas segitiga = " << segitiga(alas, tinggi);
            break;
        case 4:
            break;
        default:
            cout << "pilihan salah !!";
            break;
        }
    } while (pilihan != 4);
}