#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Hello A"<<endl;


    }
    A(int a)
    {
        cout<<"Hi...."<<endl;

    }
    void disp()
    {
        cout<<"in Disp()"<<endl;

    }
    ~A()
    {
        cout<<"Finalally done !"<<endl;
    }
};
    class c : public A
    {
        public:
        void disp()
        {
            cout<<"In C class"<<endl;
        }
};
    
int main()
{
    A a1;
    A a2(5);
    A a;
    a.disp();
    return 0;
}