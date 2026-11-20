#include <stdio.h>
#include <stddef.h>
int main(void)
{
    char a[2];
    short int b[2];
    unsigned short int c[2];
    int d[2];
    unsigned char e[2];
    wchar_t f[2];
    long long int g[2];
    size_t h[2];
    float i[2];
    double j[2];
    signed int k[2];
    printf("char: %td\n", (char*)&a[1] - (char*)&a);
    printf("short int: %td\n", (char*)&b[1] - (char*)&b);
    printf("unsigned short int: %td\n", (char*)&c[1] - (char*)&c);
    printf("int: %td\n", (char*)&d[1] - (char*)&d);
    printf("unsigned char: %td\n", (char*)&e[1] - (char*)&e);
    printf("wchar_t: %td\n", (char*)&f[1] - (char*)&f);
    printf("long long int: %td\n", (char*)&g[1] - (char*)&g);
    printf("size_t: %td\n", (char*)&h[1] - (char*)&h);
    printf("float: %td\n", (char*)&i[1] - (char*)&i);
    printf("double: %td\n", (char*)&j[1] - (char*)&j);
    printf("signed int: %td\n", (char*)&k[1] - (char*)&k);
    return 0;
}
