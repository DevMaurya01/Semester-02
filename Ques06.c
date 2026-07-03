/*Add all the odd elements of Array*/
#include <stdio.h>
void main()
{
    int arr[5], i, sum = 0;
    printf("Enter elements of array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Odd elements of Array:");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%3d", arr[i]);
            sum = sum + arr[i];
        }
    }
    printf("\nSum of all odd elements of Array are %d", sum);
    return;
}