#include <stdio.h>          // header file

int gnum = 5;               // global variable

int main(void) {
    // ---- Data types & keywords ----
    int a = 10, b = 3;
    float pi = 3.14;
    char ch = 'B';

    int lnum = 50;           // local variable (only inside main)
    printf("global=%d local=%d\n", gnum, lnum);

    // ---- Arithmetic operators ----
    printf("sum=%d diff=%d mul=%d div=%d rem=%d\n", a + b, a - b, a * b, a / b, a % b);

    // ---- Relational operators ----
    printf("a>b: %d\n", a > b);
    printf("a==b: %d\n", a == b);

    // ---- Logical operators ----
    printf("a>b && b>0: %d\n", a > b && b > 0);
    printf("a<b || b>0: %d\n", a < b || b > 0);

    // ---- Precedence example ----
    int check = a + b > 10 && ch == 'B';  // arithmetic first, then relational, then logical
    printf("check=%d\n", check);

    return 0;
}