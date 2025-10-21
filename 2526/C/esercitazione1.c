#include <stdio.h>
int main() {
  
  int anni;
  
  printf("Quanti anni hai? \n");
  scanf("%d",&anni);

  /*
  0 a 3 neonato
  3 a 12 bambino
  12 a 17 adolescente
  17 a 25 ragazzo
  25 in su uomo
  */
  
  // inserire altri else if 
  if(anni <= 3){
    printf("Sei un neonato");
  } else if (anni > 3 && anni <= 6){
    printf("Sei un bambino");
  } else{
    printf("Sei vecchio");
  }
  
  // Dichiarazione variabili tipo int
  //int i, mul;
  //int result = 0;

  // Tipo float
  //float a = 6.5;
  //float b = 1.0;

  /*
  if(result == 0){
    printf("result è uguale a 0\n");
  } else {
    printf("result è diverso da 0\n");
  }

  if(result == 0){
    printf("result è uguale a 0\n");
  } else if(result < 0) {
    printf("result è minore di 0\n");
  } else{
    printf("Bla");
  }
  */

  /* CICLI for e while
  printf("\nFOR\n");
  for(int x = 1; x <= 10; x++){
    printf("%d\n", x);
  }

  printf("\nWHILE\n");

  int cont = 0;
  while(cont <= 10){
    printf("%d\n", cont);
    cont++;
  }

  printf("\n");
  */

  
  /*
  for(double c = 1.0; c<= 10.0; c=c+0.1){
    printf("%f\n", c);
  }
  */
  return 0;
}