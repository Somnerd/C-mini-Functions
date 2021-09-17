#include <stdio.h>
#include <stdlib.h>

int recurse(unsigned long long int num){
  printf("R:%llu\n",num);
  return recurse(++num);
}

int curse(unsigned long long int num){
  printf("H:%llu\n",num);
  return curse(++num);
}

int main(){
  curse(0);
}
