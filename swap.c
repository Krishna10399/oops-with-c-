#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After swap value of a:%d\n",a);
	printf("After swap value of b:%d\n",b);
	return 0;
}