#include <iostream>
#include <string>
#include <cctype> //untuk toupper atau kapital

using namespace std;

int main()
{
    string kata = "Hallo duniaaa";

    string kataUpper = kata;

    for(int i =0;i <kataUpper.length();i++){
        kataUpper[i] = toupper(kataUpper[i]);
    }
    cout << "Huruf kapital:" << kataUpper << endl;
    return 0;
}
