#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0;
    double term;
    int x = 0;
    double target = 3.14159;
    for (int i = 0;; i++) {
        term = pow(-1, i) * (4.0 / (2 * i + 1));
        pi += term;
        x++;
        double y = fabs(pi - target);
        if (y < 0.00001) {
            break;
        }
    }
    printf("最小x為 = %d\n", x);
    printf("PI = %.5f\n", pi);
    return 0;
}
