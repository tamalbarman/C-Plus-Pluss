#include<iostream>
using namespace std;
class fibonacci
{
    int x,t1=0,t2=1,nextTerm=0;
    public:
    int caclulate()
    {
        cout << "Enter the number of terms:";
        cin >> x;
        cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= x) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
    }
};
int main()
{
    fibonacci f;
    f.caclulate();
}