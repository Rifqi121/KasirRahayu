#include <iostream>

using namespace std;

int menuKasir() {
    int pilih[10];
    int banyak[10];
    char respon;
    int total[10];
    int jumlah = 0;

    for (int i = 0; i <= 10; i++) {
        cout << "===============DAFTAR BARANG===============\n";
        cout << "1. Beras/kg \t\t Rp 12.000\n";
        cout << "2. Mie/dus \t\t Rp 90.000\n";
        cout << "3. Gula/kg \t Rp 15.000\n";
        cout << "4. Telur/kg \t Rp 26.000\n";
        cout << "5. Minyak/liter \t Rp 15.000\n";
        cout << "6. Susu/kg \t\t Rp 12.000\n";
        cout << "7. Air Botol/dus \t\t Rp 90.000\n";
        cout << "8. Kecap/250g \t Rp 15.000\n";
        cout << "9. Saos/250g \t Rp 26.000\n";
        cout << "10. Garam/250gr \t Rp 15.000\n";
        cout << "===========================================\n";
        cout << "Pilih Nomor Barang\t: ";
        cin >> pilih[i];
        switch (pilih[i]) //switch case untuk memilih menu
        {
            case 1: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i]; //input banyak barang yang akan dibeli
                total[i] = (12 * banyak[i]); //rumus harga total untuk barang ke[i]
                break;
            }
            case 2: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (90 * banyak[i]);
                break;
            }
            case 3: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (15 * banyak[i]);
                break;
            }
            case 4: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (26 * banyak[i]);
                break;
            }
            case 5: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (15 * banyak[i]);
                break;
            }
            case 6: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i]; //input banyak barang yang akan dibeli
                total[i] = (12 * banyak[i]); //rumus harga total untuk barang ke[i]
                break;
            }
            case 7: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (90 * banyak[i]);
                break;
            }
            case 8: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (15 * banyak[i]);
                break;
            }
            case 9: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (26 * banyak[i]);
                break;
            }
            case 10: {
                cout << "Berapa banyak\t\t: ";
                cin >> banyak[i];
                total[i] = (15 * banyak[i]);
                break;
            }
            default: {
                system("cls");
                cout << "Program Berhenti. Masukkan input yang benar!\n";
                system("pause");
                return 0;
            }
        }
        jumlah = jumlah + total[i];

        cout << "Apakah anda ingin membeli lagi? (y/n)";
        cin >> respon;

        //pengkondisian apabila sudah 5 kali memilih barang
        if (i == 10 && respon == 'y') {
            system("cls");
            cout << "Telah Mencapai Batas Maksium\n";
            cout << "Tekan tombol apa saja untuk melihat struk\n";
            system("pause");
            continue;
        } else if (i == 10 && respon == 'n') {
            system("cls");
            cout << "Tekan tombol apa saja untuk melihat struk\n";
            system("pause");
            continue;
        }

        //pengkondisian untuk beli lagi atau tidak
        if (respon == 'n') {
            system("cls");
            cout << "Tekan tombol apa saja untuk melihat struk\n";
            system("pause");
            break;
        } else if (respon == 'y') {
            system("CLS");
            continue;
        } else {
            system("CLS");
            cout << "Masukkan Input Yang Benar!!!\n";
            system("pause");
            return 0;
        }

    }
    system("cls");
    cout << "============================================\n";
    cout << "\t\tRINCIAN PEMBAYARAN\t\t\n";
    cout << "============================================\n";
    cout << "Barang\t\tJumlah\t\tTotal" << endl;
    for (int i = 0; i <= 10; i++) {
        switch (pilih[i]) {
            case 1: {
                cout << "Beras\t\t" << banyak[i] << " kg\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 2: {
                cout << "Mie\t\t" << banyak[i] << " dus\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 3: {
                cout << "Daging Ayam\t" << banyak[i] << " kg\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 4: {
                cout << "Sayur\t\t" << banyak[i] << " bungkus\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 5: {
                cout << "Minyak\t\t" << banyak[i] << " liter\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 6: {
                cout << "Beras\t\t" << banyak[i] << " kg\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 7: {
                cout << "Mie\t\t" << banyak[i] << " dus\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 8: {
                cout << "Daging Ayam\t" << banyak[i] << " kg\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 9: {
                cout << "Sayur\t\t" << banyak[i] << " bungkus\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            case 10: {
                cout << "Minyak\t\t" << banyak[i] << " liter\t\t" << "Rp. " << total[i] * 1000 << endl;
                break;
            }
            default: {
                break;
            }
        }
    }
    int tunai;
    int sisa;
    cout << "============================================\n";
    cout << "TOTAL KESELURUHAN\t\tRp. " << jumlah * 1000 << endl;
    cout << "============================================\n";
    cout << "UANG TUNAI\t\t\tRp. ";
    cin >> tunai;
    do {
        cout << "Uang tunai yang anda inputkan kurang" << endl;
        cout << "Mohon inputkan sesuai nominal total pembelian atau lebih";
        cout << endl;
        cout << "UANG TUNAI\t\t\tRp. ";
        cin >> tunai;
    } while (tunai <= jumlah * 1000);

    sisa = tunai - jumlah * 1000;
    cout << "KEMBALIAN\t\t\tRp. " << sisa << endl;
    system("pause");
}