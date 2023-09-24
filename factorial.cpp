#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"Enter the number";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of the number "<<n<<"is :"<<fact;
}