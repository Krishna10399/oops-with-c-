#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("Entre second number : ");
	scanf("%d",&b);
	//For swapping using three variables
	temp=a;
	a=b;
	b=temp;
	printf("\nafter Swap First number is : %d \n" ,a);
	printf("\nAfter Swap Second number is : %d \n",b);
	
}