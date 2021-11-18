// Verilen uc tamsayi icinden en buyuk olani bulan C++ programi
// EnBuyukTamSayi.cpp

#include <iostream>
using namespace std;

int main () 
{
    int a, b, c, maks;

    cout<<"3 tam sayi giriniz: ";
    cin>>a>>b>>c;

    if (a>b) 
    {
        if (a>c) 
            maks = a;
        else 
            maks = c;
    } 
    else 
        if (b>c) 
            maks = b;
        else 
            maks = c;
        
    

    cout<<"En buyuk tam sayi: "<<maks<<endl;
    return 0;
};