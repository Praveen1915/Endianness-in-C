//Determine Endianness in C

#include<stdio.h>

int main()
{
    unsigned int a = 1;

    char *c = (char*) &a;

    if (*c)
    
        puts("Your Mechine is Little-Endian Mechine");
    else
        puts("Your Mechine is Big/Most Endian");
    
    return 0;
}