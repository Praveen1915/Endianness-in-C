//Convert One Endian to Another Endian

#include<stdio.h>

#define converted(value) ((0x000000ff & value) << 24) | ((0x000000ff & value) << 8) | ((0x000000ff & value) >> 8) | ((0x000000ff & value) >> 24)

int main(void)
{
    int value = 0x11223344;

    int convert = 0;

    printf("Value before converting = 0x%x\n", value);

    convert = converted(value);

    printf("Value after converting = 0x%x\n",convert);

    return 0;
}