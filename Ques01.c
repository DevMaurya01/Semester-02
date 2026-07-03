/*Write a program  to input data of matrix and display it*/
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("Enter elements of Array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements of Array:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }
    return;
}