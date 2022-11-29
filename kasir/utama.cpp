#include <iostream>
#include "menu.cpp"
#include "barang.cpp"

using namespace std;

void menumain(){
    system("cls");
    int pil;
    cout<<"===================================="<<endl;
    cout <<"Selamat Berbelanja di Sembako Rahayu"<<endl;
    cout<<"===================================="<<endl;
    cout <<"\n PILIHAN MENU \n"<<endl;
    cout<<"===================================="<<endl;
    cout <<"1. Kasir "<<endl;
    cout <<"2. Stok Barang "<<endl;
    cout <<"3. Exit "<<endl;
    cout<<"===================================="<<endl;
    cout <<"Pilih Nomor 1/2/3: ";
    cin>>pil;
    switch (pil)
    {
    case 1:
        menuKasir();
        break;
    case 2:
        barang();
        break;
    case 3:
        cout<<"Tampilan Exit"<<endl;
        break;
    
    default:
        cout<<"Tidak Diketahui"<<endl;
        break;
    }
}