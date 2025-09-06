    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    //USUARIO
    int ID1 = 001;
    unsigned char estado1[2];
    unsigned char cidade1[50];
    unsigned int populacao1;
    float pib1, densidade1, PIBPerCapita1, area1, result;
    unsigned int pontosturisticos1;
    unsigned int atributo1, atributo2;
    
    //MAQUINA
    int ID2 = 002;
    unsigned char estado2[2];
    unsigned char cidade2[50];
    unsigned int populacao2;
    float pib2, densidade2, PIBPerCapita2, area2, result2;
    unsigned int pontosturisticos2;

    //MENU
    int opMenu;
    


    /* ANOTAÇÕES */
    /* srand(time(0)) --> função de numeros aleatórios, considerando o tempo que rodou o programa*/
    /* x = rand() % 10 --> número aleatório de 0 a 9*/

    /* x = y > z ? 1 : 0 --> atribui a X a verificação se y é maior a z, caso sim, retorna 1, caso não, retorna 0*/

char menu(){
    do
    {
        printf("\n");
        printf("SEJA BEM VINDO AO JOGO DE CARTAS SUPER TRUNFO !!! \n");
        printf("MENU: \n");
        printf("1 - JOGAR \n");
        printf("2 - CADASTRAR CARTAS \n");
        printf("3 - REGRAS \n");
        printf("0 - SAIR \n");
        scanf("%d", &opMenu);

        switch (opMenu)
        {
        case 1: 
            //CASO ESTEJA VAZIO, VOLTA PARA O MENU PARA CADASTRO
            if (populacao1 == 0){ 
            printf("\n\n");
            printf("ERRO - NENHUMA CARTA CADASTRADA \n");
            printf("VOLTANDO PARA O MENU PRINCIPAL \n");
            printf("\n\n");
        }else{
            printf("ATRIBUTOS DA PRIMEIRA CARTA: \n");
            printf("ID: %d \n", ID1);
            printf("Estado: %s \n", estado1);
            printf("Cidade: %s \n", cidade1);
            printf("População: %d \n", populacao1);
            printf("Area em KM: %.2f \n", area1);
            printf("PIB: %.2f \n", pib1);
            printf("Pontos Turisticos: %d \n", pontosturisticos1);
            printf("Densidade Populacional: %.2f POP/KM \n", densidade1);
            printf("PIB Per Capita: %.2f \n", PIBPerCapita1);

            printf("\n\n");

            printf("ATRIBUTOS DA SEGUNDA CARTA: \n");
            printf("ID: %d \n", ID2);
            printf("Estado: %s \n", estado2);
            printf("Cidade: %s \n", cidade2);
            printf("População: %d \n", populacao2);
            printf("Area em KM: %.2f \n", area2);
            printf("PIB: %.2f \n", pib2);
            printf("Pontos Turisticos: %d \n", pontosturisticos2);
            printf("Densidade Populacional: %.2f POP/KM \n", densidade2);
            printf("PIB Per Capita: %.2f \n", PIBPerCapita2);

            printf("\n\n");

            printf("Selecione 02 (dois) atributos para serem somados e comparados \n");
            printf("Selecione o primeiro atributo que deseja comparar: \n 1- População \n 2- Area \n 3- PIB \n 4- Pontos Turisticos \n 5- Densidade Populacional \n 6- PIB Per Capita \n");
            scanf("%d", &atributo1);
            printf("Selecione o segundo atributo que deseja comparar: \n 1- População \n 2- Area \n 3- PIB \n 4- Pontos Turisticos \n 5- Densidade Populacional \n 6- PIB Per Capita \n");
            scanf("%d", &atributo2);

            soma_compara(); //SOMA OS ATRIBUTOS E COMPARA OS DADOS DAS VARIAVEIS
        }
        break;
        case 2:
            cadastro(); //realiza o cadastro das cartas pelos valores inseridos
            calculo(); //realiza o calcula de Densidade e PIB Per Capita
        break;
        case 3:
            printf("\n\n");
            printf("REGRAS: \n O Super Trunfo é um jogo de cartas no qual os jogares \n escolhem dois atributos de cada carta para comparar \n com o do adversario. \n Ganha aquele que tiver o maior atributo somado que o adversario.");
            printf("\n\n");
        break;
        case 0:
            printf("SAINDO DO JOGO");
        break;
        default:
        break;
        }
    } while (opMenu != 0);
}

