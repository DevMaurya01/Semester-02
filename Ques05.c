/*Add all the even elemets of Array*/
#include <stdio.h>
void main()
{
    int arr[5], i, sum;
    printf("Enter elements of Array:");
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
            sum = sum + arr[i];
        }
    }
    printf("\nSum of all even elements of Array are %d", sum);
    return;
}