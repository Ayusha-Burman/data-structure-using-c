#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={};
    printf("Enter the string to check if it is palindrome or not: ");
    gets(str);
    int l=0;
    int h=strlen(str)-1;
    int i;
    int flag;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            flag=0;
        }
           
        else
        {
            flag = 1;
          

        }
        l++;
        h--;
    }
    if(flag==0)
    {
       printf("%s is not a palindrome word", str);
    }
    else
    {
     printf("%s is a palindrome word", str);
    }
    return 0;
}