#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    switch(1||2)
    {
        case 1:
        {
            if(x%2==0)
            {
                printf("The given number is even.\nThe upper nearest odd number is %d",(x+1));
                break;
            }
        }
        case 2:
        {
            if(x%2!=0)
            {
                printf("The given number is odd.");
                break;
            }
        }
    }
    return 0;
}