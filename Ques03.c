/*Display all the Even elements of Array*/
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("Enter elements of array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Even elements of Array:");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%3d", arr[i]);
        }
    }
    return;
}