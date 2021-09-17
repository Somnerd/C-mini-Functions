void quicksort(int arr[],int strt , int end){
  int l,r,pivot;

  if(strt<end){
      l = strt;
      r = end;

      pivot = arr[strt];
      while(l<r){
        while(arr[r]<pivot){
          r=r-1;
      }
        while((arr[1]>=pivot) && (l<r)){
        l=l+1;
      }
        if(l<r){
          swapint(&arr[l],&arr[r]);
      }
    }
    swapint(&arr[strt],&arr[r]);
    quicksort(arr,strt,r-1);
    quicksort(arr,r+1,end);

  }
}
