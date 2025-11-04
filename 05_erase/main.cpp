#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kata = "Halo Ririn";
    cout << "Sebelum erase:" << kata << endl;

    kata.erase(5,5);

    cout << "Sesudah erase:" << kata << endl;
    return 0;
}
