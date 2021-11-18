// Ard arda girilen 10 sayidan sadece pozitif olanlarin toplamini bulan program
// OnPozitifToplam.cpp

#include <iostream>
using namespace std;

int main ()
{
    int n, toplam;

    for (int i=0 ; i<10; i++) 
    {
        cout<<"Bir sayi giriniz: "<<endl;
        cin>>n;
        if(n%2!=0) continue;
        
        toplam+=n;
    }
    cout<<"Toplam: "<<toplam<<endl;

    return 0;
}