// fonksiyona gonderilen iki sayidan birincinin ikinci degere gore ussunu alan progam
// KuvvetAl.cpp

#include <iostream>
using namespace std;



int KuvvetAl (int sayi, int kuvvet)
{
    int sonuc = 1;

    for ( int i=1; i<=kuvvet; i++) 
        sonuc *= sayi;

    return sonuc;
}

int main() {

    int sayi,kuvvet,sonuc;

    cout<<"iki sayi giriniz: "<<endl;
    cin>>sayi>>kuvvet;


   sonuc = KuvvetAl(sayi,kuvvet);
   cout<<"Sayi: "<<sayi<<"\nKuvvet: "<<kuvvet<<"\nSonuc: "<<sonuc<<endl;

   return 0;
};