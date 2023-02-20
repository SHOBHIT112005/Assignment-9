#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter coefficients of quadratic equation ax*x + bx + c = 0\n");
    scanf("%f\n%f\n%f",&a,&b,&c);
    switch(1||2||3)
    {
        case 1:
        {
            if(b*b - 4*a*c == 0)
            {
                printf("The root(s) of the given quadration equation is/are %f.",((b*(-1))/(2*a)));
                break;
            }
        }
        case 2:
        {
            if((b*b - 4*a*c) > 0)
            {
                printf("The roots of given quadratic equation are %f and %f.",(((b*(-1))+ pow((b*b - 4*a*c),0.5))/(2*a)),(((b*(-1)) - pow((b*b - 4*a*c),0.5))/(2*a)));
                break;
            }
        }
        case 3:
        {
            if((b*b - 4*a*c) < 0)
            {
                float x,y;
                x = (b*(-1))/(2*a);
                y = (pow((4*a*c - b*b),0.5))/(2*a);
                printf("The roots of the given quadratic equation are %f + i%f.",x,y);
                printf(" and  %f - i%f",x,y);
                break;

            }
        }
    }
    return 0;
}