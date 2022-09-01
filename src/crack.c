#include <stdio.h>

int main() {
    double x, y;
    if ((scanf("%lf %lf", &x, &y) !=2)) {
        printf("n/a");
        return 0;
    } else {
        if (x * x + y * y < 25) {
            printf("GOTCHA");
            return 0;
        } else {
            printf("MISS");
        }
    }

    return 0;
}
