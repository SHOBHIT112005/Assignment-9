#include<stdio.h>
int main()
{
    int x;
    float bill;
    printf("Enter the number of units of electricity consumed\n");
    scanf("%d",&x);
    switch (1||2||3||4)
    {
        case 1:
        {
            if(x<=50)
            {
                bill = (0.5)*x;
                break;
            }
        }
        case 2:
        {
            if(x<=150)
            {
                bill = (0.5)*50 + (0.75)*(x-50);
                break;
            }
        }
        case 3:
        {
            if(x<=250)
            {
                bill = (0.5)*50 + (0.75)*100 + (1.2)*(x-150);
                break;
            }
        }
        case 4:
        {
            if(x>250)
            {
                bill = (0.5)*50 + (0.75)*100 + (1.2)*100 + (1.5)*(x-250);
                bill = bill + bill*(0.2);
                break;
            }
        }
    }
    printf("Your total electricity bill is %f\nNote : If units more than 250 are consumed then a surcharge of 20%% will be applied to your bill.\n",bill);
    return 0;
}