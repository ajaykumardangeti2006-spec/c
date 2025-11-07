#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
}s1,s2;
int main()
{
	struct student s3={73,"teja",73.2};
	printf("%d\n",s3.rno);
	printf("%s\n",s3.name);
	printf("%f\n",s3.avg);
	return 0;	
}
