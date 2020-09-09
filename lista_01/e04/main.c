#include <stdio.h>

int main(void) {

  int varAltura = 0, varLargura = 0,varArea = 0;

  printf("digite a altura do retangulo \n");

  scanf("%d", &varAltura);

  printf("digite a largura do retangulo \n");

  scanf("%d", &varLargura);

  varArea = varAltura * varLargura ;

  printf("Area : %d", varArea);

  return 0;
}