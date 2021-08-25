#include <stdio.h>

int main() {
   int num;
   scanf("%d",&num);
   if(num == 0){
     printf("numero neutro");
   }
   else if(num > 0){
     if(num % 2 == 0){
       printf("numero par positivo");
     }
     else{
      printf("numero impar positivo");
     }
   }else if(num < 0){
     if(num % 2 == 0){
       printf("numero par negativo");
     }
     else{
       printf("numero impar negativo");
     }
   }
   return 0;
}