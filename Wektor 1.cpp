#include <vector>
#include <iostream>

using namespace std;

int main()
{
vector <int> wektor = {3,2,5,7,8,2};

vector <int> :: iterator it = wektor.begin();

for(it;it != wektor.end();it++)
{
    cout<<"|"<<*it;
}
cout<<"|"<<endl;
}
