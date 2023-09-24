#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle()
    {
        cout<< "Vehicle";
    }
};
class fourwheeler
{
    public:
    fourwheeler(){
        cout <<"\nFourwheeler is one type of vehicle";
    }
};
class maruti{
    public:
    maruti()
    {
        cout << "\n maruti is a fourwheeler and it ia a vehicle:";
    }
};
int main(){
    maruti m;
}