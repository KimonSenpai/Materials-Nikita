#include <stdio.h>
#include <math.h>


//1 + x/1! + x^2/2! + ...

double myexp(double x, int n) {
    unsigned long long i, f = 1;
    double xx = 1, s = 1;
    for (i = 1; i < n; i++) {
        xx *= x;
        f *= i;
        s += xx/f;
    }
    return s;

}

double myexp2(double x, int n) {
    unsigned long long i, d;
    double xx = 1, s = 1, xxx;
    for (i = 1; i < n; i++) {
        xx *= x;
        xxx = xx;
        for (d = 1; d <= i; d++)
            xxx /= d;
        s += xxx;
    }
    return s;

}

int main() {
    double x;
    int n;
    scanf("%lf", &x);
    for (n = 1; n < 40; n++) {
        double a = myexp(x, n), b = exp(x), c = myexp2(x, n);
        printf("%d. %14lf\t%14lf\t%.15lf\t%.15lf\t%.15lf\n", n, fabs(c-b)/b, fabs(a-b)/b, b, c, a);
    }
    printf("\n");
}