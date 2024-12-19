#include <stdio.h>

int main()
{
    int i = 1720;
    
    if (i <= 1500){
        printf("70元");
    }
    else {
        if ((i - 1500) % 100 ==0){
            printf("%d元", 70 + 10 * ((i - 1500)/100));
        }
        else {
            printf("%d元", 70 + 10 * ((i-1500)/100 + 1));
        }
    }
    
    
    return 0;
}
