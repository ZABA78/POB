#include <iostream>

using namespace std;

template <typename T, typename U>

void printValue(T t_value, U u_value)
{
    cout<< "Przekazana wartosc: ["<<t_value<<"] ["<< u_value <<"]"<<endl;
}

int main(int argc, char const *argv[])
{
    printValue(4,6.7);
    printValue(5.4, "C++");
    printValue("Programowanie", 9);
    return 0;
}
