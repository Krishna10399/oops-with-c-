#include<iostream>
using namespace std;
class mobileworld
{
	public :
	void getname()
	{
		cout<<"vivo\n"<<"oppo\n"<<"mi\n"<<"1+\n"<<endl;
		
	}
};
class mobile : public mobileworld
{
	public : void getitem()
	{
	cout<<"Take a Phone from Vivo\n";
	}
};
class mobilem : public mobileworld
{
	public : void getmob()
	{
	cout<<"Take a Phone from Oppo \n";
	}
};
int main()
{
	mobile mob;
	mob.getname();
	mob.getitem();
	mobilem m;
	m.getname();
	m.getmob();
	return 0;
}