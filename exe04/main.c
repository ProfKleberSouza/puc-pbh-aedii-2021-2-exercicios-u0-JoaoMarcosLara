#include <stdio.h>

int main() {
  int num1;
  int num2;
  int num3;
  int maior=0;
  int menor=0;
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  if(num1 >= num2 && num1 >= num3){
    maior = num1;
        if(num2<num3){
            menor = num2;
        }else{
            menor = num3;
        }
  }
  else if(num2 >= num1 && num2 >= num3){
    maior = num2;
    if(num1<num3){
      menor = num1;
    }else{
        menor = num3;
    }
  }
  else if(num3 >= num2 && num3 >= num3){
    maior = num3;
    if(num2<num1){
      menor = num2;
    }else{
        menor = num1;
    }
  }
  printf("menor = %d\n",menor);
  printf("maior = %d",maior);
    return 0;
}