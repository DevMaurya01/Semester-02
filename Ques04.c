/*Display all the elements of Odd number in an Array*/
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("Enter elements of Array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Odd elemets of Array:");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%3d", arr[i]);
    }
    return;
}