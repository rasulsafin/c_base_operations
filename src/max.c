int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);



    if (((int)a == a) && ((int)b == b)) {
        int x = (int)a;
        int y = (int)b;

        if (x == y) {
            printf("Numbers are equal");
            return 0;
        }

        return (x > y ) ? printf("%d", x) : printf("d", y);
    } else {
        printf("n/a");
    }

    return 0;
}
