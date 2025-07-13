// taking 2 input one is base another is power

#include<stdio.h>
int main()
{
    int a, n, i, result=1;

    printf("Enter a number for base: \n");
    scanf("%d", &a);

    printf("Enter a number for power: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        result=result * a;
    }


    printf("Result is %d \n",result);

    return 0;
}
