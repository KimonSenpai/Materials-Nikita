#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > c) {
        int d;
        d = c;
        c = a;
        a = d;
    }
    if (b > c) {
        int d;
        d = b;
        b = c;
        c = b;
    }
    
}