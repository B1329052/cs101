#include <stdio.h>

int main() {
    int i = 12345;
    int thousand = (i / 1000) % 10;
    int unit = i % 10;
    int new_i = 0;
    
    i = i - (thousand * 1000) - unit;
    new_i = i + (unit * 1000) + thousand;
    printf("%d", new_i);
    return 0;
}
