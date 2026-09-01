#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: %d\n",age);
    scanf ("%d",&age);
    
    if (age<18)
        goto minor;

    else 
        goto adult;

    minor:
        printf ("You are minor and you can not vote\n");
        goto end;

    adult:
        printf ("You are adult and you are eligible to vote\n");

    end:
        printf ("Thank you for using this program\n");

    return 0;
}