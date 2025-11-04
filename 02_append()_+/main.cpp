#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat1 = "Halo";
    string kalimat2 = " Dunia";

    // Menambahkan string kalimat2 ke akhir kalimat1
    kalimat1.append(kalimat2);

    cout << "Hasil setelah append: " << kalimat1 << endl;

    return 0;
}
