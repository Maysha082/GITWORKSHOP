//Loop Summation

#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Summation: %d\n", sum);

    return 0;
}
