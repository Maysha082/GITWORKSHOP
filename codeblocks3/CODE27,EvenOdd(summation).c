// printing summation of even or odd number in a range

#include<stdio.h>
int main()
{
    int start, end, i, evensum=0, oddsum=0;

    printf("Enter a starting number: \n");
    scanf("%d", &start);

    printf("Enter a ending number: \n");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        if(i%2==0)
        {
            printf("%d Even\n", i);


            evensum= evensum+i;
            }

        else
        {
            printf("%d Odd\n", i);


            oddsum= oddsum+i;
        }


    }
    printf("Summation of even numbers: %d\n", evensum);
    printf("Summation of odd numbers: %d\n", oddsum);

    return 0;
}
