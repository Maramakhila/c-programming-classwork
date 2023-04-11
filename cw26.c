#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        base = base * 10;
        decimal = decimal / 2;
    }

    printf("Binary equivalent: %d", binary);

    return 0;
}
