#include <iostream>

using namespace std;

template <typename T>

T printValue(T t_value_1, T t_value_2)
{
    return t_value_1>t_value_2 ? t_value_1 : t_value_2;
}

int main(int argc, char const *argv[])
{
    cout<<printValue(5,7)<<endl;
    cout<<printValue(6.3, 9.2)<<endl;
    cout<<printValue('A', 'Z')<<endl;
    return 0;
}
