// ++ operatortu degiskenin onunde ise ne olur, sonunda ise ne olur
//OnceSonraArttir.cpp

#include <iostream>
using namespace std;

int main() 
{
int a = 10; 

cout << "a: " << a << endl; // Ekranda 10 değeri görüntülenir 
cout << "Once arttir operatoru kullanilmasi durumunda" << endl; 
cout << "++a: " << ++a << endl; // Önce 1 arttırma işlemi uygulanır ve 11 değeri görüntülenir 
cout << "a: " << a << endl; // Önce arttır operatöründen sonra değişkenin değeri görüntülenir 
cout << "**********************************************" << endl; 
a = 10; 

cout << "a: " << a << endl; // Ekranda 10 değeri görüntülenir 
cout << "Sonra arttir operatoru kullanilmasi durumunda" << endl; 
cout << "a++: " << a++ << endl; // 10 değeri görüntülenir ve sonra 1 arttırma işlemi uygulanır 
cout << "a: " << a << endl; // Önce arttır operatöründen sonra değişkenin değeri görüntülenir 
cout << "**********************************************" << endl;

return 0;
}

