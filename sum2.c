#include <stdio.h>

int main() 
{
    int i,n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=0;i<=n;i++) 
    {
        sum = i + sum;      
                    
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}