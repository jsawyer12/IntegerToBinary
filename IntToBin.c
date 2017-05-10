#include <stdio.h>

int power(int base, int exponent) {
    int product;
    if (exponent == 0) return 1;
    if (exponent > 0) product = base;
    if (exponent > 1) {
        for (int k = 1; k < exponent; k++) {
            product *= base;
        }
    }
    return product;
}

void printBin(int integer, int n) {
    int d = integer;
    while (n != -1) {
        if ((d - power(2, n)) >= 0) {
            //printf("%d", d);
            d -= power(2, n);
            printf("1");
            //printf(" - %d = %d\n", power(2, n), d);
        }
        else printf("0");
        n--;
    }
    printf("\n");
}

int main(void) {
    int i = 1023, n = -1, pow = 0;
    while (i+1 > power(2, n+1)) { //plus 1 for when i = 2^n 
        n++;
    }
    printf("%d in binary is: ", i);
    printBin(i, n);
}