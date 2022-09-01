#include <stdio.h>

int main() {
    double a, b;

    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("n/a");
        return 0;
    }


    if (((int)a == a) && ((int)b == b)) {
        int x = (int)a;
        int y = (int)b;

        if (sum(x, y) == 0) {
            printf("n/a");
            return 0;
        }

        printf("%d %d %d", sum(x, y), sub(x, y), mul(x, y));

        if (y == 0) printf(" n/a");
        else
            printf(" %d", div(x, y));
    } else {
        printf("n/a");
    }

    return 0;
}



int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}

