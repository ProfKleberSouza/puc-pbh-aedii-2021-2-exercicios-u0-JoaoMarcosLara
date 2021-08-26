#include <stdio.h>

int main() {
  int num=3;
while(num != 0){
    scanf("%d",&num);
    if(num > 0){
        printf("POSITIVO\n");
    }else if(num<0){
        printf("NEGATIVO\n");
    }else{
        return 0;
    }
}
}