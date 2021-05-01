#include <stdio.h>

int add(int, int);

int main(void)
{
  int a,b;

  printf("enter two nos.\n ");
  scanf("%d %d", &a, &b);

  printf("add_result: %d \n", add(a,b));

  return 0;

}
