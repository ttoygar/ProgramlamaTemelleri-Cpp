// Sinav sonculari kullanarak not hesaplayan C++ programi
// Final:%50 AraSinav:%35 Odev:%15

#include <iostream>
using namespace std;

int main() {

    int final, araSinav, odev, toplam;

    cout<<"Final notunuzu giriniz:\n";
    cin>>final;
    cout<<"Ara sinav notunuzu giriniz:\n";
    cin>>araSinav;
    cout<<"Odev notunuzu giriniz:\n";
    cin>>odev;

    toplam = final*0.5+araSinav*0.35+odev*0.15;
    cout<<"Donem sonu notunuz: "<<toplam<<endl;

    return 0;
}