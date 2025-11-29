#include <stdio.h>

int main(void) {
    int n;
    if (printf("Enter number of terms: ") < 0) return 1;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            printf("%lld", a);
        } else if (i == 1) {
            printf(" %lld", b);
        } else {
            long long c = a + b;
            printf(" %lld", c);
            a = b;
            b = c;
        }
    }
    printf("\n");
    return 0;
}