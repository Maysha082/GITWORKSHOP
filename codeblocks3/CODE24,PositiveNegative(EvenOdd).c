// Check positive negative if positive then check even or odd

#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number: \n");
    scanf("%d", &a);

    if(a>0)
    {
        printf("The number is positive.\n");

        if(a%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    else if(a==0)
    {
         printf("The number is zero.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }
    return 0;
}
