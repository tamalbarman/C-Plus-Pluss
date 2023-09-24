#include<iostream>
using namespace std;
inline float average(float x,float y)
{
    return ((x+y)/2);
}
int main()
{
    float x,y;
    cout<<"Enter two numbers:-";
    cin>>x>>y;
    cout<<"Average of the numbers:-"<<average(x,y);
}