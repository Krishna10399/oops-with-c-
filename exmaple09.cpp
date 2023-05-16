#include <iostream>
using namespace std;

class Encapsulation {

	private:int a;
	private:string x;
	private :char d;
	public: void set_a(int b){
		a = b;
	}
	public: int get_a(){
	return a;
	}
	public: void set_x(string y){
		x = y;
	}
	public: string get_x(){
	return x;
	}
	public: void set_d(char	 e){
		d = e;
	}
	public: char get_d(){
	return d;
	}	
};

// Driver code
int main()
{
	Encapsulation obj;
	obj.set_a(100);
	obj.set_x("Ram 129191");
	obj.set_d('C');
	cout<<"value of a : \t"<<obj.get_a()<<"\nData of X  : \t"<<obj.get_x()<<"\ndata of d  :  \t"<<obj.get_d()<<endl;
	return 0;
}
