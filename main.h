#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define TEST_DEFINE 8


uint8_t testValue8;
uint16_t testValue16;
char testValueString[128];
float testValueFloat;
double testValueDouble;


void initializationCode(void);
void applicationCode(void);


#endif