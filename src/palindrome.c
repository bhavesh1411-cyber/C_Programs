#include <stdio.h>

int main()
{
    int i, rev = 0, digit, original;

    printf("Enter a value");
    scanf("%d", &i);
     
    original=i;

    for (; i != 0; i = i / 10)
    {
        digit = i % 10;
        rev = rev * 10 + digit;
    }

    if (original == rev)
        {
            printf("It is a palindrome no and the no is %d\n",rev);
        }
    else 
        {
            printf("It is not a palindrome no and the no is %d\n",rev);
        }

    return 0;
}