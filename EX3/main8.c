#include <stdio.h>

int main()
{
    int x = 8;
    int y = 7;
    int z = 5;
    
    if (x < 0){
        printf("%d", (100 * (x * -1) + 10 * y + z)* -1);
    }
    else {
        printf("%d",100 * x + 10 * y + z);
    }
    
    return 0;
}
