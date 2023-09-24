#include<iostream>
using namespace std;
class circle{
	float area;
	public:
		circle(float radious){
			area=3.141 *radious*radious;
		}
		void display(){
	cout<<"Area of circle is: "<< area << endl;
		}
}; 
int main(){
	cout <<"Enter the value of radious: ";
	int radious;
	cin>> radious;
	circle areacircle(radious);
	areacircle.display();
	return 0;
}
