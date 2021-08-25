#include <stdio.h>

int main() {
  int num1;
  int num2;
  int num3;
  int num4;
  float media;
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  scanf("%d",&num4);
  media = ((float)num1+(float)num2+(float)num3+(float)num4)/4;
  if(media >= 6.0){
    printf("nota = %0.1f (aprovado)",media);
  }
  else{
    printf("nota = %0.1f (reprovado)",media);
  }
}