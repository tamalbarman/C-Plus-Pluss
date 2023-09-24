#include<iostream>
using namespace std;
struct str
{
	char name[20];
	int roll;
	float height;
};
int main()
{
	struct str t;
	cout<<"Enter your name: ";
	cin>> t.name;
	cout << "Enter your roll number: ";
	cin>> t.roll;
	cout << "Enter you height: ";
	cin >> t.height;
	
	cout << "<< Details >>" << endl;
	cout << " My Name is: " << t.name<< endl;
	cout << " My Roll no is: " << t.roll << endl;
	cout << " My Height is: " << t.height;
	return 0;
}
