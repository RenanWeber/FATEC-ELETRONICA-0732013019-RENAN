#include <stdio.h>

int main(void) {
 
 float varR1 = 0, 
 varR2 = 0, varREQ = 0;


  printf("Digite a primeira resistencia \n");
  scanf("%f", &varR1);


  printf("Digite a segunda resistencia \n");
  scanf("%f", &varR2);


  varREQ = ((varR1 * varR2) / (varR1 + varR2));
  printf("resistencia equivalente : %f", varREQ);

  return 0;
}