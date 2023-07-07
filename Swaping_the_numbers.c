#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Enter the value of A and B\n");
  scanf("%d%d",&a,&b);
  printf("Befor Swapping A = %d and B = %d\n",a,b);
c = a;
a = b;
b = c;
  printf("After Swapping A = %d and B = %d",a,b);
  return 0;
}
