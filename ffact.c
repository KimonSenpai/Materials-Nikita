#include <stdio.h>


int ffact(int n) {
    int f = 1, i;
    int s = 0;
    for(i = 1; i <= n; i++) {
        f *= i;//f = f * i
        s += f;
    }
    return s;
}


int main() {

    int a = ffact(5)*ffact(7);
    printf("%d", a);
    return 0;
}