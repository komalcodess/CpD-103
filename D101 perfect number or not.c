#include <stdio.h>

int sumDivisors(int n, int i) {
    if (i == 0)
        return 0;
    if (n % i == 0)
        return i + sumDivisors(n, i - 1);
    return sumDivisors(n, i - 1);
}

int main() {
    int n = 6;

    if (sumDivisors(n, n / 2) == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
