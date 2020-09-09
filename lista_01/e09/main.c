#include <stdio.h>

int main(void) {

float varVfinal = 0,
      varVinicial = 0,
      varAceleracao = 0,
      varTempo = 0;


  printf("digite a velocidade inicial : \n");
  scanf("%f", &varVinicial);


  printf("digite a aceleração : \n");
  scanf("%f", &varAceleracao);


  printf("digite e tempo : \n");
  scanf("%f", &varTempo);

varVfinal = (varVinicial + ( varAceleracao * varTempo));


  printf("velocidade final : %.1f \n", varVfinal);
  




  return 0;
}