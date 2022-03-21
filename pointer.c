#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void sort(int mas[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int m = i;
        for(int j = i + 1; i < n; i++) {
            if(mas[j] < mas[m]) {
                m = j;
            }
        }

        swap(&mas[i], &mas[m]);
    }
}

int main() {
    /*
    int a = 5;
    int* b = &a;

    printf("%p %p\n%d %d\n", b, b + 1,*b, *(b + 1));

    int x = 3, y = 5;
    int* z = &x;
    printf("%d %d %d %d\n", *z, *(z + 1), *(z + 2), *(z + 3));
    */
    for (int i = 0; i < 10; i++){
            
        int ar[20] = {1, 2, 3, 4, 5};
        printf("%d\t", *(ar + i));
    }
    printf("\n");
    int n;
    scanf("%d", &n);

    int* mas = calloc(n, sizeof(int));

    mas[0] = mas[1] = 1;
    for(int i = 2; i < n; i++) {
        mas[i] = mas[i-1] + mas[i-2];
    }
    int t = mas[3];
    mas[3] = mas[6];
    mas[6] = t;
    for(int i = 0; i < n; i++) {
        printf("%d\t", mas[i]);
    }
    printf("\n");
    int qwerdcvghnm[45];
    free(mas);
}