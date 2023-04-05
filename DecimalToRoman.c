#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0)
    {
        if(num>=1000)
        {
            printf("M");
            num=num-1000;
        }
        else if(num>=900)
        {
            printf("CM");
            num=num-900;
        }
        else if(num>=500)
        {
            printf("D");
            num=num-500;
        }
        else if(num>=400)
        {
            printf("CD");
            num=num-400;
        }
        else if(num>=100)
        {
            printf("C");
            num=num-100;
        }
        else if(num>=90)
        {
            printf("XC");
            num=num-90;
        }
        else if(num>=50)
        {
            printf("L");
            num=num-50;
        }
        else if(num>=40)
        {
            printf("XL");
            num=num-40;
        }
        else if(num>=10)
        {
            printf("X");
            num=num-10;
        }
        else if(num>=9)
        {
            printf("IX");
            num=num-9;
        }
        else if(num>=5)
        {
            printf("V");
            num=num-5;
        }
        else if(num>=4)
        {
            printf("IV");
            num=num-4;
        }
        else if(num>=1)
        {
            printf("I");
            num=num-1;
        }
    }
    return 0;
}