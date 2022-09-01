#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    if (scanf("%lf", &x) != 1) {
        printf("n/a");
        return 0;
    }

    y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1 / 3) - 1e3) * x + 3) /
            (x * x / 2) - pow(x * (10 + x), (2/x) ) - 1.01;

    printf("%..1lf\n", round(y * 100) / 100);

    return 0;
}
