// Verilen uc tamsayi icinden en kucuk olani bulan C++ programi
// EnKucukTamSayi.cpp

#include <iostream>
using namespace std;

int main () 
{
    int a, b, c, min;

    cout<<"3 tam sayi giriniz: ";
    cin>>a>>b>>c;

    if (a<b) 
    {
        if (a<c) 
            min = a;
        else 
            min = c;
    } 
    else 
        if (b<c) 
            min = b;
        else 
            min = c;
        
    

    cout<<"En buyuk tam sayi: "<<min<<endl;
    return 0;
}