#include<iostream>
using namespace std;
class oddeven{
    public:
    int a;
    void display()
    {
        cout << "Enter Number to Check: ";
        cin >> a;

        if (a%2!=0)
        {
            cout << "The Number is Odd";
        }
        else{
            cout << "The Number is Even";
        }
    }
};
int main()
{
    oddeven b;
    b.display();
    return 0;
}