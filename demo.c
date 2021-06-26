#include "stdio.h"
main()
{
  int x= 5,y= 10;
  int temp = x;
  y = x;
  x = temp;
  printf("%d %d",x,y);
}
