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
	s2=s3;
	printf(" enter rollno,name,avg: ");
	scanf("%d",&s1.rno);
	scanf("%s",&s1.name);
	scanf("%f",&s1.avg);
	printf("%d\n%s\n%f\n",s1.rno,s1.name,s1.avg);
	printf("%d\n%s\n%f\n",s3.rno,s3.name,s3.avg);
	return 0;	
}
