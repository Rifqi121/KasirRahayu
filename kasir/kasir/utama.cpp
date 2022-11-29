#include <iostream>

using namespace std;

int main(){
    int pil;
    cout<<"===================================="<<endl;
    cout <<"Selamat Berbelanja di Sembako Rahayu"<<endl;
    cout<<"===================================="<<endl;
    cout <<"            PILIHAN MENU   "<<endl;
    cout<<"===================================="<<endl;
    cout <<"1. Login "<<endl;
    cout <<"2. Kasir "<<endl;
    cout <<"3. Stok Barang "<<endl;
    cout <<"4. Exit "<<endl;
    cout<<"===================================="<<endl;
    cout <<"Pilih Nomor 1/2/3/4: ";
    cin>>pil;
    switch (pil)
    {
    case 1:
        cout<<"Tampilan Login"<<endl;
        break;
    case 2:
        cout<<"Tampilan Kasir"<<endl;
        break;
    case 3:
        cout<<"Tampilan Stok Barang"<<endl;
        break;
    case 4:
        cout<<"Tampilan Exit"<<endl;
        break;
    
    default:
        cout<<"Tidak Diketahui"<<endl;
        break;
    }
    return 0;
}