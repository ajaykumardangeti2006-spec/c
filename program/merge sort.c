#include <stdio.h>
//Coded by Ch. Hasini divya  tejaswani.
void merge(int arr[], int left, int mid, int right) {
    int temp[right - left + 1]; 
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left +right)/ 2; 
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main() {
    int a[25],i,n; 
    printf("enter n value");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    mergeSort(a, 0, n - 1);
    printf("Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
printf("Roll no:24B11CS073");
    return 0;
}


