#include <iostream>

using namespace std;
template <typename T>

void displayPersonalData(T t_start_value, T t_end_value)
{
    for(t_start_value; t_start_value <= t_end_value;t_start_value++)
    {
        cout<<" | "<< t_start_value;
    }
    cout<<" | "<<endl;
}

int main(int argc, char const *argv[])
{
    displayPersonalData(4,15);
    displayPersonalData('E', '0');
    displayPersonalData(4,6);
    return 0;
}
