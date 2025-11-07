#include<stdio.h>
struct student
{
  int rno;
  char name[30];
  float avg;	
};
int main()
{
	struct student s1={73,"teja",77.95};
	struct student *p;
	p =&s1;
	printf("%d\t%s\t%f\n",p->rno,p->name,p->avg);
	printf("%d\t%s\t%f\n",s1.rno,s1.name,s1.avg);
	return 0;
}
