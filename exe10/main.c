#include <stdio.h>


int main() {
  int vet[10];
  for(int i= 0;i<10;i++){
    scanf("%d",&vet[i]);
  }
  for(int j=9;j>-1;j--){
    printf("%d\n",vet[j]);
  }
   return 0;
}