void cadastro(){
    printf("CADASTRE A PRIMEIRA CARTA \n");
    printf("DIGITE O ESTADO: ");
    scanf("%s", estado1);
    printf("DIGITE A CIDADE: ");
    scanf("%s", cidade1);
    printf("DIGITE A POPULAÇÃO: ");
    scanf("%d", &populacao1);
    printf("DIGITE A AREA EM KM: ");
    scanf("%f", &area1);
    printf("DIGITE O PIB DA CIDADE: ");
    scanf("%f", &pib1);
    printf("DIGITE QUANTOS PONTOS TURISTICO A CIDADE TEM: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");
    printf("PRIMEIRA CARTA CADASTRADA!!! \n\n");

    /* CADASTRO MANUAL DA SEGUNDA CARTA */
    printf("CADASTRE A SEGUNDA CARTA \n");
    printf("DIGITE O ESTADO: ");
    scanf("%s", estado2);
    printf("DIGITE A CIDADE: ");
    scanf("%s", cidade2);
    printf("\n");
    //printf("DIGITE A POPULAÇÃO: ");
    //scanf("%d", &populacao2);
    //printf("DIGITE A AREA EM KM: ");
    //scanf("%f", &area2);
    //printf("DIGITE O PIB DA CIDADE: ");
    //scanf("%f", &pib2);
    //printf("DIGITE QUANTOS PONTOS TURISTICO A CIDADE TEM: ");
    //scanf("%d", &pontosturisticos2);
    //printf("\n");

    /* CADASTRO ALEATÓRIO DA SEGUNDA CARTA */
    srand(time(0));
    populacao2 = rand() % 100+1;
    area2 = rand() % 100+1;
    pib2 = rand() % 100+1;
    pontosturisticos2 = rand() % 100+1;
    printf("AGUARDE ENQUANTO A MAQUINA CADASTRA A CARTA\n");
    printf("SEGUNDA CARTA CADASTRADA!!! \n");
    printf("\n\n");
}

float calculo(){
    densidade1 = populacao1/area1;
    PIBPerCapita1 = pib1/populacao1;

    densidade2 = populacao2/area2;
    PIBPerCapita2 = pib2/populacao2;
}

