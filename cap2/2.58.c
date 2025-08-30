#include <stdio.h>
int is_little_endian() {
  size_t x = 1;
  return x & 1;
}

int main(void)
{
  printf("%d\n", is_little_endian());
}
