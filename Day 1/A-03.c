#include <stdio.h>

int attendance(int arr[], int n, int roll) {
    int beg = 0, end = n - 1, mid, found = 0;
    while (beg <= end) {
        mid = beg + (end - beg) / 2;

        if (arr[mid] == roll) {
            printf("Roll number %d is present.\n", roll);
            found = 1;
            break;
        } else if (arr[mid] < roll) {
            beg = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (!found) {
        printf("Roll number %d is not present.\n", roll);
    }
}

int main() {
    int a;
    printf("Enter the student number:\n");
    scanf("%d",&a);
    int arr[100];
   for(int i=0;i<a;i++){
       printf("Enter roll:");
       scanf("%d",&arr[i]);
   }
    int roll;
    printf("Enter the roll number to search: ");
    scanf("%d", &roll);
    attendance(arr,a, roll);
    return 0;
}
