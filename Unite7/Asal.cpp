// 1 den verlen sayiya kadar olan asal sayilari ekrana yazan program
// Asal

#include <iostream>
using namespace std;

void Yazdir(int);  //Prototipte parametrenin sadece veri tipinin kullanilmasi yeterli 
bool AsalTest(int kontrol); //Prototipte degisken adi kullanilmasa da olur

int main ()
{
    int sayi;
    cout<<"hangi sayiya kadar asallar bulunsun: ";
    cin>>sayi;
    Yazdir(sayi);
    cout<<endl;
    return 0;
}


bool AsalTest(int kontrol)
{
    int i;
    for (i=2; i<kontrol; i++) {
        if (kontrol%i == 0) return false;
    }
    return true;
}

void Yazdir (int sonDeger)
{
    for (int i=1; i<=sonDeger; i++)
    {
        if (AsalTest(i)==true) cout<<i<<" ";
    }
}

