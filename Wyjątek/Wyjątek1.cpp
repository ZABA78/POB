#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Podaj liczbe: ";
    cin >>number;

    try
    {
        if(number==0)
        {
            throw 0;
        }
        cout<<"Liczba: " <<number<<endl;
    }
    catch(int exc)
    {
        cout<<"Zgloszono wyjątek"<<endl;
    }
    return 0;
}
