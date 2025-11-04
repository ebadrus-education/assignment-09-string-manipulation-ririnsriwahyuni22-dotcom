#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "Ririn Sri Wahyuni";
    cout << "Panjang nama (dengan length): " << nama.length() << endl;
    cout << "Panjang nama (dengan size): " << nama.size() << endl;
    cout << "Huruf pertama: " << nama[0] << endl;
    cout << "Huruf terakhir: " << nama[nama.length() - 1] << endl;
    return 0;
}
