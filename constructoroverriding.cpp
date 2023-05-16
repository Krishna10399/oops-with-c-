 #include<iostream>
using namespace std;
class constructure_overriding
{
    public:
    constructure_overriding()
    {
        cout<<"Enjoy !......."<<endl;
    }
    public:
    constructure_overriding()
    {
        cout<<"Enter Value of A :-\t"<<a<<endl;
    }
   /* public:
    constructure_overriding()
    {
        cout<<"Enter Value of i :-\t"<<i<<endl;
        cout<<"Enter Value of B:-\t"<<b<<endl;
    }
    public:
    constructure_overriding()
    {
        cout<<"Enter value of L :-\t"<<l<<endl;
        cout<<"Enter Value of C :-\t"<<c<<endl;
        cout<<"Enter value of Y :-\t"<<y<<endl;
    }*/

};
 int main()
 {
 	 // For constructure_overriding class
    constructure_overriding c;
    constructure_overriding c1(54);
    constructure_overriding c2(65,'Z');
    constructure_overriding c3(75,'A',65.9);
	return 0;
}