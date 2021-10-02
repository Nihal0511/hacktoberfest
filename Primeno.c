#include <stdio.h> 

int main(void) {
  int n, i, c = 0;
  printf("Enter any integer number n:");
  scanf("%d", &n);
  if(n<0)
  {
    printf("Enter a positive integer value\n");
  }
  else
  {

  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
        break;
      }
  }

  if (c == 0) {
  printf("n is a Prime number");
  }
  if(c==1) {
  printf("n is not a Prime number");
  }
  return 0;    
}
