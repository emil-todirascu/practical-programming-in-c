#include <stdio.h>

int main()
{
    int val = 0xCAFE;

    // check last bits
    int possibilties[] = {0xF, 0xE, 0xD, 0xB, 0x7};
    for (int i = 0; i < 5; i++)
    {
        if ((val & 0xF) == possibilties[i])
        {
            printf("At least three of last four bits are on\n");
            break;
        }
    }

    // reverse byte order
    int reversed = ((val & 0xFF) << 8) | ((val & 0xFF00) >> 8);
    printf("Reversed: %X\n", reversed);

    // rotate four bits
    int rotated = (val << 4 | val >> 12) & 0xFFFF;
    rotated = (rotated << 4 | rotated >> 12) & 0xFFFF;
    rotated = (rotated << 4 | rotated >> 12) & 0xFFFF;
    printf("Rotated: %X\n", rotated);

    return 0;
}
