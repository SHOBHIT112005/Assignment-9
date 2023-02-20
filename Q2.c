#include<stdio.h>
int main()
{
    int x,y,o;
    printf("Please enter two numbers\n");
    scanf("%d\n%d",&x,&y);
    printf("Please enter the option number\n1-Addition\n2-Substraction\n3-Mutliplication\n4-Division\n5-Exit\n");
    scanf("%d",&o);
    switch (o)
    {
        case 1: 
        {
            printf("The addition of %d and %d is %d.",x,y,x+y);
            break;
        }
        case 2:
        {
            printf("The substraction of %d and %d is %d.",x,y,x-y);
            break;
        }
        case 3:
        {
            printf("The multiplication of %d and %d is %d.",x,y,x*y);
            break;
        }
        case 4:
        {
            printf("The division of %d and %d is %d.",x,y,x/y);
            break;
        }
        case 5:
        {
            printf("You have exited the syatem.");
            break;
        }
    }
    return 0;
}