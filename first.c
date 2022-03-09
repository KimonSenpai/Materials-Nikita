#include <stdio.h> //библиотека ввода/вывода
#include <math.h>  //мат функции
//Герберт Шилдт
int main() {
    //bool b = true;//boolean - логический тип

    //целочисленные типы данных
    short s; //2b, -32768 ~ 32767
    int i = 0; //2-4b
    long l; //4b
    long long ll; //8b

    unsigned short us; //2b, 0 ~ 65535

    //дробные
    float f; //4b
    double d; //8b
    long double ld; //8-64b

    double div1, div2, mod;

    div1 = 5 / 2; // 5 = 101, 2 = 010, 5^2 = 111 = 7
    div2 = 5 / 2.0;
    mod = 15 % 4;

    if(div1 < 3) {

    } else {

    }
    /*
    <
    >
    <=
    >=
    == - equal
    != - not equal

    && - and
    || - or
    ! - not
    */

    if(5%2)
        printf("odd\n");
    else
        printf("even\n");

    if(!i)
        printf("zero\n");

    printf("Hello world!\n%lg %lg %lg", div1, div2, mod);
    printf("Hello world!\n%d %d", i, !i);
    
}