#include<stdio.h>
int main()
{
    int day;

    printf("Enter day: ");
    scanf("%d", &day);

    if(day>=0)
    {
        day= day%7;

        switch(day)
        {
        case 1:
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;

        }
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
