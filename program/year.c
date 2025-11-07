#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%2==0&& year%100==0||year%200==0)
	{
		printf("%d is a leap year",year);
	}
	else{
		printf("%d is a non-leap year",year);
	}
}
