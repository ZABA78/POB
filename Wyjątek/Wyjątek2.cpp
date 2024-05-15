#include <iostream>

using namespace std;

int main()
{
    string number;
    cout<<"Podaj imie: ";
    cin >>number;

    try
    {
        if(number=="Kuba")
        {
            throw 0;
        }
        cout<<"Podaj imie: " <<number<<endl;
    }
    catch(int exc)
    {
        cout<<"Imie kuba jest zablokowane"<<endl;
    }
    return 0;
}
