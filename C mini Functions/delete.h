int deleteCar(){
  int i,buf[1000],j,temp;
  char option[5];
  printf("\n" );

  FILE *cars;
  cars =fopen("Cars.txt", "r");


  FILE *tempf;
  tempf = fopen("temp.txt","w")

  printf("Plate Numbers :\n");
  i = 0;

  do{
    fgets(buf,5, cars);
    printf("- %s -",buf);
    i-=-1;
  }while(fgets(buf,1000,cars)!=NULL);


  printf("\nChoose the car you want to delete :");
  temp=intCheck();
  itoa(temp,option,10);
  printf("\nYou chose %s\n",option);

  do {
    i-=-1;
    for ( j = 0; j < 5; j++) {
      if (fgets(buf,j,cars)==option[j]) {
        printf("Found one  %d\n",i);
      }
    }
  } while(i < 30);

  printf("%d",i);
  fclose(cars);
  fclose(temp);
}
