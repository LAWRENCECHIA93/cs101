#include <stdio.h>

int main()
{
    int i = 16;
    
    if((i & (i-1)) == 0){
        printf("True");
    }
    else {
        printf("False");
    }
    
    return 0;
}
