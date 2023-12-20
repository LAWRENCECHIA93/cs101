#include <stdio.h>

int main()
{
    int n = 7;
    for(int i = 1;i<=7;i++){
        for(int j = 1;j<n;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",i);
        }
        printf("\n");
        n--;
    }
    return 0;
}

