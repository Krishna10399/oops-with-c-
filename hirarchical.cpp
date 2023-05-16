#include<iostream>
using namespace std;
class parrent
{
	public: void parrentname()
	{
		cout<<"Raghav"<<endl;
	}
};
class child1 : public parrent
{
	public : void child1name()
	{
		cout<<"Suyash"<<endl;
	}
};
class child2 : public parrent
{
	public : void child2name()
	{
		cout<<"Raunak"<<endl;
	}
};
class child3 : public child1
{
	public : void child3name()
	{
		cout<<"Rohan"<<endl;
	}
};
class child4 : public child1
{
	public : void child4name()
	{
		cout<<"Sohan"<<endl;
	}
};
class child5 : public child2
{
	public : void child5name()
	{
		cout<<"Neha"<<endl;
	}
};
class child6 : public child2
{
	public : void child6name()
	{
		cout<<"Pradeep"<<endl;
	}
};
class child7 : public child5
{
	public : void child7name()
	{
		cout<<"Rajan"<<endl;
	}
};
class child8 : public child5
{
	public : void child8name()
	{
		cout<<"Vijay"<<endl;
	}
};
class child9 : public child8
{
	public : void child9name()
	{
		cout<<"Vinod \n";
	}
};
int main()
{
	child3 c3;
	c3.child3name();
	c3.child1name();
	child4 c4;
	c4.child4name();
	c4.child1name();
	child6 c6;
	c6.child6name();
	c6.child2name();
	child7 c7;
	c7.child7name();
	c7.child5name();
	child9 c9;
	c9.child9name();
	c9.child8name();
	return 0;
}
