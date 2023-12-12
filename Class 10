#include <iostream>

using namespace std;

class Print
{
    private:
  string name;

    public:
        Print (string p_name): name(p_name){}

        friend ostream &operator << (ostream &out, const Print &obiekt)
        {
            out<<"Imie: " <<obiekt.name<<endl;
            return out;
        }
};


int main()
{
    Print p1("Adam"), p2("Aleksandra");

    cout<<p1<<p2;
    return 0;
}
