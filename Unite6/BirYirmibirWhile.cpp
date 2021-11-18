// 1 ve 21 arasindaki cift tam sayilari aralarinda virgul olacak sekilde ekrana yazdiran program
// BirYirmibir.cpp

#include <iostream>
using namespace std;

int main() 
{
    int i=2;

    while (i<21) 
    {
        if(i%2==0) cout<<i<<",";
        i++;
    };
    
    cout<<endl;
    return 0;
}