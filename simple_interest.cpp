#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout << "Enter the Principle Ammount: ";
    cin >> p;
    cout << "Enter the Rate of Interest: ";
    cin >> r;
    cout << "Enter the Time: ";
    cin >> t;
    si=(p*r*t)/100;
    cout << "The Simple Interest is: " << si;
    return 0;
}