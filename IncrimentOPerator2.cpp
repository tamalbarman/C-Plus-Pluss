#include<iostream>
using namespace std;
int main(){
	int a=10,b=9,c=8,d=7,e,f,g,h;
	e=(a>b)&&(c<d);
	f=(a!=b) || (c==d);
	g=e++;
	h=++f;
	cout << ++a << b++ << ++c << d++ << ++e<< f++ << ++g << h++ ;
	return 0;
}
