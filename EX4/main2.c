#include <stdio.h>

int main() {
    double pi = 4.0;
    int flog = 1;
    int x = 0;
    long ipi = 0;
    
    for (int i = 3; i < 1000000; i+=2) {
        if (flog == 0) {
            pi += (4.0 / i);
            flog ++;
        }
        else {
            pi -= (4.0 / i);
            flog --;
        }
        ipi = pi * 100000;
        if (ipi == 314159) {
            x = i;
            break;
        }
    }
    printf("%d %.5f", x, pi);
    return 0;
}
