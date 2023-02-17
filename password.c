#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int i,j;
    int u,l,s,d;
    char pass[12];
    for(i=0;i<n;i++) {
        u=0;
        l=0;
        s=0;
        d=0;
        scanf("%s", pass);
        
        if (strlen(pass)<6 || strlen(pass)>11) {
            printf("-1\n");
            continue;
        }
        
        for(j=0;j<strlen(pass);j++) {
            
            if (pass[j]>='A' && pass[j]<='Z') {
                u=1;
            }
            else if (pass[j]>='a' && pass[j]<='z') {
                l=1;
            }
            else if (pass[j]>='0' && pass[j]<='9') {
                d=1;
            }
            else if (pass[j]=='_' || pass[j]=='@' || pass[j]=='$' || pass[j]=='#') {
                s=1;
            }
        }
        
        if (u && l && d && s) {
            printf("1\n");
        }
        else 
            printf("-1\n");
    }
    
    return 0;
}