char soma_compara(){
    //ATRIBUI O VALOR DO PRIMEIRO ATRIBUTO SELECIONADO
    switch (atributo1)
    {
    case 1:
        result += populacao1;
        result2 += populacao2;
        break;
    case 2:
        result += area1;
        result2 += area2;
        break;
    case 3:
        result += pib1;
        result2 += pib2;
        break;
    case 4:
        result += pontosturisticos1;
        result2 += pontosturisticos2;
        break;
    case 5:
        result += densidade1;
        result2 += densidade2;
        break;
    case 6:
        result += PIBPerCapita1;
        result2 += PIBPerCapita2;
    default:
        break;
    }
 
    //SOMA O ATRIBUTO 2 COM ATRIBUTO 1
    switch (atributo2)
    {
    case 1:
        result += populacao1;
        result2 += populacao2;
        break;
    case 2:
        result += area1;
        result2 += area2;
        break;
    case 3:
        result += pib1;
        result2 += pib2;
        break;
    case 4:
        result += pontosturisticos1;
        result2 += pontosturisticos2;
        break;
    case 5:
        result += densidade1;
        result2 += densidade2;
        break;
    case 6:
        result += PIBPerCapita1;
        result2 += PIBPerCapita2;
    
    default:
        break;
    }


    //COMPARAÇÃO DOS RESULTADOS
    if (result == result2)
    {
        if (atributo1 == 1)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E POPULAÇÃO \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E AREA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PIB \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PONTOS TURISTICOS \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E DENSIDADE POPULACIONAL \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PIB PER CAPITA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 2)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E POPULAÇÃO \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E AREA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PIB \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PONTOS TURISTICOS \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E DENSIDADE POPULACIONAL \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PIB PER CAPITA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 3)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E POPULAÇÃO \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E AREA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PIB \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PONTOS TURISTICOS \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E DENSIDADE POPULACIONAL \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PIB PER CAPITA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 4)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E POPULAÇÃO \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E AREA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PIB \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PONTOS TURISTICOS \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E DENSIDADE POPULACIONAL \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PIB PER CAPITA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 5)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E POPULAÇÃO \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E AREA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PIB \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PONTOS TURISTICOS \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E DENSIDADE POPULACIONAL \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PIB PER CAPITA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 6)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E POPULAÇÃO \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E AREA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PIB \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PONTOS TURISTICOS \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E DENSIDADE POPULACIONAL \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PIB PER CAPITA \n");
                printf("HOUVE UM EMPATE, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }   
    }else if (result > result2)
    {
        if (atributo1 == 1)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E POPULAÇÃO \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E AREA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PIB \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PONTOS TURISTICOS \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E DENSIDADE POPULACIONAL \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PIB PER CAPITA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 2)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E POPULAÇÃO \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E AREA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PIB \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PONTOS TURISTICOS \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E DENSIDADE POPULACIONAL \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PIB PER CAPITA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 3)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E POPULAÇÃO \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E AREA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PIB \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PONTOS TURISTICOS \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E DENSIDADE POPULACIONAL \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PIB PER CAPITA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 4)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E POPULAÇÃO \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E AREA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PIB \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PONTOS TURISTICOS \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E DENSIDADE POPULACIONAL \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PIB PER CAPITA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 5)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E POPULAÇÃO \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E AREA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PIB \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PONTOS TURISTICOS \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E DENSIDADE POPULACIONAL \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PIB PER CAPITA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 6)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E POPULAÇÃO \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E AREA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PIB \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PONTOS TURISTICOS \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E DENSIDADE POPULACIONAL \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PIB PER CAPITA \n");
                printf("O USUARIO VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }
    }else if (result < result2)
    {
        if (atributo1 == 1)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E POPULAÇÃO \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E AREA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PIB \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PONTOS TURISTICOS \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E DENSIDADE POPULACIONAL \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("POPULAÇÃO E PIB PER CAPITA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 2)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E POPULAÇÃO \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E AREA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PIB \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PONTOS TURISTICOS \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E DENSIDADE POPULACIONAL \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("AREA E PIB PER CAPITA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 3)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E POPULAÇÃO \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E AREA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PIB \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PONTOS TURISTICOS \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E DENSIDADE POPULACIONAL \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB E PIB PER CAPITA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 4)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E POPULAÇÃO \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E AREA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PIB \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PONTOS TURISTICOS \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E DENSIDADE POPULACIONAL \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PONTOS TURISTICOS E PIB PER CAPITA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 5)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E POPULAÇÃO \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E AREA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PIB \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PONTOS TURISTICOS \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E DENSIDADE POPULACIONAL \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("DENSIDADE POPULACIONAL E PIB PER CAPITA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }else if (atributo1 == 6)
        {
            switch (atributo2)
            {
            case 1:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E POPULAÇÃO \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 2:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E AREA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 3:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PIB \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 4:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PONTOS TURISTICOS \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 5:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E DENSIDADE POPULACIONAL \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            case 6:
                printf("COM BASE NOS ATRIBUTOS SELECIONADOS: \n");
                printf("PIB PER CAPITA E PIB PER CAPITA \n");
                printf("A MAQUINA VENCEU, SENDO OS VALORES %.2f DO USUARIO E %.2f DA MAQUINA \n", result, result2);
                break;
            default:
                break;
            }
        }
    }
    
    
    
}

int main(){

    //TESTE DE MENU
    menu();

return 0;

}
