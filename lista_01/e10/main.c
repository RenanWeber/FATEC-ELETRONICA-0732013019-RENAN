#include <stdio.h>
#include <math.h>

int main(void) {

float varSinicial = 0,
      varSfinal = 0,
      varVinicial = 0,
      varTempo = 0,
      varAceleracao = 0;


  printf("digite a posicao inicial : \n");
  scanf("%f", &varSinicial);


  printf("digite a velocidade inicial : \n");
  scanf("%f", &varVinicial);


  printf("digite e tempo : \n");
  scanf("%f", &varTempo);

   printf("digite e aceleracao : \n");
  scanf("%f", &varAceleracao);

varSfinal = (varSinicial + 
( varVinicial * varTempo) + 
((( varAceleracao ) * pow(varTempo, 2) )/2));


  printf("posição final : %.1f \n", varSfinal);
  




  return 0;
}