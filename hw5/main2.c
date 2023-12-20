#include <stdio.h>

int main() {
    double pi = 0.0f;
    int j = 1;
    for (int n = 0; n < 1000000; n++) {
        pi += j * 4.0 / (2 * n + 1);
        j = -j;
    }
    printf("%.5f\n", pi);

    return 0;
}
