#include "stdlib.h"
#include "stdio.h"
#include "windows.h"

int main(){

  printf("The Alarm is going to alarm once per ten minutes .");
  printf("Times :");
  scanf("%d",count);

  for(i = 1;i <= count;i++){
    sleep(10);
    printf("\a");
  }
  return 0;
}
