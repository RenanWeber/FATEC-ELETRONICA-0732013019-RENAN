#include <stdio.h>


int main(void) {

int varMS = 0, varKMH = 0 ;



  printf("digite um valor em metros po segundo\n");

scanf("%d", &varMS);

varKMH = varMS * 3.6;

printf("valor em KM/h: %d \n",varKMH);






  return 0;
}