/*Add all the elements of Array*/
#include <stdio.h>
#include <stdio.h>
void main()
{
    int arr[5], i, sum = 0;
    printf("Enter elements of array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements of Array:");
    for (i = 0; i < 5; i++)
    {
        printf("%3d", arr[i]);
        sum = sum + arr[i];
    }
    printf("\nSum of elements of Array are %d", sum);
    return;
}
