#include <stdio.h>

int main(void) {

int var_a , var_b , var_c;

  printf("Digite o 1° numero\n");
  scanf("%d", &var_a);


  printf("Digite o 2° número \n");
  scanf("%d", &var_b);


  printf("Digite o 3° número \n");
  scanf("%d", &var_c);


  if((var_a > var_b) && (var_a > var_c)){
    
    if((var_b > var_c)){
        printf("%d > %d > %d", var_a, var_b, var_c);
    }else{
        printf("%d > %d > %d", var_a, var_c, var_b);
    }
  }
  

    if((var_b > var_a) && (var_b > var_c)){
    
    if((var_a > var_c)){
        printf("%d > %d > %d", var_b, var_a, var_c);
    }else{
        printf("%d > %d > %d", var_b, var_c, var_a);
    }
  }



  if((var_c > var_b) && (var_c > var_a)){
    
    if((var_a > var_b)){
        printf("%d > %d > %d", var_c, var_a, var_b);
    }else{
        printf("%d > %d > %d", var_c, var_b, var_a);
    }
  }



  return 0;
}