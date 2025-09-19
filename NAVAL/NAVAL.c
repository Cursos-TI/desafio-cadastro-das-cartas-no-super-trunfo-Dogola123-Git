#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i;
int j;
int num = 1;

int tabuleiro[11][11];

//MENU INICIAL
int menu, menu1;

//NAVIOS
int posicao1, posicao2;
int casa1Navio1, casa2Navio1, casa3Navio1;
int casa1Navio2, casa2Navio2, casa3Navio2;

int main(){
    do
    {
        printf("\n");
        printf("BEM VINDO AO BATALHA NAVAL - VERSÃO 0.1");
        printf("\n");
        printf("SELECIONE A OPÇÃO DESEJADA:\n1 - JOGAR\n2 - REGRAS\n3 - SAIR\n");
        printf("\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            //JOGAR
            printf("\n");
            printf("SELECIONE A OPÇÃO DESEJADA:\n1 - JOGAR\n2 - POSICIONAR NAVIOS\n3 - VOLTAR");
            printf("\n");
            scanf("%d", &menu1);
            switch (menu1)
            {
            case 1:
                //VERIFICAR SE TEM NAVIO E JOGAR

                //EXIBIR TABULEIRO
                printf("A       B       C       D       E       F       G       H       I       J       X");
                printf("\n");
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        tabuleiro[i][j] = 0;
                        printf("%d\t", tabuleiro[i][j]);
                    }
                    printf("%d", num);
                    num++;
                    printf("\n");
                }
                break;
            case 2:
                //POSICIONAR NAVIOS
                printf("\n");
                printf("O CAMPO DE BATALHA TEM O TAMANHO DE 10X10\n");
                printf("VOCÊ PODERÁ POSICIONAR 5 NAVIOS COM TAMANHO DE 3 CASAS, NA HORIZONTAL OU NA VERTICAL\n");
                printf("CONSIDERANDO O TABULEIRO ABAIXO, INDIQUE A POSIÇÃO DOS NAVIOS, EXEMPLO: A1, B1, C1\n");
                printf("\n");

                //EXIBE O TABULEIRO VAZIO
                printf("A       B       C       D       E       F       G       H       I       J       X");
                printf("\n");
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        tabuleiro[i][j] = 0;
                        printf("%d\t", tabuleiro[i][j]);
                    }
                    printf("%d", num);
                    num++;
                    printf("\n");
                }

                //printf("PRIMEIRO NA NAVIO - DIGITE A CASA QUE DESEJA COLOCA-LO, CONSIDERANDO DA ESQUERDA PARA A DIREITA\n");
                //scanf("%d", &casa1Navio1);
            
            default:
                break;
            }
            break;
        case 2:
            //REGRAS
            break;
        case 3:
            //SAIR
            printf("\n");
            printf("SAINDO...");
            break;
        default:
            break;
        }
    } while (menu != 0);
    
    //int vetor[5]; // Declaração de um vetor de 5 inteiros
    //
    // Inicialização do vetor usando uma estrutura de repetição for
    //for (int i = 0; i < 5; i++) {
    //    vetor[i] = i * 2; // Atribuindo valores ao vetor
    //}
    //
    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    //for (int i = 0; i < 5; i++) {
    //    printf("vetor[%d] = %d\n", i, vetor[i]);
    //}

    //int matriz1[2][2] = {{1, 2}, {3, 4}};
    //int matriz2[2][2] = {{5, 6}, {7, 8}};
    //int matrizSoma[2][2];
    //
    // Somando as duas matrizes
    //for (int i = 0; i < 2; i++) {
    //    for (int j = 0; j < 2; j++) {
    //        matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
    //    }
    //}
    //
    // Exibindo a matriz resultante
    //for (int i = 0; i < 2; i++) {
    //    for (int j = 0; j < 2; j++) {
    //        printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
     //   }
    //}

    return 0;
}