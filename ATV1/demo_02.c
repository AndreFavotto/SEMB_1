#include <stdio.h>
const int A = 20;

// chamada do startup.S para inicializacao do microcontrolador
void SystemInit(void)
{
}

int main(void)
{
    static char buffer[64];
    int b = 10;
    snprintf(buffer,63,"You won %d of %d points",b,A);

    return 0;
}
