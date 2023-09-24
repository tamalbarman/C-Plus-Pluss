#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Tomar age kato: ";
	cin >> age;
	if (age>=18)
	goto vote;
	else
	goto notvote;
	
	vote:
		cout <<"Tumi vote dite parbe...";
		return 0;
		notvote:
			cout <<"Dukhito Vote debar jonno sothik bayosh suru hocche 18 bachor theke...";
	return 0;
}
