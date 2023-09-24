#include<iostream>
using namespace std;
class si
{
    float p,t,r,si;
    public:
    int claculate()
    {
        cout << "Enter the Principle ammount: ";
        cin >> p;
        cout << "Enter the time: ";
        cin >> t;
        cout << "Enter the rate of interest: ";
        cin >> r;
        si = (p*t*r)/100;
        cout << "After conversation the simple interest is: " << si;
        return 0;

    }
};
int main()
{
    si t;
    t.claculate();
}