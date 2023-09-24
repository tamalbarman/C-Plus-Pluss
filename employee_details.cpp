#include<iostream>
using namespace std;
class Employee
{
    int age, salary;
    string name,location;
    public:
    Employee(int a, int s,string n, string l)
    {
        age=a;
        salary=s;
        name=n;
        location=l;
    }
    void display()
    {
        cout <<"Employee's Information:";
        cout <<"\nName:" <<name<<"\nLocation:"<< location<<"\nAge:"<< age<<"Salary:"<<salary; 
    }
};
int main()
{
    int x,y;
    string n,l;
    for(int i=0;i<4;i++)
    {
        cout << "\n Enter the information about employee:";
        cin >>n;
        cin >>l;
        cin>>x;
        cin>>y;
        Employee e(x,y,n,l);
        e.display();
    }
    return 0;
}