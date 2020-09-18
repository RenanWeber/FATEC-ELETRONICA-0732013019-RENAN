#include <stdio.h>

int main(void) {

int var_a , var_b , var_c;

  printf("Digite o 1° numero\n");
  scanf("%d", &var_a);


  printf("Digite o 2° número \n");
  scanf("%d", &var_b);


  printf("Digite o 3° número \n");
  scanf("%d", &var_c);


  if((var_a != var_b) && (var_a != var_c) && (var_b != var_c)){
    
  
        printf("é um triangulo escaleno");


    }else{
        printf("não é um triangulo escaleno");
    }
  
  

  



  return 0;
}