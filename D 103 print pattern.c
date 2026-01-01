#include <stdio.h>

void printStars(int n) {
    if (n == 0)
        return;
    printf("*");
    printStars(n - 1);
}

void printPattern(int rows) {
    if (rows == 0)
        return;
    printPattern(rows - 1);
    printStars(rows);
    printf("\n");
}

int main() {
    printPattern(4);
    return 0;
}
