#include<iostream>
using namespace std;
int display(int height, int age)
{
	if(age == 0)
	{
	throw "Division by Zero condition! - Please donot Enter Zero Value";
	}
	return(height/age);
}
int main()
{
	int c = 0;
	int height;
	int age;
	try
	{
		cout<<"Enter Your Age :"<<endl;
		cin>>age;
		cout<<"Enter Your Height : "<<endl;
		cin>>height;
		c = display(height,age);
		cout<<c<<endl;
	}
	catch(const char* msg)
	{
		cerr<<msg<<endl;
	}
	return 0;
}