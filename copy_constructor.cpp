#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
    abc(int x)
    {a=x;
    cout<<"main constructor\n";}
    abc(abc &O)
    {a=O.a;
    cout<<"\ncopy constructor\n";}
   
    void show()
    {
        cout<<"Value of integer:-"<<a;
    }
};
int main()
{
    int x;
    cout<<"Enter a number:-";
    cin>>x;
    abc d(x);
    d.show();
    abc d1(d);
    d1.show();
    abc d2=d1;
    d2.show();
    abc d3=d2;   
    d3.show();
}