#include <stdio.h>

int main(void)
{
    unsigned int num = 12345;
    printf("Unsigned decimal: %u\n", num);
    printf("Unsigned octal: %o\n", num);
    printf("Unsigned hexadecimal: %x\n", num);
    printf("Unsigned hexadecimal (uppercase): %X\n", num);
    
    return 0;
}
