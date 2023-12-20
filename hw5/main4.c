#include <stdio.h>

int main() {
    int i = 12345;
    int thou = (i / 1000) % 10;
    int unit = i % 10;
    int swapped_i = i + unit * 1000 - thou * 1000 - unit + thou;
    printf("%d\n", i);
    printf("%d\n", swapped_i);
    return 0;
}

