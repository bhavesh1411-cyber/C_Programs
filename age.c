#include<stdio.h>

int main()
{
    char name[50];
    int age;
    printf("Enter your name\n");
    scanf("%s", name);
    
    printf("Enter your age\n");
    scanf("%d", &age);
     
    printf("Your name is %s and your age is %d\n", name, age);
    return 0;

}