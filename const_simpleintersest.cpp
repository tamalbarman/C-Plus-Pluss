#include<iostream>
using namespace std;
class bank{
	float p;
	float r;
	float t;
	float si;
	public:
		void read()
		{
			cout<< "Enter principle ammount: ";
			cin >> p;
			cout << " Enter the rate of interset: ";
			cin >> r;
			cout<< "Enter the number of year: ";
			cin >> t;
			si=(p*r*t)/100;
		}
		void show(){
			cout << " Simple interst is: "<<si<< endl;
		}
};
int main()
{
	bank s;
	s.read();
	s.show();
	return 0;
}
