#include<iostream>
#include<string.h>
inline void min(int x,int y)
{
	cout<<( x < y? x : y);
}
int main()
{
	int num1,num2;
	cout<<"\nEnter The Two Integers :\n";
	cin>>num1>>num2;
	min(num1,num2);//Function code inserted here 
	cout<<"-----------------------------------------";
	cout<<"-----------------------------------------";
	return 0;
}