#include <stdio.h>

int main() {
    int i = 12345;
    int thousand, unit, new_i;
    
    thousand = (i / 1000) % 10;
    unit = i % 10;
    new_i = i - (thousand * 1000 + unit) + (unit * 1000 + thousand);
    
    printf("原數字: %d\n", i);
    printf("交換千位數和個位數後： %d\n", new_i);
    return 0;
}
