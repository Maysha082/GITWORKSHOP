//square rectangle

#include<stdio.h>
int main()
{
    int i, j, n;

    printf("Enter a number: \n");
    scanf("%d",&n);

    for(i=1; i<=n;  i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("* ", j);
        }
        printf("\n");
    }
    return 0;
}
