//1-d array

#include<stdio.h>
int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int array[n], i;

    for(i=0; i<n; i++)
    {
        printf("Enter a value %d: \n", i+1);
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("The value %d: %d\n", i+1, array[i]);
    }
    return 0;
}
