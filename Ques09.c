/*Find the Smallest elements of Array*/
#include <stdio.h>
void main()
{
    int arr[5], i, min;
    printf("Enter elements of array:");
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("\nSmallest elements of Array %d", min);
    return;
}