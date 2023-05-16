#include<iostream>
using namespace std;
class shop
{
	public :void getname()
	{
		cout<<"Sammosa is junk Food not good For Helth !!!"<<endl;
	}
};
class food : public shop
{
	public : void getfood()
	{
		cout<<"White Samosa \n";
	}
};
int main()
{
	food obj_food;
	obj_food.getfood();
	obj_food.getname();
	return 0;
}