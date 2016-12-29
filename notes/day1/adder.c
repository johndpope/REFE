#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = sum(a, b);
    printf("The sum of those numbers is %d\n", c);

    return 0;
}
