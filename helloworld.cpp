#include "stdio.h"
int add(int x, int y)
{
   return x + y;
}


int main()
{
   int sum = add(2, 3);
   printf("sum=%d\n", sum);
   printf("Hello World!\n");
}