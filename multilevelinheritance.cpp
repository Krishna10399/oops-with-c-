#include<iostream>
using namespace std;
class parrent
{
	public : void getname()
	{
		cout<<"Suresh"<<endl;
	}
};
class childofp : public parrent
{
	public : void gethisname()
	{
		cout<<"Ramesh"<<endl;
	}
};
class childofc : public childofp
{
	public : void gethisfullname()
	{
		cout<<"Rajesh singh"<<endl;
	}
};
class childoc : public childofc
{
	public : void gethislastname()
	{
		cout<<"Singh"<<endl;
	}
};
int main()
{
	childoc c;
	c.getname();
	c.gethisname();
	c.gethisfullname();
	c.gethislastname();
	return 0;
}