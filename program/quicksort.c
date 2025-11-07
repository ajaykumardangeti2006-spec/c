#include<stdio.h>
void QuickSort(int a[],int left,int right)
{
	int i,j,t,pivot;
	if(left<right){
		i=left;
		j= right;
		pivot=left;
		while(i<j)
		{
			while(a[j]<=a[pivot]&& i<right)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[pivot];
		a[left]= t;
			QuickSort(a,left,j-1);
			QuickSort(a,j+1,right);
	}
}
int main()
{
	int arr[25],n,i;
	printf("enter n value: ");
	scanf("%d",&n);
	printf("enter %d value",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
    QuickSort(arr,0,n-1);
    printf("sorted array is: \n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
	return 0;
	}
