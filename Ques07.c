/*Display the elements of Array in Reverse order*/
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("Enter elements of Array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reverse order of Array:");
    for (i = 4; i >= 0; i--)
    {
        printf("%3d", arr[i]);
    }
    return;
}