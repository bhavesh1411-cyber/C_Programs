#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char character;
};

int main(void)
{
    union Data d;

    d.number = 30;
    printf("Number is %d\n", d.number);

    d.decimal = 53.43;
    printf("Decimal is %.1f\n", d.decimal);
    
    d.character = 'B';
    printf("Character is %c\n", d.character);

    return 0;
}