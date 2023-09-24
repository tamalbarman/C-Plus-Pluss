#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int b;
    public:
    A(){
        a=100;
        b=200;
    }
    friend class B;
};
class B{
    private:
    int c;
    protected:
    int d;
    public:
    void showA(A&X,A&Y){
        cout<<"The value of a and b in class A:"<< X.a << X.b;
    }
};
int main()
{
    A a;
    A b;
    B c;
    c.showA(a,b);
}