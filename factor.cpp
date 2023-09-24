#include<iostream>
using namespace std;
int main()
{
    int factor=1,a,i;
    cout<<"Enter the number for counting factor:";
    cin>>a;
    for(i=1;i<=10;i++)
    {
        factor=a*i; //a=5 i
        cout<<" "<<factor;
    }
    
}
