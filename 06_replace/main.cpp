#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kata = "Hallo Ririn";
    cout << "Sebelum replace:" << kata << endl;

   kata.replace (5,5," semua");

    cout << "Sesudah replace:" << kata << endl;
    return 0;
}
