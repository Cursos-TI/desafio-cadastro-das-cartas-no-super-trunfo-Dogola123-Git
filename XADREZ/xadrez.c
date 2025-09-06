#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//SELEÇÃO DAS PEÇAS
int pecaSelecionada;
int direcaoPeca;
int casasPeca;
int deslocamento = 0;

//TORRE
int cantoTorre;

//BISPO
int cantoBispo;

//RAINHA
int sentidoRainha;

int main(){
    do {
    deslocamento = 0;
    casasPeca = 0;
    direcaoPeca = 0;
    pecaSelecionada = 0;
    
    printf("MOVIMENTO DE PEÇA DE XADREZ - VERSÃO 0.1 \n");
    printf("SELECIONE A PEÇA DE DESEJA MOVIMENTAR: \n");
    printf("1 - TORRE \n");
    printf("2 - BISPO \n");
    printf("3 - RAINHA \n");
    printf("0 - SAIR \n");
    scanf("%d", &pecaSelecionada);

    switch (pecaSelecionada)
    {
    case 1: //TORRE
        printf("SELECIONE QUAL TORRE DESEJA MOVIMENTAR: \n");
        printf("1 - CANTO DIREITO \n2 - CANTO ESQUERDO \n");
        scanf("%d", &cantoTorre);
        switch (cantoTorre)
        {
        case 1: //TORRE DO CANTO DIREITO, VAI PARA A ESQUERDA OU PARA FRENTE
            printf("TORRE DO CANTO DIREITO: \nQUAL DIREÇÃO ? \n1 - ESQUERDA \n2 - PARA FRENTE \n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                //DESLOCA A TORRE PARA A ESQUERDA
                printf("QUANTAS CASAS PARA A ESQUERDA ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }else{
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A ESQUERDA\n");
                        deslocamento++;
                    }
                }
                break;
            case 2:
                //DESLOCA A TORRE PARA A FRENTE
                printf("QUANTAS CASAS PARA FRENTE ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA FRENTE\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;
            default:
                break;
            }
            break;
        case 2: //TORRE DO CANTO ESQUERDO, VAI PARA A ESQUERDA OU PARA FRENTE
            printf("TORRE DO CANTO ESQUERDO: \nQUAL DIREÇÃO ? \n1 - DIREITA \n2 - PARA FRENTE \n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                //DESLOCA A TORRE PARA A DIREITA
                printf("QUANTAS CASAS PARA A DIREITA ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A DIREITA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;
            case 2:
                //DESLOCA A TORRE PARA A FRENTE
                printf("QUANTAS CASAS PARA FRENTE ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA FRENTE\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }        
        break;
    
    case 2: //BISPO
    //OBS: IMPLEMENTAR, POSTERIORMENTE, O LIMITE DE CASAS NA DIAGONAL CONSIDERANDO A POSIÇÃO INICIAL
        printf("SELECIONE QUAL BISPO DESEJA MOVIMENTAR: \n");
        printf("1 - CANTO DIREITO \n 2 - CANTO ESQUERDO \n");
        scanf("%d", &cantoBispo);
        switch (cantoBispo)
        {
        case 1: //BISPO DO CANTO DIREITO, VAI NA DIAGONAL
            printf("BISPO DO CANTO DIREITO: \nQUAL DIREÇÃO ?\n 1 - DIAGONAL ESQUERDA\n 2 - DIAGONAL DIREITA\n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                //DESLOCA O BISPO PARA A ESQUERDA
                printf("QUANTAS CASAS NA DIAGONAL ESQUERDA ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A ESQUERDA E PARA CIMA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;
            case 2:
                //DESLOCA O BISPO PARA DIAGONAL DIREITA
                printf("QUANTAS CASAS NA DIAGONAL DIREITA ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A DIREITA E PARA CIMA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;
            default:
                break;
            }
            break;
        case 2: //BISPO DO CANTO ESQUERDO, VAI NA DIAGONAL
            printf("BISPO DO CANTO ESQUERDO: \nQUAL DIREÇÃO ?\n 1 - DIAGONAL DIREITA\n 2 - DIAGONAL ESQUERDA\n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                //DESLOCA O BISPO NA DIAGONAL DIREITA
                printf("QUANTAS CASAS NA DIAGONAL DIREITA ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A DIREITA E PARA CIMA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;
            case 2:
                //DESLOCA O BISPO NA DIAGONAL ESQUERDA
                printf("QUANTAS CASAS NA DIAGONAL ESQUERDA ? \n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A ESQUERDA E PARA CIMA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            default:
                break;
            }
            break;
        default:
            break;
        }        
        break;
    
    case 3: //RAINHA
        printf("A RAINHA PODE ANDAR TANTO NA DIAGONAL, QUANTO NA HORIZONTAL E NA VERTICAL\n");
        printf("QUAL POSICAO DESEJA ANDAR ?\n1 - DIAGONAL\n2 - HORIZONTAL\n3 - VERTICAL\n");
        scanf("%d", &sentidoRainha);
        switch (sentidoRainha)
        {
        case 1: //MOVIMENTA NA DIAGONAL
            printf("QUAL DIREÇÃO?\n 1 - DIAGONAL DIREITA\n 2 - DIAGONAL ESQUERDA\n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                printf("QUANTAS CASAS NA DIAGONAL DIREITA?\n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A DIREITA E PARA CIMA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            case 2:
                printf("QUANTAS CASAS NA DIAGONAL ESQUERDA?\n");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A ESQUERDA E PARA CIMA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            default:
                break;
            }
            break;
        case 2: //MOVIMENTA NA HORIZONTAL
            printf("QUAL DIREÇÃO?\n 1 - DIREITA\n 2 - ESQUERDA\n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                printf("QUANTAS CASAS PARA DIREITA?");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A DIREITA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            case 2:
                printf("QUANTAS CASAS PARA ESQUERDA?");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA A ESQUERDA\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            default:
                break;
            }
            break;
        case 3: //MOVIMENTA NA VERTICAL
            printf("QUAL DIREÇÃO?\n 1 - PARA FRENTE\n 2 - PARA TRAS\n");
            scanf("%d", &direcaoPeca);
            switch (direcaoPeca)
            {
            case 1:
                printf("QUANTAS CASAS PARA FRENTE?");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA FRENTE\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            case 2:
                printf("QUANTAS CASAS PARA TRAS?");
                scanf("%d", &casasPeca);
                if (casasPeca <= 8)
                {
                    while (deslocamento != casasPeca)
                    {
                        printf("DESLOCOU 1 CASA PARA TRAS\n");
                        deslocamento++;
                    }
                    
                }else if (casasPeca > 8)
                {
                    printf("MOVIMENTO INVALIDO, TABULEIRO É 8X8\n");
                }
                break;

            default:
                break;
            }
            break;
            break;
        default:
            break;
        }
        
        break;
    break;
    default:
        break;
    }
    } while (pecaSelecionada != 0);
return 0;
}
