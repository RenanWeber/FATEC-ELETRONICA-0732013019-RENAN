#include <stdio.h>

int main(void) {

float varSinicial = 0,
      varVinicial = 0,
      varTempo = 0,
      varSfinal = 0;


  printf("digite a posicao inicial : \n");
  scanf("%f", &varSinicial);


  printf("digite a velocidade inicial : \n");
  scanf("%f", &varVinicial);


  printf("digite e tempo : \n");
  scanf("%f", &varTempo);

varSfinal = (varSinicial + ( varVinicial * varTempo));


  printf("posição final : %.1f \n", varSfinal);
  




  return 0;
}