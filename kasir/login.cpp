#include <iostream>

using namespace std;

int main(){
    cout<<"========================"<<endl;
    cout<<"==KASIR SEMBAKO RAHAYU=="<<endl;
    cout<<"========================"<<endl;
        cout<<"Silakan login \n";
        for (int i=2; 0<=i; --i)
        {
            string username = "admin";
            string us;
            string pwasli = "admin123";
            string pw;
            cout<<"Username: ";
            cin>>us;
            cout<<"Password: ";
            cin>>pw;

            if (pw==pwasli && us==username)
            {
                cout<<"Selamat datang";break;
            }else if (i==0)
            {
                cout<<"Anda tidak diperkenankan mengakses aplikasi ini";break;
            }
            cout<<"Login salah! Kesempatan Anda "<< i <<" kali lagi \n";
        }
}