// printing even or odd number in a range

#include<stdio.h>
int main()
{
    int start, end, i;

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
    }
    return 0;
}
