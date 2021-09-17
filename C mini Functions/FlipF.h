#include <stdlib.h>
#include <stdio.h>

int flipf(float a , float b){
  float a , b, temp;

  temp =  a;
  a = b;
  b = temp;

  return a,b;
}
