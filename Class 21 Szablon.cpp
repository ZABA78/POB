#include <iostream>

using namespace std;

template <typename T,typename U>
class Car{
protected:
    T model;
    T mark;
    U fuel_usage;
public:
    Car(T p_model,T p_mark,U p_fuel_usage) : model(p_model),mark(p_mark),fuel_usage(p_fuel_usage)
    {

    }
    void displayCar()
    {
        cout<<"|"<<model<<"|\t|"<<mark<<"|\t|"<<fuel_usage<<" | "<<endl;
    }
};

int main()
{
     Car<string,float>car_one("Volvo","V40",7.6);
     Car<string,float>car_two("Volvo","V30",7.6);

     cout<<"Marka "<<" Model"<<" Spalanie"<<endl;
     car_one.displayCar();

     car_two.displayCar();


    return 0;
}
