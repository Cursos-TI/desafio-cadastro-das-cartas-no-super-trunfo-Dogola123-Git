

    int ID1 = 001;
    unsigned char estado1[2];
    unsigned char cidade1[50];
    unsigned int populacao1, area1;
    float pib1, densidade1, PIBPerCapita1;
    unsigned int pontosturisticos1;

    int ID2 = 002;
    unsigned char estado2[2];
    unsigned char cidade2[50];
    unsigned int populacao2, area2;
    float pib2, densidade2, PIBPerCapita2;
    unsigned int pontosturisticos2;
    unsigned int resultado;

    char * resultPop;
    char * resultArea;
    char * resultPIB;
    char * resultPonto;
    char * resultDensidade;
    char * resultPIBPerCapita;

void cadastro(){
    printf("CADASTRE A PRIMEIRA CARTA \n");
    printf("DIGITE O ESTADO: ");
    scanf("%s", estado1);
    printf("DIGITE A CIDADE: ");
    scanf("%s", cidade1);
    printf("DIGITE A POPULAÇÃO: ");
    scanf("%d", &populacao1);
    printf("DIGITE A AREA EM KM: ");
    scanf("%d", &area1);
    printf("DIGITE O PIB DA CIDADE: ");
    scanf("%f", &pib1);
    printf("DIGITE QUANTOS PONTOS TURISTICO A CIDADE TEM: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");
    printf("PRIMEIRA CARTA CADASTRADA!!! \n\n");

    printf("CADASTRE A SEGUNDA CARTA \n");
    printf("DIGITE O ESTADO: ");
    scanf("%s", estado2);
    printf("DIGITE A CIDADE: ");
    scanf("%s", cidade2);
    printf("DIGITE A POPULAÇÃO: ");
    scanf("%d", &populacao2);
    printf("DIGITE A AREA EM KM: ");
    scanf("%d", &area2);
    printf("DIGITE O PIB DA CIDADE: ");
    scanf("%f", &pib2);
    printf("DIGITE QUANTOS PONTOS TURISTICO A CIDADE TEM: ");
    scanf("%d", &pontosturisticos2);
    printf("\n");
    printf("SEGUNDA CARTA CADASTRADA!!! \n");
}

float calculo(){
    densidade1 = populacao1/area1;
    PIBPerCapita1 = pib1/populacao1;

    densidade2 = populacao2/area2;
    PIBPerCapita2 = pib2/populacao2;
}

char compara(){

    //Comparativos
    //População
    if (populacao1 == populacao2)
    {
        resultPop = "01 e 02 empataram";
    }else if (populacao1 > populacao2)
    {
        resultPop = "01 ganhou";
    }else if (populacao1 < populacao2)
    {
        resultPop = "02 ganhou";
    }

    //Area
    if (area1 == area2)
    {
        resultArea = "01 e 02 empataram";
    }else if (area1 > area2)
    {
        resultArea = "01 ganhou";
    }else if (area1 < area2)
    {
        resultArea = "02 ganhou";
    }

    //PIB
    if (pib1 == pib2)
    {
        resultPIB = "01 e 02 empataram";
    }else if (pib1 > pib2)
    {
        resultPIB = "01 ganhou";
    }else if (pib1 < pib2)
    {
        resultPIB = "02 ganhou";
    }
    
    //Pontos Turisticos
    if (pontosturisticos1 == pontosturisticos2)
    {
        resultPonto = "01 e 02 empataram";
    }else if (pontosturisticos1 > pontosturisticos2)
    {
        resultPonto = "01 ganhou";
    }else if (pontosturisticos1 < pontosturisticos2)
    {
        resultPonto = "02 ganhou";
    }
    
    //Densidade Populacional
    if (densidade1 == densidade2)
    {
        resultDensidade = "01 e 02 empataram";
    }else if (densidade1 > densidade2)
    {
        resultDensidade = "01 ganhou";
    }else if (densidade1 < densidade2)
    {
        resultDensidade = "02 ganhou";
    }

    //PIB Per Capita
    if (PIBPerCapita1 == PIBPerCapita2)
    {
        resultPIBPerCapita = "01 e 02 empataram";
    }else if (PIBPerCapita1 > PIBPerCapita2)
    {
        resultPIBPerCapita = "01 ganhou";
    }else if (PIBPerCapita1 < PIBPerCapita2)
    {
        resultPIBPerCapita = "02 ganhou";
    }
}

