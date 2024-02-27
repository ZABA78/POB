#include <iostream>

using namespace std;
template <typename T>

class Print
{
protected:
    T value;
public:
    void setValue(T p_value)
    {
        value = p_value;
    }
    void displayValue()
    {
        cout<<"Przkazana wartosc: "<<value<<endl;
    }
};



int main(int argc, char const *argv[])
{
    Print<int> p1;
    Print<string> p2;

    p1.setValue(15);
    p1.displayValue();
    p2.setValue("Future");
    p2.displayValue();

    return 0;
}
