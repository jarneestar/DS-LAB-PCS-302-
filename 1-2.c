#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void minimum_distance()
{
    int num;
    printf("Enter Size of Array: ");
    scanf("%d", &num);
    int arr[100];
    for(int i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &num1, &num2);
    int prev=-1, min=INT_MAX;
    int dist;
    for(int i=0; i<num; i++)
    {
        if(num1==arr[i] || num2==arr[i])
        {
            if(prev!=-1 && arr[i]!=arr[prev])
            {
                dist=i-prev;
                if(min>dist)
                {
                    min=dist;
                }
            }
            prev=i;
        }
    }
    if(min==INT_MAX)
    {
        printf("Invalid\n");
    }
    else
    {
        printf("Minimum distance between %d & %d is %d\n", num1, num2, min);
    }
}
void main()
{
    int t;
    printf("Enter Number of Test Cases: ");
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        minimum_distance();
    }
}