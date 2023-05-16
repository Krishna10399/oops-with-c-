#include<iostream>
#include<string.h>
#include<math.h>  // FOr Power Function
using namespace std;
int main()
{
	float principal, rate, time; //Logical Variables
	void calc(float,float,float);
	cout<<"\nEnter the Foloeing Values :- \n";
	cout<<"\nPrincipal :- ";
	cin>>principal;
	cout<<"\nRate of Interest :- ";
	cin>>rate;
	cout<<"\nTime Period :- ";
	cin>>time;
	calc(principal,rate,time);
	return 0;
}
void calc (float p, float r,float t)
{
	float interest;
	interest = p*(pow((1+r/100.0),t))-p;
	cout<<"\nCompound interest is :- "<<interest<<endl;
}