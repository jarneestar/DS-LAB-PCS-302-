#include <stdio.h>
#include <stdlib.h>

int is_odd(int arr[], int num)
{
    int ans = 0;
    for (int i = 0; i < num; i++)
    {
        ans ^= arr[i];
    }

    if (ans == 0)
        return -1; 
    else
        return ans;
}

void is_input(int test_case_number)
{
    int num;
    printf("Test Case %d - Enter Array Size: ", test_case_number);
    scanf("%d", &num);

    int arr[100];
    printf("Enter %d elements:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = is_odd(arr, num);

    if (result == -1)
        printf("No such element present\n");
    else
        printf("Odd occurring element: %d\n", result);
}

int main()
{
    int t;
    printf("Enter Number of Test Cases: ");
    scanf("%d", &t);
    printf("Total Test Cases: %d\n", t);

    for (int i = 1; i <= t; i++)
    {
        is_input(i);
    }

    return 0;
}
