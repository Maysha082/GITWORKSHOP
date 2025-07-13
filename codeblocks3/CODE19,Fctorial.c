// factorial

#include<stdio.h>
int main()
{
    int i, n;
    long long int mul=1;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        mul=mul*i;

    }
    printf("Factorial: %lld \n", mul);

    return 0;
}
