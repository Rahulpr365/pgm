#include <stdio.h>

void odd_even(int n) {
    if (n % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

void positive_negative(int n) {
    if (n > 0) {
        printf("The number is positive\n");
    } else if (n < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    odd_even(n);
    positive_negative(n);

    printf("The program completed successfully\n");

    return 0;
}
