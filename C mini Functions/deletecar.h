void delete(int plateNum){
  int i ;
  char pass,buf[1000];

  FILE *cars;
  FILE *tempf;

  cars  = fopen("cars.txt","r");
  tempf = fopen("tempf.txt","w");

  while(buf != NULL){
    if(plateNum != buf){
      fprintf("%s",buf);
    }
  }

  fclose(cars);
  fclose(temp);

}
