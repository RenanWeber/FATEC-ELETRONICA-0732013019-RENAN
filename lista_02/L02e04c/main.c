#include <stdio.h>

int main(void) {

int var_a , var_b , var_c;

  printf("Digite o 1° angulo\n");
  scanf("%d", &var_a);


  printf("Digite o 2° angulo \n");
  scanf("%d", &var_b);


  printf("Digite o 3° angulo \n");
  scanf("%d", &var_c);


  if((var_a < 90) && (var_c < 90) && (var_b < 90)){
    
  
        printf("é um triangulo agudo");


    }else{
        printf("não é um triangulo agudo");
    }
  
  

  



  return 0;
}