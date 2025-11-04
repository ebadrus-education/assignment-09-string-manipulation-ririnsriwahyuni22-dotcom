#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Membaca itu menyenangkan";

    string potongan = teks.substr(8, 3);

    cout << "Teks asli     : " << teks << endl;
    cout << "Hasil substr  : " << potongan << endl;

    return 0;
}
