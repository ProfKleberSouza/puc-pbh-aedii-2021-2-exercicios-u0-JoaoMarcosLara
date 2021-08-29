#include <stdio.h>
// \ deixei "\"," |" salvos pois meu pc nao tem barra invertida e tenho que usar alt+9+2 e buga o cod tudo :)//
void triangulo(int lado1,int lado2,int lado3){
  if(lado1+lado2 > lado3 && lado2+lado3 >lado1 && lado1+lado3>lado2 ){
    if(lado1 == lado2 && lado2 == lado3){
      printf("triangulo equilatero");
    }else if(lado1 == lado2 ||lado2  == lado3 ||lado1 == lado3){
      printf("triangulo isoceles");
    }else{
      printf("triangulo escaleno");
    }
  }else{
    printf("os lados nao formam um triangulo");
  }


}

int main() {
  int lado1;
  int lado2;
  int lado3;
  scanf("%d",&lado1);
  scanf("%d",&lado2);
  scanf("%d",&lado3);
  triangulo(lado1,lado2,lado3);
  return 0;
}