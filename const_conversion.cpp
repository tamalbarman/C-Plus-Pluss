#include<iostream>
using namespace std;
class Temperature
{
	private:
	float fahren, celsius;
	public:
	float conversion(float fahren)
	{
		celsius=(fahren-32)* 5.0/9.0;
		return celsius;
	}
	
};
int main()
{
	Temperature t;
	float f;
	cout<<"Enter Temperature in Fahrenheit: ";
	cin>>f;
	cout<<"Temperature in Celsius: "<<t.conversion(f);
return 0;
}
