#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{ 
    int t;
    int i=0;
    scanf("%d",&t);
    
    
   
    
    while(t--)
    {
        char str[100001];
        scanf(" %[^\n]", str);
       // printf("%s", str);
       int j;
       j=strlen(str);
       char str1[100001];
       char str2[100001];
       char c;
       int k=0;
       int m;
       while(i<j)
       {
        
         c=str[i];
         //printf("%c\n",c);
         if(isalnum(c)!=0)
         {
            str1[k]=c;
            k++;
         }
         
         i++;
       }
       //printf("%s\n",str1);
       
       for(m=0;m<strlen(str1);m++)
       {
        str2[m]=tolower(str1[m]);
       }
       //printf("%s",str2);
       int l=0;
       int h=strlen(str2)-1;
       int flag=0;
       while(h>l)
    {
        if(str2[l++]!=str2[h--])
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
       printf("NO\n");
    }
    else
    {
     printf("YES\n");
    }
    memset(str1,0,sizeof(str1));
    memset(str2,0,sizeof(str2));
    memset(str,0,sizeof(str));
    //str1[0]='\0';
   // str2[0]='\0';
    k=0;
    m=0;
    i=0;
    //str[0]='\0';
    }
    return 0;
}