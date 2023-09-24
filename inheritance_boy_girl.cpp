#include<iostream>
using namespace std;
class parent{
    public:
    int money=100000;
};
class boy : public parent{
    public:
    boy()
    {
        cout<<"Boy has got the money"<<(money/2);
    }
};
class girl : public parent{
    public:
    girl()
    {
        cout <<"\n Girl has got the money:"<<(money/2);
    }
};
int main(){
    boy b;
    girl g;
}