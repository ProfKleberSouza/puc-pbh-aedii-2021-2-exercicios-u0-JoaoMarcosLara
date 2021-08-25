#include <stdio.h>

int main() {
  int tempo;
  int vel;
  int rend;
  int distancia;
  int litro;
  scanf("%d",&tempo);
  scanf("%d",&vel);
  scanf("%d",&rend);
  distancia = tempo * vel;
  litro = distancia/rend;
  printf("R = %d\n",rend);
  printf("V = %d\n",vel);
  printf("T = %d\n",tempo);
  printf("D = %d\n",distancia);
  printf("L = %d",litro);

  return 0;
}