int main(){
    //int opcao;

    //printf("SELECIONE A OPÇÃO DESEJADA \n");
    //printf("1 - CADASTRAR 02 CARTAS \n 2 - COMPARAR ATRIBUTOS \n");
    //scanf("%d", opcao);

    //if (opcao = 1)
    //{
        cadastro(); //realiza o cadastro das cartas pelos valores inseridos
        calculo(); //realiza o calcula de Densidade e PIB Per Capita
   // }else if (opcao = 2)
   // {
       // if (estado1 == NULL)
        //{
       //     printf("NENHUMA CARTA CADASTRADA");
       // }else
        //{
            printf("ATRIBUTOS DA PRIMEIRA CARTA: \n");
            printf("ID: %d", ID1);
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

            printf("Selecione o atributo que deseja comparar: \n 1- População \n 2- Area \n 3- PIB \n 4- Pontos Turisticos \n 5- Densidade Populacional \n 6- PIB Per Capita \n");
            scanf("%d", &resultado);

            compara(); //COMPARA OS DADOS DAS VARIAVEIS
            
            /*====RESULTADO COMPARANDO SOMENTE UM DOS ATRIBUTOS - SWITCH====*/

            switch (resultado)
            {
            case 1:
                printf("RESULTADOS DA COMPARAÇÃO: \n");
                printf("População: A carta %s \n", resultPop);
            break;
            case 2:
                printf("RESULTADOS DA COMPARAÇÃO: \n");
                printf("Area: A carta %s \n", resultArea);
            break;
            case 3:
                printf("RESULTADOS DA COMPARAÇÃO: \n");
                printf("PIB: A carta %s \n", resultPIB);
            break;
            case 4:
                printf("RESULTADOS DA COMPARAÇÃO: \n");
                printf("Pontos Turisticos: A carta %s \n", resultPonto);
            break;
            case 5:
                printf("RESULTADOS DA COMPARAÇÃO: \n");
                printf("Densidade Populacional: A carta %s \n", resultDensidade);
            break;
            case 6:
                printf("RESULTADOS DA COMPARAÇÃO: \n");
                printf("PIB Per Capita; A carta %s \n", resultPIBPerCapita);
            break;
            default:
                printf("NENHUMA OPÇÃO VÁLIDA SELECIONADA");
            break;
            }

            /*====RESULTADO COMPARANDO SOMENTE UM DOS ATRIBUTOS - IF ELSE====*/

            //if (resultado == 1)
            //{
            //    printf("RESULTADOS DA COMPARAÇÃO: \n");
            //    printf("População: A carta %s \n", resultPop);
            //} else if (resultado == 2)
            //{
            //    printf("RESULTADOS DA COMPARAÇÃO: \n");
            //    printf("Area: A carta %s \n", resultArea);
            //}else if (resultado == 3)
            //{
            //    printf("RESULTADOS DA COMPARAÇÃO: \n");
            //    printf("PIB: A carta %s \n", resultPIB);
            //}else if (resultado == 4)
            //{
            //    printf("RESULTADOS DA COMPARAÇÃO: \n");
            //    printf("Pontos Turisticos: A carta %s \n", resultPonto);
            //}else if (resultado == 5)
            //{
            //   printf("RESULTADOS DA COMPARAÇÃO: \n");
            //    printf("Densidade Populacional: A carta %s \n", resultDensidade);
            //}else if (resultado == 6)
            //{
            //    printf("RESULTADOS DA COMPARAÇÃO: \n");
            //    printf("PIB Per Capita; A carta %s \n", resultPIBPerCapita);
            //}  

            /*====RESULTADO COMPARANDO TODOS OS ATRIBUTOS====*/

            //printf("RESULTADOS DA COMPARAÇÃO: \n");
            //printf("População: A carta %s \n", resultPop);
            //printf("Area: A carta %s \n", resultArea);
            //printf("PIB: A carta %s \n", resultPIB);
            //printf("Pontos Turisticos: A carta %s \n", resultPonto);
            //printf("Densidade Populacional: A carta %s \n", resultDensidade);
            //printf("PIB Per Capita; A carta %s \n", resultPIBPerCapita);
        //}
        
        
    //}
    
    return 0;

}