#include <stdio.h>
int main()
{
    int a[10], num, i, j;
    printf("Please enter the number :");
    scanf("%d", &num);
    for(i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }
    printf("Binary number of the given number :");
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");
    return 0;
}