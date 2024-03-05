#include <iostream>

#define MAX(a, b)((a>b)?a:b)
#define MIN(a, b)((a<b)?a:b)

using namespace std;



int main()
{
    cout<<"Wieksza liczba:" << MAX(4,2)<<endl;
    cout<<"Mniejsza liczba:" << MIN(4,2)<<endl;
    return 0;
}
