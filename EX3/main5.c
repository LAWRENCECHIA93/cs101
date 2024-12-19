#include <stdio.h>

int main()
{
    int i = 90;
    
    if (i <= 30){
        printf("免費");
    }
    else if (i >= 240){
        printf("240元");
    }
    else {
        if ((i - 30) % 30 == 0){
            printf("%d元",30 * ((i - 30) / 30 ));
        }
        else{
            printf("%d元",30 *(((i - 30) / 30) + 1));
        }
    }
    
    
    return 0;
}
