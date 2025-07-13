//Loop Multiplication/factorial

#include<stdio.h>
int main()
{
    int i, n, mul=1;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        mul=mul*i;

        printf("Summation: %d\n", mul);
    }

    return 0;
}
