//input number and printing summation of number till -1

#include<stdio.h>
int main()
{
    int n,  sum=0;

    while(n!=-1)
    {
        printf("Enter a number: \n");
        scanf("%d", &n);

        sum=sum+n;

    }
    printf("Summation: %d\n", sum+1);

    return 0;

}
