#include <stdio.h>
#include <math.h>

int main() {
    double pi = 4.0;  
    double term;      
    int i, sign = -1; 


    double target = 3.14159;
    
    
    for (i = 1; fabs(pi - target) >= 0.00001; i++) {
        term = 4.0 / (2 * i + 1);   
        pi += sign * term;          
        sign *= -1;                  
    }
  
    printf("計算得到的 pi 值為：%.5f\n", pi);
    printf("總共迴圈執行了 %d 次\n", i);
    
    return 0;
}
