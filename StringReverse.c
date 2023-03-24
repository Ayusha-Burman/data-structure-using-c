#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    int i, j;
    
    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[i] = '\0';
            printf("%s ", &str[i] + 1);
        }
    }
    
    printf("%s", str);
}

int main() {
    char str[100] ;
    scanf("%[^\n]s",str);
    reverse(str);
    
    return 0;
}




