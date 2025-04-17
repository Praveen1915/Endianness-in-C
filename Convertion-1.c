//Convert One Endian to Another Endian

#include<stdio.h>

int main(void)
{
    int value = 0x11223344;

    int convert = 0;

    printf("Value before converting = 0x%x\n", value);

    convert |= ((0xff & value) << 24);
    convert |= (((0xff << 8) & value) << 8);
    convert |= (((0xff << 16) & value) >> 8);
    convert |= (((0xff << 24) & value) >> 24);

    printf("Value after converting = 0x%x\n",convert);

    return 0;
}