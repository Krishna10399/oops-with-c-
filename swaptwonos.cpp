#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n1,n2;
    void swap(int &, int &);
    cin>>n1>>n2;
    cout<<"\nBefore Swap :N1 \n :"<<n1<<endl;
    cout<<"\nBefore Swap :N2 \n :"<<n2<<endl;
    swap(n1,n2);
    cout<<"\nAfter Swap :N1 \n"<<n1<<endl;
    cout<<"\nAfter Swap :N2 \n"<<n2<<endl;
    return 0;
}
//function fefinition swap()
void swap(int & a, int & b)
{
    int temp=a;
    a=b;
    b=temp;
}
