#include<stdio.h>
struct student
{
	int rno; 
	int CP,M,B,C;
	float tot,avg
};
int main()
{
	struct student std[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter rollno and 4 subject marks: \n");
		scanf("%d%d%d%d",&std[i].rno,&std[i].CP,&std[i].M,&std[i].B,&std[i].C);
	}
	for(i=0;i<n;i++){
		std[i].tot = std[i].CP+std[i]. M+std[i].B+std[i].C;
		std[i].avg = (float)(std[i].tot/4);
		printf("total = %f\n average = %f\n",std[i].tot,std[i].avg);
		}
		return 0;
}
