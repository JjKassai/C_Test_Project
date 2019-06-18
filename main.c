#include "main.h"

void main (void)
{
    initializationCode();

    while(1)
    {
        applicationCode();
    }
}


void applicationCode(void)
{
    testValue8--;
    scanf("%s", testValueString);
    printf("%d:  %s", testValue8, testValueString);
    printf("\r\n");
}


void initializationCode(void)
{
    testValue8 = 10;
}
