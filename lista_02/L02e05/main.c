#include <stdio.h>

int main(void) {

int var_a;

  printf("Digite o numero\n");
  scanf("%d", &var_a);


  if((var_a % 10) == 0 ){
    
  
        printf("é divisivel por 10 \n");


    }


         if((var_a % 5) == 0 ){
    
  
        printf("é divisivel por 5\n");

         }

                      
                if((var_a % 2) == 0 ){
            
          
                printf("é divisivel por 2 \n");

       
                }

       
    
    if(((var_a % 2) != 0 ) &&
    ((var_a % 5) != 0 ) &&
    ((var_a % 10) != 0 )  ){
        printf("não é divisivel por 10, 5 ou 2");
    }
  
  

  



  return 0;
}