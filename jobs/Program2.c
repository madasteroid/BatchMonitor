
#include <stdio.h>
long factorial(int);
int main(void) {
  int n = 10;
  long f;
  f = factorial(n);
  printf("%d! = %ld \n", n, f);
}
long factorial(int n){
  if(n==0)
  return 1;
  else
  return(n*factorial(n-1));
}

