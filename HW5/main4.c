#include <stdio.h>

int main() {
    int i = 12345;
    int reversed = 0
  
    while (i > 0) {
        reversed = reversed * 10 + (i % 10); 
        i = i / 10; 
    }

    printf(" %d\n", reversed);
    
    return 0;
}
