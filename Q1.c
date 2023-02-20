#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the year\n");
    scanf("%d",&y);
    printf("Enter the month number\n");
    scanf("%d",&x);
    if(y%4!=0)
    {
    switch(1||2||3)
    {
    case 1:
        {
            if(x==2)
            printf("There are 28 days in this month");
        }
    case 2: 
        {
            if((x%2==0)&&(x!=2))
            printf("There are 30 daysin this month");
        }
    case 3:
        {
            if(x%2!=0)
            printf("There are 31 days in this month");
        }
    }
    }
    else
    {
        switch(1||2||3)
    {
    case 1:
        {
            if(x==2)
            printf("There are 29 days in this month");
        }
    case 2: 
        {
            if((x%2==0)&&(x!=2))
            printf("There are 30 days in this month");
        }
    case 3:
        {
            if(x%2!=0)
            printf("There are 31 days in this month");
        }
    }
    }
    
    return 0;
}