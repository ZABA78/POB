#include <iostream>


using namespace std;

class Print
{
public:
    void display()
    {
        cout<<"Klasa Print"<<endl;
    }
};

class DerivedPrint: public Print{};

int main()
{
    Print print;
    Print &ref_print = print;

    print.display();
    ref_print.display();
    return 0;
}
