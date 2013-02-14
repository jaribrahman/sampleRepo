#include <stdio.h>

int main() {

  int *ip, i = 8;

  ip = &i;

  printf("i is %d and resides at %p\n", i, ip);

  return 0;
}
