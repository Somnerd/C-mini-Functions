#include <stdio.h>
#include <stdlib.h>

int swapint(int a,int b){
  int temp;

  temp = *a;
  a = *b ;
  b =  *temp;

  return a,b;
}
