#include<iostream>
using namespace std;
class factorial{
    int fact=1,i,n;
    public:
    int claculate()
    {
        cout << "Enter the number for check factorail: ";
        cin >> n;
        for (i=2;i<=n;i++)
        {
            fact = fact * i;
        }
        cout << " The factorail of the number " << n << "is: " << fact;
        return 0;
    }
};
int main()
{
    factorial f;
    f.claculate();
}