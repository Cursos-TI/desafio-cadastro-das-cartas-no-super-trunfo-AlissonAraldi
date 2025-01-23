#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char pais1[30], Aestado[30], A1cidade[30], A2cidade[30], A3cidade[30], A4cidade[30], Bestado[30], B1cidade[30], B2cidade[30], B3cidade[30], B4cidade[30];
    int A1turist, A2turist, A3turist, A4turist, B1turist, B2turist, B3turist, B4turist;
    int decisao, cadastro, Mcarta, Jcarta;
    long int A1popul, A1area, A2popul, A2area, A3popul, A3area, A4popul, A4area, B1popul, B1area, B2popul, B2area, B3popul, B3area, B4popul, B4area;
    float A1pib, A1dens, A1pcap, A2pib, A2dens, A2pcap, A3pib, A3dens, A3pcap, A4pib, A4dens, A4pcap, B1pib, B1dens, B1pcap, B2pib, B2dens, B2pcap, B3pib, B3dens, B3pcap, B4pib, B4dens, B4pcap;

    cadastro = 1;
    srand(time(0));
      Mcarta = rand() % 4 + 1;
    Jcarta = 0;

    // Cadastro
    strcpy(pais1, "Brasil");
    //Estado
    strcpy(Aestado, "Goias");
    // Carta1
    strcpy(A1cidade, "Goiania");
    A1popul = 1494599; 
    A1area = 739;
    A1pib = 34000.0;
    A1turist = 10; 
    A1dens = (float) A1popul / A1area;
    A1pcap = (float) A1pib / A1popul;
    // Carta2
    strcpy(A2cidade, "Aparecida");
    A2popul = 550925;
    A2area = 290;
    A2pib = 22000.0;
    A2turist = 5; 
    A2dens = (float) A2popul / A2area;
    A2pcap = (float) A2pib / A2popul;
    // Carta3
    strcpy(A3cidade, "Anapolis");
    A3popul = 415847;
    A3area = 918;
    A3pib = 45000.0;
    A3turist = 8;
    A3dens = (float) A3popul / A3area;
    A3pcap = (float) A3pib / A3popul;
    // Carta4
    strcpy(A4cidade, "Rio_Verde");
    A4popul = 238025;
    A4area = 8379;
    A4pib = 65900.0;
    A4turist = 6;
    A4dens = (float) A4popul / A4area;
    A4pcap = (float) A4pib / A4popul;

    // Estado
    strcpy(Bestado, "Tocantins");
    // Carta1
    strcpy(B1cidade, "Palmas");
    B1popul = 313349;
    B1area = 2218;
    B1pib = 21500.0;
    B1turist = 12; 
    B1dens = (float) B1popul / B1area;
    B1pcap = (float) B1pib / B1popul;
    // Carta2
    strcpy(B2cidade, "Araguaina");
    B2popul = 183381;
    B2area = 4000;
    B2pib = 18000.0;
    B2turist = 6; 
    B2dens = (float) B2popul / B2area;
    B2pcap = (float) B2pib / B2popul;
    // Carta3
    strcpy(B3cidade, "Gurupi");
    B3popul = 89074;
    B3area = 1836;
    B3pib = 16500.0;
    B3turist = 5; 
    B3dens = (float) B3popul / B3area;
    B3pcap = (float) B3pib / B3popul;
    // Carta4
    strcpy(B4cidade, "Porto_Nacional");
    B4popul = 53772;
    B4area = 4200;
    B4pib = 15200.0;
    B4turist = 4; 
    B4dens = (float) B4popul / B4area;
    B4pcap = (float) B4pib / B4popul;
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //limpando a tela
    system("clear");

    //Inicio
    printf("#####Bem vindo ao jogo de Super Trunfo!#####\n\n");
    printf("    MENU\n");
    printf("1. Cadastrar as Cartas\n");
    printf("2. Usar Cartas Ja Cadastrada\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &decisao);
    
    //limpando a tela
    system("clear");

    //CAdastro de cartas
    if (decisao == 1){
        cadastro ++;

    }else if (decisao > 2){
        printf("Opção Invalida\n");
    }
   
    if(decisao == 2 || cadastro == 2){ 
    //Jogar 
    //limpando a tela
    system("clear");
    printf ("***Apresento as suas Cartas***\n\n");
    printf("PAÍS: %s - %s\n", pais1, Aestado);
    printf("1. Carta A1 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    printf("2. Carta A2 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
    printf("3. Carta A3 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);
    printf("4. Carta A4 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A4cidade, A4popul, A4area, A4pib, A4turist, A4dens, A4pcap);

    // printf("\nPAÍS: %s - %s\n", pais1, Bestado);
    // printf("Carta B1 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B1cidade, B1popul, B1area, B1pib, B1turist, B1dens, B1pcap);
    // printf("Carta B2 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B2cidade, B2popul, B2area, B2pib, B2turist, B2dens, B2pcap);
    // printf("Carta B3 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B3cidade, B3popul, B3area, B3pib, B3turist, B3dens, B3pcap);
    // printf("Carta B4 - Cidade: %s \tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B4cidade, B4popul, B4area, B4pib, B4turist, B4dens, B4pcap);
    
    printf("\nEscolha a sua Carta: ");
    scanf("%d", &Jcarta);


    
    
    
    
    }

    // switch (decisao)
    // {
    // case 1:
    //     printf("Opção 1\n");
    //     break;

    // case 2:
    //     printf("Opção 2\n");

    //     break;
        
    // default:
    //     printf("Opção Invalida\n");
    //     break;
    // }
    
    // printf("Vamos cadastrar as suas Cartas!\n");
    
    // //Cadastro Base 1
    // printf("Informe o Nome do Pais:\n");
    // scanf("%29s", &pais1);
    // printf("Informe o Estado:\n");
    // scanf("%29s", Aestado);
    // printf("\nAgora vamos cadastrar suas cartas!\n");
    // //Carta1
    // printf("CARTA A1\n");
    // printf("Informe o nome da Cidade:\n");
    // scanf("%29s",  A1cidade);
    // printf("informe o total de população de %s:\n ", A1cidade);
    // scanf("%ld", &A1popul);
    // printf("informe a Area total de %s:\n ", A1cidade);
    // scanf("%ld", &A1area);
    // printf("informe o total do PIB de %s:\n ", A1cidade);
    // scanf("%f", &A1pib);
    // printf("informe o total de pontos turisticos de %s:\n ", A1cidade);
    // scanf("%d", &A1turist);
    // //Cauculos
    // A1dens = (float) A1popul / A1area;
    // A1pcap = (float) A1pib / A1popul; 
    // //Apresentação
    // printf("\nCarta A1 Cadastrada!\n");
    // printf("PAIS: %s - %s\n", pais1, Aestado);
    // printf("Carta A1 - Cidade: %s   População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    
    // //Carta2
    // printf("CARTA A2\n");
    // printf("Informe o nome da Cidade:\n");
    // scanf("%29s", A2cidade);
    // printf("informe o total de população de %s:\n ", A2cidade);
    // scanf("%ld", &A2popul);
    // printf("informe a Area total de %s:\n ", A2cidade);
    // scanf("%ld", &A2area);
    // printf("informe o total do PIB de %s:\n ", A2cidade);
    // scanf("%f", &A2pib);
    // printf("informe o total de pontos turisticos de %s:\n ", A2cidade);
    // scanf("%d", &A2turist);
    // //Cauculos
    // A2dens = (float) A2popul / A2area;
    // A2pcap = (float) A2pib / A2popul; 
    // //Apresentação
    // printf("\nCarta A2 Cadastrada!\n");
    // printf("PAIS: %s - %s\n", pais1, Aestado);
    // printf("Carta A1 - Cidade: %s       População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    // printf("Carta A2 - Cidade: %s       População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
    
    // // Exibição dos Dados das Cartas:
    // // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
