#include<iostream>
using namespace std;
class A{
	priveat:
		int a;
		protected:
			int b;
			public:
				A(){
					a=100;
					b=200;
				}
				friend class B;
};
class B{
	priveat:
		int c;
		protected:
			int d;
			public:
				void show A(A&x,A&y){
					cout << "The Value of a and b in class A: "<<x.A<<x.b;
				}
};
int main(){
	A a;
	A b;
	B c;
	c.showA(a,b);
}
