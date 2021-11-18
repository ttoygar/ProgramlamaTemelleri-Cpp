// ++ ve -- operatorlerinin yerlerinin etkisini gosteren program
// ArttirAzalt.cpp

#include <iostream>
using namespace std;

int main() 
{
int a, b, c, d, e; 
a = 5; 
b = 3; 
c = 3; 
cout << "a, b, c : " << a << " " << b << " " << c << endl;
d = a * b++; 
cout << "b: " << b << endl;
cout << "d: " << d << endl; 
e = a * --c; 
cout << "c: " << c << endl;
cout << "e: " << e << endl;
cout << "*************************" << endl;

//d = ++(a*b);
//cout << d << endl;

return 0;
}