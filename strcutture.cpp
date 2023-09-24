#include<iostream>
using namespace std;
struct str
{
	int marks;
	float avg;
	double name;
};
union uni
{
	int marks;
	float avg;
	double name;
};
int main()
{
	struct str d;
	union uni s;
	cout << "Size of Structure is: "<< sizeof(d)<<endl;
	cout << "Size of Union is: "<< sizeof(s);
	return 0;
}
