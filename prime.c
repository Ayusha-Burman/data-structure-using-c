#include <stdio.h>
// Write a program to print prime numbers in a range.
int main() {
    int sp,ep,i,j,flag;

    printf("Enter starting point: ");
    scanf("%d",&sp);

    printf("Enter ending point:");
    scanf("%d",&ep);

    for (i = sp; i <ep; i++)
    { flag=0;
        for (j = 2; j<i; j++)
        {
            if (i%j == 0)
            {
               flag=1;
               break;
            }
        }
       // printf("%d", flag);
        if (flag==0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}