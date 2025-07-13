// prime number

#include<stdio.h>
int main()
{
    int i, n, prime=1;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            prime=0;
        }
    }
    if(n<=1)
    {
        printf("Not a prime number\n");

    }
    else if(prime==1)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }
    return 0;
}
