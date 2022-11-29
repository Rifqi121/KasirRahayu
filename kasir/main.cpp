#include <iostream>

using namespace std;

int main(){
    int bnyk,produk1=10000,jumlah1,jumlah2,total,bayar,tunai,sisa,diskon;
    string produk,produk2,produk3;

    cout<<"=========================================== \n";
    cout<<"Program Kasir Sembako Rahayu\n";
    cout<<"=========================================== \n";
    cout<<endl;

    cout<<"Masukan Nama Produk 1: ";
    cin>>produk;
    cout<<"Jumlah Produk: ";
    cin>>bnyk;

    jumlah1= bnyk*produk1;
    cout<<"Total Harga: Rp. "<<jumlah1<<endl;

    bayar= jumlah1*jumlah2;
    cout<<endl;

    cout<<"=========================================== \n";
    cout<<"Faktur Pembelian: Rp. "<<bayar<<endl;

    if (bayar>50000)
    {
        diskon=0.10*bayar;
        cout<<"Diskon 20%, diskon sebesar: Rp. "<<diskon<<endl;
        total=bayar-diskon;
        cout<<"Total: Rp. "<<total<<endl;
    }else if (bayar<50000)
    {
        diskon=0.10*bayar;
        cout<<"Diskon 0%, diskon sebesar: Rp. "<<diskon<<endl;
        total=bayar;
        cout<<"Total: Rp. "<<total<<endl;
    }
    cout<<"=========================================== \n";
    cout<<"Uang Tunai: Rp. ";
    cin>>tunai;
    sisa= tunai-total;
    cout<<"Kembalian: Rp. "<<sisa<<endl;
    
}