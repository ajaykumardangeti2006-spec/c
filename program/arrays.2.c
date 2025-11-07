#include<stdio.h>
int main()
{
	int a[20],t,n,i;
	printf("enter size of an array: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("elements after reverse:\n");
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;

}
