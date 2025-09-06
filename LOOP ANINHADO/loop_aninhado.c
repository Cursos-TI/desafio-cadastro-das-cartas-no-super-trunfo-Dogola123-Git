#include <stdio.h>


int main(){
    for (int x = 1; x <= 10; x++) 
    {
        for (int y = 1; y <= 5; y++) 
        {
            printf("%d\t", x * y);
        }
        printf("\n");
        
        //1º O CÓDIGO FORMA O PRIMEIRO NUMERO LINHA DE X, COMEÇANDO COM 1.
        //AGORA X = 1, POIS FOI EXECUTADO E INCREMENTADO PELO PRIMEIRO FOR, INDO PARA O SEGUNDO.
        //2º O CÓDIGO AVANÇA PARA O OUTRO FOR (Y) E MONTA A CRIA A LINHA DE 1 A 10 (Y <= 10).
        //COM A LINHA Y CRIADA, O LOOP FILHO (Y) É CUMPRIDO E RETORNA PARA O LOOP PAI (X),
        //QUE EXECUTA A LINHA 2 DE X, ATÉ X <= 10.
        //A CADA EXECUÇÃO DO LOOPING, É REALIZADO O PRINTF DO NÚMERO X ATUAL * O NÚMERO Y ATUAL
        //RESULTANDO NUMA TABELA DE TABUADA DE 1 A 10.

        // \t concatena em tabela, enquanto \n pula linha
    }

    //CRIAR UM TRIANGULO COM ASTESRISTICOS
    int n = 5; // altura do triângulo
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    //FOGOS DE ARTIFICIOS
    int segundos;

    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");


    //TABUADA MAIS DETALHADA
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
   
    return 0;
}