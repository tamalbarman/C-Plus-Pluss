#include<iostream>
using namespace std;
int main()
{
    float pi=3.14, redious,area;
    cout << "Enter the Redious of a circle:";
    cin >> redious;
    area=pi*redious*redious;
    cout << "The area of a circle is: " << area;
    return 0;
}