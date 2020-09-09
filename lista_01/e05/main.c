#include <stdio.h>

int main(void) {
  
   float varTensao = 0, varCorrente = 0, varOHM = 0;

  printf("digite o valor da tensão :\n");
  scanf("%f", &varTensao);

  printf("digite o valor da corrente \n");
  scanf("%f", &varCorrente);

  

  varOHM = varTensao / varCorrente;


  printf("resistência : %f \n", varOHM);






  return 0;
}