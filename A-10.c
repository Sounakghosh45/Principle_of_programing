#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element:\n");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int a;
    printf("\nEnter the index to access element using pointer from 0 to %d:",n-1);
    scanf("%d",&a);
    int *p=&arr[a];
    printf("The target element is:%d",*p);
}