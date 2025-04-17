//C program to set the most significant byte of every integer in the array data to 0.

#include<stdio.h>

#define SIZE 8

unsigned int value[SIZE] =
{0x12345678, 0x9ABCDEF0, 0x11223344, 0x88776655, 0xABCDEF99, 0x77CCDDFF, 0x885544AA, 0xBBCCAADD};

void printArray(unsigned int *ptr, size_t s)
{
    for (size_t i = 0; i < s; i++)
    {
        printf("0x%08X ",ptr[i]);
    }
    printf("\n");
}

int main(void)
{
    char *p = (char*) value;

    puts("Intial values:\n");
    printArray(value,SIZE);

    for (size_t i = 0; i < sizeof(value); i += 4)
    {
        *(p + i) = 0x0;
    }

    puts("After:\n");
    printArray(value,SIZE);

    return 0;
}