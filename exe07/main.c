#include <stdio.h>
#define MAX 100

void maior_menor(int vet[],int t,int a,int b){
    int menor = vet[1];
    int maior = vet[0];
    for(int i = 0; i<t ;i++){
        if(vet[i] < menor ){
            menor = vet[i];
        }
        else if(maior < vet[i]){
            maior = vet[i];
        }
    }
    a = menor;
    b = maior;
    printf("menor = %d\n",a);
    printf("maior = %d",b);
}


int main() {
int t=0;
int vet[MAX];
int a;
int b;
scanf("%d",&t);
for(int i=0;i<t;i++){
  scanf("%d",&vet[i]);
}
maior_menor(vet, t,a,b);
  return(0);
}