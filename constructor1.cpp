#include<iostream>
using namespace std;
class constructure_overloading
{
    public:
    constructure_overloading()
    {
        cout<<"Enjoy !......."<<endl;
    }
    public:
    constructure_overloading(int a)
    {
        cout<<"Enter Value of A :- "<<a<<endl;
    }
    public:
    constructure_overloading(int i, char b)
    {
        cout<<"Enter Value of i :-"<<i<<endl;
        cout<<"Enter Value of B:-"<<b<<endl;
    }
    public:
    constructure_overloading(int l,char c,float y)
    {
        cout<<"Enter value of L :- "<<l<<endl;
        cout<<"Enter Value of C :- "<<c<<endl;
        cout<<"Enter value of Y :-"<<y<<endl;
    }

};
int main()
 {
 	 // For constructure_overloading class
    constructure_overloading c;
    constructure_overloading c1(54);
    constructure_overloading c2(65,'Z');
    constructure_overloading c3(75,'A',65.9);
	return 0;
}
