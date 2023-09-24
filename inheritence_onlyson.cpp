#include<iostream>
using namespace std;
class parents{
    public:
    int money=56000;
};
class child : public parents{
    public:
    void show(){
        cout << "\n Cjild got his all money:"<<money;
    }
};
int mian()
{
    int money;
    child c;
    cout << "Parent have:"<<c.money;
    c.show();
}