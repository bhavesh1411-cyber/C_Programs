#include <stdio.h>

int main()
{
    // 1. Declaring 
    int num = 10;       
    int *ptr;           

    // 2. Assigning an address to pointer 
    ptr = &num;           

    // 3. Dereferencing the pointer
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value stored in ptr (address of num): %p\n", (void*)ptr);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr);

    // Changing value through the pointer
    *ptr = 20;             
    printf("New value of num after *ptr = 20: %d\n", num);

    // 4. Pointer to a pointer
    int **pptr;        
    pptr = &ptr;          

    printf("\nAddress of ptr: %p\n", (void*)&ptr);
    printf("Value stored in pptr (address of ptr): %p\n", (void*)pptr);
    printf("Value pointed to by pptr (*pptr = ptr's value = address of num): %p\n", (void*)*pptr);
    printf("Double dereference (**pptr = value of num): %d\n", **pptr);

    return 0;
}