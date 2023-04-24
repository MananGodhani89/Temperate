#include <stdio.h>
main() 
{
	
  int c=0,n;
  printf("Enter integer = ");
  scanf("%d", &n);
 
  do {
    n /= 10;
    ++c;
  } while (n != 0);

  printf("Number of digits = %d", c);
}

