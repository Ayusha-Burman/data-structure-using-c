#include<stdio.h>
#include<string.h>
/*Password should have at least one numerical digit(0-9).
Password's length should be in between 8 to 15 characters.
Password should have at least one lowercase letter(a-z).
Password should have at least one uppercase letter(A-Z).
Password should have at least one special character ( @, #, %, &, !, $, *).*/
int main()
{ 
    int i;
    char A[20];
    scanf("%s",A);
    int length=0,u=0,l=0,d=0,s=0;
    int len=strlen(A);
    if(len>=8 && len<=15)
    {
        length=1;
    }
    for(i=0;i<len;i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
          u=1;
        }
        if(A[i]>=97 && A[i]<=122)
        {
          l=1;
        }
        if(A[i]>='0' && A[i]<='9')
        {
          d=1;
        }
        if(A[i]=='@'|| A[i]=='#'|| A[i]=='%'|| A[i]=='&'|| A[i]=='!'||A[i]=='$'||A[i]=='*')
        {
          s=1;
        }

    }
    if ( length==1 && u==1 && l==1 && d==1 && s==1)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    


}