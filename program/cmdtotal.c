#include<stdio.h>
struct student
{
	char name[30];
	int cp,m,b,c;
	float tot;
};
int main(int argc,char*argv[])
{
	struct student s1;
	strcpy(s1.name,argv[1]);
	s1.cp=atoi(argv[2]);
	s1.m=atoi(argv[3]);
	s1.b=atio(argv[4]);
	s1.c=atio(argv[5]);
	s1.tot=s1.cp+s1.m+s1.b+s1.c;
	printf("student name and total marks :\n");
	printf("%s\t\t%f",s1.name,s1.tot);
	return 0;
	 }
