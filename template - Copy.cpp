#include<iostream>
using namespace std;
template<class T> T add(T &a, T &b)
{
	T result = a+b;
	return result;
}
template<class P> P sub(P &d, P &e)
{
	P result = d - e;
	return result;
}
template<class M> M mul(M &p, M &k)
{
	M result = p * k;
	return result;
}
template<class A> A ch(A &c)
{
	A result= c;
	return result;
}
int main()
{
	int i=5,j=10,m=10,n=8;
	float  l=10.5 , s=15.56;
	char w='q';
	cout<<"Addition is : "<<add(i,j)<<endl;
	cout<<"Substraction is : "<<sub(m,n)<<endl;
	cout<<"Multiplication is : "<<mul(l,s)<<endl;
	cout<<"Char entered is : "<<ch(w)<<endl;
	return 0;
}