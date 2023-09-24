#include<iostream>
using namespace std;

class bank
{
 private:
     float p;
     float r;
     float t;
     float si;
     
 public:
    void read ( )
          {
                 cout <<"Enter Principle Amount : ";
                 cin>>p ;
                 cout<<"Enter Rate of Interest : ";
                 cin>>r;
                 cout <<"Enter Number of years: ";
                 cin>>t;
                 si= (p*r*t) /100;
          }

    void show( )
         {
            cout <<"Simple Interest is: "<<si<< endl;
         }
};
int main ()
{
    bank b ;
    b.read ( );
    b.show ( );
    return 0;
}