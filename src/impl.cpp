#include "impl.h"
#include <math.h>

char* IntToBinaryRepresentation(char *buff,int value)
{
   constexpr unsigned int int_size = sizeof(int) * 8;
   for (unsigned int i = 0; i < int_size; i++)
   {
       buff[i] = '0' + static_cast<char>((value >> (int_size - 1 - i)) & 0x1);
   }
   buff[int_size] = '\0';

   return buff;
}

int BinaryInvert(int x,int p,int n)
{
    unsigned int mask = x;
    int out = 0;
    constexpr unsigned int int_size = sizeof(int) * 8;
    mask <<= (int_size - p);
    mask >>= (int_size - n);
    mask <<= p - n;
    out = mask^x;
    return out;
}

bool Quadro(int a,int b,int c, double& x1,double& x2)
{
    return false;
}
