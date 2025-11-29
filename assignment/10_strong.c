#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n < 0) {
        printf("Not a strong number\n");
        return 0;
    }

    int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    long long orig = n, sum = 0;

    if (n == 0) {
        sum = fact[0]; /* 0! = 1 */
    } else {
        while (n > 0) {
            sum += fact[n % 10];
            n /= 10;
        }
    }

    if (sum == orig)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}