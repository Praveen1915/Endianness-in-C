//Different Network types of Endianness in C

#include<stdio.h>
#include<winsock2.h>
#include<ws2tcpip.h>  // For compatibility

#pragma comment (lib, "Ws2_32.lib") // Link Winsock library

int main()
{
    WSADATA wsaData;
    int i;
    long x = 0x0112A380; /*Value to play with*/
    unsigned char *ptr = (char*) &x;

    //Initilize Winsock

    if (WSAStartup (MAKEWORD(2,2), &wsaData) != 0)
    {
        printf("WSStartup failed: %d\n",WSAGetLastError());
        return 1;
    }
    
    //Observe value in host byte order
    printf("x in hex: %lx\n",x);

    printf("x by bytes: ");

    for (i = 0; i < sizeof(long); i++)
    
        printf("%02x\t",ptr[i]);
        
    printf("\n");

    //Observe value in network byte order

    x = htonl(x);

    ptr = (unsigned char *)&x;

    printf("\nAfter htonl()\n");
    printf("x in hex: %lx\n",x);
    printf("x by bytes: ");

    for (i = 0; i < sizeof(long); i++)
    {
        printf("%02x\t",ptr[i]);
    }
    printf("\n");

    // Clean up Winsock
    WSACleanup();

    return 0;
}