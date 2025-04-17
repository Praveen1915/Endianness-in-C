//Convert One Endian to Another Endian

#include<stdio.h>

int main(void)
{
    int value = 0x11223344;

    int convert = 0;

    printf("Value before converting = 0x%x\n", value);

    convert |= ((0x000000ff & value) << 24);
    convert |= ((0x0000ff00 & value) << 8);
    convert |= ((0x00ff0000 & value) >> 8);
    convert |= ((0xff000000 & value) >> 24);

    printf("Value after converting = 0x%x\n",convert);

    return 0;
}