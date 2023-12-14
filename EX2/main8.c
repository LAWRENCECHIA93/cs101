#include <stdio.h>

int main()
{
   int x = -8;
   int y = 7;
   int z = 5;
   if (x<0){
       int sum = (x*-1)*100 + y*10 + z;
       printf("%d",sum*-1);
   }
   else {
       printf("%d", x*100 + y*10 + z);
   }
   return 0;
}

