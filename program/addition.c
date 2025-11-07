#include<stdio.h>
void addition(int,int);
void Mul(int,int);
void sub(int,int);
main()
{
	int a=10,b=5;
	printf("Start\n");
	addition(a,b);
	Mul(a,b);
	sub(a,b);
	printf("\nEnd");
}
void addition(int a,int b)
{
	printf("%d\n",a+b);
}
void Mul(int a,int b)
{
	printf("%d\n",a*b);
}
void sub(int a,int b)
{
	printf("%d",a-b);
}
