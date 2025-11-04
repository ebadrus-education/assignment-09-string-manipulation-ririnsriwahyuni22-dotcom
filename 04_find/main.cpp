#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat = "Aku suka membaca di rumah";

    size_t posisi = kalimat.find("membaca");

    // Mengecek apakah kata ditemukan
    if (posisi != string::npos) {
        cout << "\"membaca\" ditemukan di posisi ke-" << posisi << endl;
    } else {
        cout << "\"membaca\" tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
