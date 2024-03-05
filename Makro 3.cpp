#include <iostream>

#define TRIANGLE(a,b) (a*b/2)
#define SQUARE(a) (a*a)
using namespace std;

int main()
{
    cout<<"Pole trojkata: " << TRIANGLE(6,3)<<endl;
    cout<<"Pole kwadratu: " << SQUARE(4)<<endl;
    return 0;
}
