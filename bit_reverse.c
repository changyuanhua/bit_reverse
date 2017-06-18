#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
int main()
{
    uint16_t value =5;
    const uint16_t mask0 = 0x5555;
    const uint16_t mask1 = 0x3333;
    const uint16_t mask2 = 0x0F0F;
    const uint16_t mask3 = 0x00FF;

    value = (((~mask0) & value) >> 1) | ((mask0 & value) << 1);
    value = (((~mask1) & value) >> 2) | ((mask1 & value) << 2);
    value = (((~mask2) & value) >> 4) | ((mask2 & value) << 4);
    value = (((~mask3) & value) >> 8) | ((mask3 & value) << 8);

    printf("value=%d\n",value);
    return 0;
}
