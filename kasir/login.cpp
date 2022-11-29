#include <iostream>

#include "utama.cpp"

using namespace std;

int main() {
    cout << "========================" << endl;
    cout << "==KASIR SEMBAKO RAHAYU==" << endl;
    cout << "========================" << endl;
    cout << "Silakan login \n";

    string username[5] = {
        "admin1",
        "admin2",
        "admin3"
    };
    string us;
    string password[5] = {
        "password1",
        "password2",
        "password3"
    };
    string pw;
    for (int a = 2; 0 <= a; --a) {

        cout << "Username: ";
        cin >> us;
        cout << "Password: ";
        cin >> pw;


        for (int i = 0; i <= 10; i++) {

            if (us == username[i]) {
                if (pw == password[i]) {
                    cout << "Selamat datang \n";
                    menumain();
                    return 0;
                }
            }

        }
        if (a == 0) {
            cout << "Anda tidak diperkenankan mengakses aplikasi ini";
            break;
        }
        cout << "Login salah! Kesempatan Anda " << a << " kali lagi \n";

    }
}