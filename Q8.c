#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer\n");
    scanf("%d",&x);
    switch(1||2)
    {
        case 1:
        {
            if(x<0)
            {
                printf("%d converted to positive integer as %d",x,x*(-1));
                break;
            }
        }
        case 2:
        {
            if(x>0)
            {
                printf("%d converted to negative integer as %d",x,x*(-1));
                break;
            }
        }
    }
    return 0;
}