#include <stdio.h>
#include <stdbool.h> 

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  //myNumbers[0] = 33;
  //myNumbers[1] = 58;
  //myNumbers[2] = myNumbers[2]+8;
  //float myFloat[4];
  bool check = false;
  
  if(!check){
  printf("true");
  }else{
  printf("false");
  }
  printf("\n");
  printf("\n");
  
  //printf("%d", check);

  //printf("%d\n", myNumbers[0]);
  //printf("%f\n", myFloat[0]);
  
  //printf("%d\n", myNumbers[3]);
  
  //printf("\n");
  
  printf("*** for ***\n");
  for(int i=0; i < 4; i++){
  printf("%d\n", myNumbers[i]);
  }
  printf("**********\n");
  
  printf("*** while ***\n");
  int counter = 0;
  while(counter < 4){
  printf("%d\n", myNumbers[counter]);
  counter++;
  }
  printf("**********\n");
  printf("\n");
  
  // Add 8 to each array elements
  printf("*** for ***\n");
  	for(int i=0; i < 4; i++){
    printf("Before: %d\n", myNumbers[i]);
    myNumbers[i] = myNumbers[i] + 8;
  	printf("After: %d\n", myNumbers[i]);
  }
  printf("**********\n");
  
  
  // Add 8 to each array elements only if is even
  printf("*** for ***\n");
  	for(int i=0; i < 4; i++){
    printf("Before: %d\n", myNumbers[i]);
    myNumbers[i] = myNumbers[i] + 8;
  	printf("After: %d\n", myNumbers[i]);
  }
  printf("**********\n");
  
  
 
  return 0;
}