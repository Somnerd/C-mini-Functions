
void bubble(int arr[]){

  int i , j;

    for ( i = 0; i < 10; i++) {
      for ( j = 9; j >= 0+i; j--) {
        if (arr[i] > arr[j]) {
          swapint(&arr[i],&arr[j]); // calling the swapint
        }
      }
    }
}
/*
This function goes along with the swapint function
*/
