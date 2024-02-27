#include <iostream>

using namespace std;
template <typename T>

class Print
{
public:
    Print(T p_value)
    {
        cout<<"Wartosc: "<< p_value<<endl;
    }

};



int main(int argc, char const *argv[])
{
    Print<int> p1(16);
    Print<string> p2("C++");


    return 0;
}
