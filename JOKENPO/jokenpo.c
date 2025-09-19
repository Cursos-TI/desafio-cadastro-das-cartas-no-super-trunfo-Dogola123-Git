#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogador, maquina, opcao;
    do
    {
       srand(time(0));

        printf("BEM VINDO AO JOGO DE JO-KEN-PO \n");
        printf("Selecione uma Opção: \n 1 - Jogar \n 2 - Regras \n 3 - Sair \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        /* JOGAR */
        printf("Escolha uma jogada: \n 1 - Pedra \n 2 - Papel \n 3 - Tesoura \n");
        scanf("%d", &jogador);
        maquina = rand() % 3+1; //Por padrão, no modulo %3, ele retorna 0,1 ou 2, adicionando + 1, fica 1,2 ou 3.
        if (jogador == 1) //PEDRA
        {
            switch (maquina)
            {
            case 1:
                /* PEDRA */
                printf("Jogador escolheu: PEDRA \n");
                printf("Maquina escolheu: PEDRA \n");
                printf("Empate - Ambos escolheram PEDRA \n");
            break;
            case 2:
                /* PAPEL */
                printf("Jogador escolheu: PEDRA \n");
                printf("Maquina escolheu: PAPEL \n");
                printf("A Maquina vence - A Maquina escolheu PAPEL \n");
            break;
            case 3:
                /* Tesoura */
                printf("Jogador escolheu: PEDRA \n");
                printf("Maquina escolheu: TESOURA \n");
                printf("O Jogador vence - A Maquina escolheu TESOURA \n");
            break;
            default:
            break;
            }

        } else if (jogador == 2) //PAPEL
        {
            switch (maquina)
            {
            case 1:
                /* PEDRA */
                printf("Jogador escolheu: PAPEL \n");
                printf("Maquina escolheu: PEDRA \n");
                printf("O Jogador vence - A Maquina escolheu PEDRA \n");
            break;
            case 2:
                /* PAPEL */
                printf("Jogador escolheu: PAPEL \n");
                printf("Maquina escolheu: PAPEL \n");
                printf("Empate - Ambos escolheram PAPEL \n");
            break;
            case 3:
                /* Tesoura */
                printf("Jogador escolheu: PAPEL \n");
                printf("Maquina escolheu: TESOURA \n");
                printf("A Maquina vence - A Maquina escolheu TESOURA \n");
            break;

            default:
                break;
            }
        }else if (jogador == 3) //TESOURA
        {
            switch (maquina)
            {
            case 1:
                /* PEDRA */
                printf("Jogador escolheu: TESOURA \n");
                printf("Maquina escolheu: PEDRA \n");
                printf("A Maquina vence - A Maquina escolheu PEDRA \n");
            break;
            case 2:
                /* PAPEL */
                printf("Jogador escolheu: TESOURA \n");
                printf("Maquina escolheu: PAPEL \n");
                printf("O Jogador vence - A Maquina escolheu PAPEL \n");
            break;
            case 3:
                /* Tesoura */
                printf("Jogador escolheu: TESOURA \n");
                printf("Maquina escolheu: TESOURA \n");
                printf("Empate - Ambos escolheram TESOURA \n");
            break;

            default:
                break;
            }
        }
        
        
        
    break;
    case 2:
        /* REGRAS*/
        printf("SÓ JOGAR \n");
    break;
    case 3:
        /* SAIR */
        return 0;
    break;
    default:
        /* OPÇÃO INVÁLIDA*/
        printf("Opção inválida!!! \n");
    break;
    }
    } while (opcao != 3);
    
    return 0;
}