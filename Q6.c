#include<stdio.h>
int main()
{
    int x;
    printf("Enter year\n");
    scanf("%d",&x);
    switch (1||2)
    {
        case 1: 
        {
            if(x%4==0)
            {
                printf("This is a leap year.");
                break;
            }
        }
        case 2:
        {
            if(x%4!=0)
            {
                printf("This not a leap year.");
                break;
            }
        }
    }
    return 0;
}