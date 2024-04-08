#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Machine is 64 bits\n");
    printf("Data Type\tSize\t\tMin\t\tMax\n");
    printf("Char\t\t%d\t\t%d\t\t%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Unsigned Char\t%d\t\t0\t\t%d\n", sizeof(unsigned char), UCHAR_MAX);
    printf("Short\t\t%d\t\t%d\t\t%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("Int\t\t%d\t\t%d\t%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("Unsigned Int\t%d\t\t0\t\t%u\n", sizeof(unsigned int), UINT_MAX);
    printf("Unsigned Long\t%d\t\t0\t\t%lu\n", sizeof(unsigned long), ULONG_MAX);
    printf("Float\t\t%d\t\t%f\t%f\n", sizeof(float), FLT_MIN, FLT_MAX);

    return 0;
}