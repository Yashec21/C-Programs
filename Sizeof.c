#include <stdio.h>

int main()
{
    char ch ='A';
    int i = 11;
    float f=99.99f;
    double d=78.67345;

    printf("size of of all variable\n");

    printf("%lu\n",sizeof(ch)); // 1
    printf("%lu\n",sizeof(i));  // 4
    printf("%lu\n",sizeof(f));  // 4
    printf("%lu\n",sizeof(d));  // 8


    return 0;
}