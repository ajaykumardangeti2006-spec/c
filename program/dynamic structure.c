#include<stdio.h>
struct student
{
	int rno; 
	char name;
	float avg;
};
int main()
{
	struct student *s1;
	int n,i;
	s1=(struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++){
		printf("enter rollno,name,avg\n");
		scanf("%d%s%f",&(s1+i)->rno,&(s1+i)->name,&(s1+i)->avg);
	}
	printf("rollno name \t average\n");
	for(i=0;i<n;i++){
	printf("%d\t%s\t%f\n",(s1+i)->rno,(s1+i)->name,(s1+i)->avg);	
	}
 return 0;
}
