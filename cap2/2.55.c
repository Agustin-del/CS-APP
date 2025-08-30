#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
  for (size_t i = 0; i < len; i++)
  {
    printf("%.2x", start[i]);
  }
  printf("\n");
}

void show_int(int x)
{
  show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
  show_bytes((byte_pointer)&x, sizeof(float));
}

void show_short(short x)
{
  show_bytes((byte_pointer)&x, sizeof(short));
}

void show_long(long x)
{
  show_bytes((byte_pointer)&x, sizeof(long));
}

void show_double(double x)
{
  show_bytes((byte_pointer)&x, sizeof(double));
}

int main(void)
{
  int numero = 5;
  float numero2 = 5.0f;
  short nro = 5;
  long nro2 = 5;
  double nro3 = 5.0;

  show_int(numero);
  show_float(numero2);
  show_short(nro);
  show_long(nro2);
  show_double(nro3);
}
