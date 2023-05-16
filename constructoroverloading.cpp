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
        cout<<"Enter Value of A :-\t"<<a<<endl;
    }
    public:
    constructure_overloading(int i, char b)
    {
        cout<<"Enter Value of i :-\t"<<i<<endl;
        cout<<"Enter Value of B:-\t"<<b<<endl;
    }
    public:
    constructure_overloading(int l,char c,float y)
    {
        cout<<"Enter value of L :-\t"<<l<<endl;
        cout<<"Enter Value of C :-\t"<<c<<endl;
        cout<<"Enter value of Y :-\t"<<y<<endl;
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