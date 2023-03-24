#include<stdio.h>
#include<math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))
int TopLeft(int row, int col)
{
    int topleft = min(row,col)-1;
    return topleft;
}

int TopRight(int row, int col)  
{
    int topright=min(row,9-col)-1;
    return topright;
}  
int BottomLeft(int row, int col)
{
    int bottomleft = 8 - max(row,9-col);
    return bottomleft;
}
int BottomRight ( int row, int col)
{
    int bottomright = 8 - max(row,col);
    return bottomright;
}
int main()
{
    int row,col;
    printf("Enter the row index: ");
    scanf("%d",&row);
    printf("\nEnter the column index: ");
    scanf("%d",&col);
   int a =  TopLeft(row,col);
   int b =  TopRight(row,col);
   int c =  BottomLeft(row,col);
   int d =  BottomRight(row,col);
   int sum=a+b+c+d;
   printf("\n%d",sum);

}

