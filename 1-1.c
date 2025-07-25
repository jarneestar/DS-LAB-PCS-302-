#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void leftRotate(int arr[], int n, int k) {
    k = k % n; 
    if (k == 0) return; 
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    int t;
    printf("Enter number of test cases: ");
    scanf("%d", &t);

    while(t--) {
        int n, k;
        printf("Enter size of array: ");
        scanf("%d", &n);

        if(n <= 0) {
            printf("Invalid size\n");
            continue;
        }

        int arr[100];
        printf("Enter array elements: ");
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Enter value of k (left shifts): ");
        scanf("%d", &k);

        leftRotate(arr, n, k);
        printf("Rotated Array: ");
        printArray(arr, n);
    }

    return 0;
}
