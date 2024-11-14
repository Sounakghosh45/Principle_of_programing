//new
#include <stdio.h>

int main() {
    int n, beg, end, i, num, mid, found = 0;
    int arr[20];

    printf("Enter the number of stations:\n");
    scanf("%d", &n);

    printf("Type station numbers (1 to 8) in sorted order: Sealdah-1, Bidhannagar-2, Dumdum-3, Birati-4, New Barrackpore-5, Madhyamgram-6, Hridoypur-7, Barasat-8:\n");

    for (i = 0; i < n; i++) {
        printf("Enter station number ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the station number to search (Madhyamgram should be 6):\n");
    scanf("%d", &num);

    beg = 0;
    end = n - 1;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (arr[mid] == num) {
            if (num == 6) {
                printf("The passenger arrived. It is Madhyamgram station!\n");
            } else {
                printf("The passenger arrived at station number %d, which is not Madhyamgram.\n", num);
            }
            found = 1;
            break;
        } else if (arr[mid] > num) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
    }

    if (found == 0) {
        printf("The station number %d is not in this route!!\n", num);
    }

    return 0;
}
