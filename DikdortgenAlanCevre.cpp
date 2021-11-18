// Bir dikdortgenin alanini ve cevresini hesaplayan C++ Programi
// DikdortgenAlanCevre.cpp

#include <iostream>
using namespace std;

int main () 
{
    int a,b;

    cout<<"Birinci kenar:\n";
    cin>>a;
    cout<<"Ikinci kenar:\n";
    cin>>b;

    cout<<"Toplam alan: "<<a*b<<endl<<"Toplam cevre: "<<2*(a+b)<<endl;

    return 0;
}