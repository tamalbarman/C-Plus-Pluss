#include<iostream>
using namespace std;
class tempereture
{
    float temp,x;
    public:
    int calculate()
    {
        cout << "Enter the Tempereture: ";
        cin >> x;
        temp = (x*1.8)+32;
        cout << "After Coverte to Fahrenheit: " << temp;
        return 0;
    }
};
int main()
{
    tempereture f;
    f.calculate();
}
