// printing summation of number showing even or odd number in a range

#include<stdio.h>
int main()
{
    int start, end, i, sum=0;

    printf("Enter a starting number: \n");
    scanf("%d", &start);

    printf("Enter a ending number: \n");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        if(i%2==0)
        {
            printf("%d Even\n", i);
        }
        else
        {
            printf("%d Odd\n", i);
        }

        sum= sum+i;

    }
    printf("Summation: %d\n", sum);

    return 0;
}
