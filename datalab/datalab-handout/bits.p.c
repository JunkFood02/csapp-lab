#line 144 "bits.c"
int bitXor(int x, int y)
{
  return ~(~x & ~y) &( ~(x & y));
#line 31 "<command-line>"
#include "/usr/include/stdc-predef.h"
#line 147 "bits.c"
}
#line 154
int tmin(void)
{
  return 1 << 31;
}
#line 166
int isTmax(int x)
{
  int temp1=  ~(x + x + 1);
  int temp2=  x ^( ~x + x);
  return (!temp1) & !!(temp2);
}
#line 180
int allOddBits(int x)
{
  int tmp=((  0xAA << 8) | 0xAA);
  tmp = tmp << 16 | tmp;
  return !((~(tmp&x))&tmp);
}
#line 193
int negate(int x)
{
  return ~x+1;
}
#line 207
int isAsciiDigit(int x)
{
  int high=(!(x>>6))&!((x>>4)^3);
  int low=x&0xf;
  return high;
}
#line 220
int conditional(int x, int y, int z)
{
  return 2;
}
#line 231
int isLessOrEqual(int x, int y)
{
  return 2;
}
#line 244
int logicalNeg(int x)
{
  return 2;
}
#line 260
int howManyBits(int x)
{
  return 0;
}
#line 276
unsigned floatScale2(unsigned uf)
{
  return 2;
}
#line 292
int floatFloat2Int(unsigned uf)
{
  return 2;
}
#line 309
unsigned floatPower2(int x)
{
  return 2;
}
