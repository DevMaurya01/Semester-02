/*find the largest elements in the array*/
#include <stdio.h>
void main()
{
    int arr[5], i, max;
    printf("Enter elements of Array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\nLargest elements of Array are %d", max);
    return;
}