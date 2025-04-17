//C program to print the memory address and content of our value

#include<stdio.h>

int main(void)
{
    unsigned int x = 0x11223344;

    char* c = (char*) &x;

    for (int i = 0; i < 4; i++)
    {
        printf("Address of 0x%x = %d \n",c[i], &c[i]);
    }
    return 0;
}