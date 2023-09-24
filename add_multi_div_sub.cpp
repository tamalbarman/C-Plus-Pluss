#include<iostream>
using namespace std;
int main()
{
    int add,sub,multi,div,a,b;
    cout << " Enter the Number for the Opearation: "<< endl;
    cin >> a >> b;
    add=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    cout << " After Addition:" << add << endl << " After Subtraction: " << sub << endl << " After Multiplication: " << multi << endl << " After Division: " << div;
    return 0; 
}