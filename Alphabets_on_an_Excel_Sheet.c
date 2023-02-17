#include <stdio.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100
int main()
{
    int n;
    scanf("%d",&n);
    char matrix[MAX_ROWS][MAX_COLS];
    char target;
    int i;
    for(i=0;i<n;i++)
    {
     scanf("%s", matrix[i]);
    }
    scanf(" %c",&target);
     int target_row = -1, target_col = -1;
    for (int i = 0; i < n; i++) 
    {
        char* found = strchr(matrix[i], target);
        if (found != NULL) {
            target_row = i;
            target_col = found - matrix[i];
            //printf("%d\n",target_col);
            //printf("%s\n",found);
            //printf("%s\n",matrix[i]);
            break;
        }
    }
    if (target_row == -1 || target_col == -1)
     {
        printf("-1\n");
     }
     else {
        // Print characters in same row before target
        for (int j = 0; j < target_col; j++) {
            printf("%c", matrix[target_row][j]);
        }
        printf("\n");

        // Print characters in same column before target
        for (int i = 0; i < n; i++) {
            if (i != target_row && matrix[i][target_col] < target && i < target_row) {
                printf("%c", matrix[i][target_col]);
            }
        }
        printf("\n");
    }
    return 0;
}