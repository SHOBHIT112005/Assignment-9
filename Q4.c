#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("Enter three numbers\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("Please choose an option\n1-Check whether a given set of three numbers are lengths of an isosceles or not\n2-Check whether a given set of three numbers are lengths of sides of a right angle triangle or not\n3-Check whether a given set of three numbers are equilateral triangle or not\n4-Exit\n");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
        {
            if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
            printf("The numbers are the sides of an isoceles triangle.");
            else
            printf("The numbers are not the sides of an isoceles triangle.");
            break;
        }
        case 2:
        {
            if((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a))
            printf("The numbers are the sides of an right triangle.");
            else
            printf("The numbers are not the sides of an right triangle.");
            break;
        }
        case 3:
        {
            if((a==b)&&(b==c))
            printf("The numbers are the sides of an equilateral triangle.");
            else
            printf("The numbers are not the sides of an equilateral triangle.");
            break;
        }
        case 4:
        {
            printf("You have exited the system.");
            break;
        }
    }
    return 0;
}