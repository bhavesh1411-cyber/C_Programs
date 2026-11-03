#include <stdio.h>

union value
{
    int integervalue;
    float decimalvalue;
};

struct Item
{
    char type;
    union value value;
};

int main(void)
{
    struct Item item;

    item.type = 'I';
    item.value.integervalue = 100;

    printf("Type: %c\n", item.type);
    printf("Value: %d\n", item.value.integervalue);
    
    return 0;
}