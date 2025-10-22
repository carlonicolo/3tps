#include <stdio.h>
int main()
{

  int anni;

  printf("Quanti anni hai? \n");
  scanf("%d", &anni);

  /*
  Stampa:
  0 a 3 neonato
  3 a 12 bambino
  12 a 17 adolescente
  17 a 25 ragazzo
  25 in su uomo
  */

  if (anni < 3)
  {
    printf("Sei un neonato");
  }
  else if (anni >= 3 && anni <= 12)
  {
    printf("Sei un bambino");
  }
  else if (anni > 12 && anni <= 17)
  {
    printf("Sei un adolescente");
  }
  else if (anni > 17 && anni <= 25)
  {
    printf("Sei un ragazzo");
  }
  else if (anni > 25)
  {
    printf("Sei un uomo");
  }

  return 0;
}