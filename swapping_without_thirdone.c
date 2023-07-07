#include <stdio.h>

int main(void) {
  int a,b;
  printf("Enter the value of A and B\n");
  scanf("%d%d",&a,&b);
  printf("Befor Swapping A = %d and B = %d\n",a,b);
a = a+b;
b = a-b;
a = a-b;
  printf("After Swapping A = %d and B = %d",a,b);
  return 0;
}
