#include<iostream>
using namespace std;
class factorial
{
	public:
	unsigned long long fact=1;
	int num;
	int input();
	void fact_function();
	void display();
	factorial(int);	
};
	factorial::factorial(int a)
	{
		num=a;
	}
	void factorial::fact_function()
	{
	for(int i=1;i<=num;i++)
	{
	fact=fact*i;
	}
	}
 
	void factorial::display()
	{
	cout<<"Factorial of entered number is: "<<fact;
	}
 
int main()
{
	int num;
	cout<<"Please enter a number: ";
	cin>>num;
	factorial object(num);
	
	object.fact_function();
	object.display();
}