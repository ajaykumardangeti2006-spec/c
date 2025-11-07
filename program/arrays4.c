#include<stdio.h>
int main()
{
	int a[20],t,n,i,pos,key;
	printf("enter size of an array: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be inserted:\n");
	 scanf("%d",&key);
	 printf("enter position to be inserted:\n");
	 scanf("%d",&pos);
	 n=n+1;
	 for(i=n-1;i>=pos;i--)
	 {
	 	a[i]=a[i-1];
	 	
	 }
	 a[i]=key;
	 printf("elements after inserted:\n",n);
	 for(i=0;i<n;i++)
	 {
	 	printf("a[%d]=%d\n",i,a[i]);
	 }
	 return 0;
}
	 
