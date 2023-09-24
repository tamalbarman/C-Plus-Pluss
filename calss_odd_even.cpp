#include<iostream>
using namespace std;
class odd_even
{
    int a;
    public:
    int claculate()
    {
        cout << "Enter the number to check: ";
        cin >> a;
        if(a!=0)
        {
            cout << "The Number is Odd";
        }
        else {
            cout << "The Number is Even";
        }
        return 0;
    }
};
int main()
{
    odd_even d;
    d.claculate();
}