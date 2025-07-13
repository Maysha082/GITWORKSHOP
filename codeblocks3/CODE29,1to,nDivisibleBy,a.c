//1 to n divisible by a

#include<stdio.h>
int main()
{
    int i, n, a;

    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("Enter a number for divisible by: \n");
    scanf("%d", &a);

    for(i=1; i<=n; i++)
    {
        if(i%a==0)
        {
            printf("%d \n", i);
        }
    }
    return 0;


}
