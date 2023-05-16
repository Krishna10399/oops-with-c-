#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	void swap(int &, int &);
	cin>>n1>>n2;
	cout<<"\nBefore Swapping :- \nN1:-\t"<<n1;
	cout<<endl<<"N2 :-\t"<<n2;
	swap(n1,n2);
	cout<<"\nAfter Swapping : \nNum1 :\t"<<n1;
	cout<<endl<<"Num2 :\t"<<n2<<endl;
}
void swap(int & a, int & b)
{
	int temp=a;
	a=b;
	b=temp;
}