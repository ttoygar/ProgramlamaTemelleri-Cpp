// 1 ve 21 arasindaki cift tam sayilari aralarinda virgul olacak sekilde ekrana yazdiran program
// BirYirmibir.cpp

#include <iostream>
using namespace std;

int main() 
{
    for(int i=1;i<22;i++)
    {
        if (i%2==0) {
            cout<<i<<",";
        }
    }

    cout<<endl;
    return 0;
}