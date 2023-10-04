#include <iostream>
using namespace std;

int main() {
    int kodeSusu;
    int jumlahPembelian;
    char ukuran;
    float hargaPerUnit = 0.0;
    float totalHarga = 0.0;

    cout << "Masukkan Kode Susu (1-3) : ";
    cin >> kodeSusu;

    switch (kodeSusu) {
        case 1:
            cout << "Masukkan Jumlah Pembelian : ";
            cin >> jumlahPembelian;

            cout << "Masukkan Ukuran (B/S/K) : ";
            cin >> ukuran;

            switch (ukuran) {
                case 'B':
                    hargaPerUnit = 8500.0;
                    break;
                case 'S':
                    hargaPerUnit = 4000.0;
                    break;
                case 'K':
                    hargaPerUnit = 2100.0;
                    break;
                default:
                    cout << "Ukuran tidak valid." << endl;
                    return 1;
            }

            totalHarga = hargaPerUnit * jumlahPembelian;

            cout << "Susu Indomilk" << endl;
            cout << "Harga Susu Rp. " << hargaPerUnit << endl;
            cout << "Jumlah Pembelian  Rp. " << totalHarga << endl;
            break;
        case 2:
            // Implementasi untuk kode susu 2
            cout << "Masukkan Jumlah Pembelian : ";
            cin >> jumlahPembelian;
            
            cout << "Masukkan Ukuran (B/S/K) : ";
            cin >> ukuran;

            switch (ukuran) {
                case 'B':
                    hargaPerUnit = 10000.0;
                    break;
                case 'S':
                    hargaPerUnit = 4250.0;
                    break;
                case 'K':
                    hargaPerUnit = 2025.0;
                    break;
                default:
                    cout << "Ukuran tidak valid." << endl;
                    return 1;
            }

            totalHarga = hargaPerUnit * jumlahPembelian;

            cout << "Susu Dancow" << endl;
            cout << "Harga Susu Rp. " << hargaPerUnit << endl;
            cout << "Jumlah Pembelian  Rp. " << totalHarga << endl;
            break;
        case 3:
            // Implementasi untuk kode susu 3
          cout << "Masukkan Jumlah Pembelian : ";
          cin >> jumlahPembelian;
            
            cout << "Masukkan Ukuran (B/S/K) : ";
            cin >> ukuran;

            switch (ukuran) {
                case 'B':
                    hargaPerUnit = 17000.0;
                    break;
                case 'S':
                    hargaPerUnit = 14500.0;
                    break;
                case 'K':
                    hargaPerUnit = 8300.0;
                    break;
                default:
                    cout << "Ukuran tidak valid." << endl;
                    return 1;
            }

            totalHarga = hargaPerUnit * jumlahPembelian;

            cout << "Susu Sustacal" << endl;
            cout << "Harga Susu Rp. " << hargaPerUnit << endl;
            cout << "Jumlah Pembelian  Rp. " << totalHarga << endl;
            break;
        default:
            cout << "Kode susu tidak valid." << endl;
            return 1;
    }

    return 0;
}
