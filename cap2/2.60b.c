#include <stdio.h>
unsigned replace_byte_ptr(unsigned x, int i, unsigned char b)
{
  unsigned char *p = (unsigned char*)&x;
  p[i] = b;
  return x;
}
int main ()
{
  unsigned x = 0x12345678;

  printf("%x\n", replace_byte_ptr(x, 0, 0xAB));
  printf("%x\n", replace_byte_ptr(x, 2, 0xAB));
}
