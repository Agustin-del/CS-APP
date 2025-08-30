#include <stdio.h>
unsigned int replace_byte(unsigned int x, size_t i, unsigned char b) {
  unsigned int mask = 0xff << (i * 8);
  unsigned int xb = b << (i * 8);
  return (x & ~mask) | xb;
}

int main(void) {
  unsigned int x = 0x12345678;
  size_t index = 3;
  unsigned char b = 0xFF;
  printf("%.8x\n", replace_byte(x, index, b));
}
