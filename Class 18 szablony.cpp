#include <iostream>

using namespace std;
template <typename T, typename U>

void displayPersonalData(T t_name, T t_surname, U u_age)
{
    cout<<"Imie: "<< t_name <<endl;
    cout<<"Nazwisko: "<< t_surname <<endl;
    cout<<"Wiek: "<< u_age <<endl;
}

int main(int argc, char const *argv[])
{
    displayPersonalData("Jan", "Kowalski", 34);
    displayPersonalData("Piotr", "Nowak", 47);
    return 0;
}
