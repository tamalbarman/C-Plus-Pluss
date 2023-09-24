#include<iostream>
using namespace std;
class areacircle{
    float area;
    public:
    areacircle(float radius){
        area = 3.141 * radius * radius;
    }
    void display()
    {
        cout << "Area of a circle is: " << area << endl;
    }
};
int main()
{
    cout << " Enter the value of radius: ";
    int radius;
    cin >> radius;
    areacircle area(radius);
    area.display();
    return 0;
}