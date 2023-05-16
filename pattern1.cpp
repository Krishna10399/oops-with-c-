#include<iostream.h>
#include<string.h>
using namespace	std;
int calc(int U)
{
	if(U % 2 == 0)
	return U+10;
	else
	return U+2;	
}
void pat (char M, int B=2)
{
for (int CNT=0;CNT<B;CNT++)
	cout<<calc(CNT) <<M;
	cout<<endl;
}
int main ()
{
pat('*');
pat('#',4);
pat('@',3);
return 0;
}