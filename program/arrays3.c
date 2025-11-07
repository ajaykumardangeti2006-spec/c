#include<stdio.h>
int main()
{
	int a[20],t,n,i,max,min,max_pos,min_pos;
	printf("enter size of an array: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	max_pos=min_pos=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			max_pos=i+1;
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Max element=%d located at=%d\n",max,max_pos);
	printf("Min element=%d located at=%d\n",min,min_pos);
	return 0; 
}
