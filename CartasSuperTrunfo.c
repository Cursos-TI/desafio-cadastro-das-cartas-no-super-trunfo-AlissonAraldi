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
    int decisao, cadastro, Mcarta, Jcarta, jogador, maquina;
    long int A1popul, A1area, A2popul, A2area, A3popul, A3area, A4popul, A4area, B1popul, B1area, B2popul, B2area, B3popul, B3area, B4popul, B4area;
    float A1pib, A1dens, A1pcap, A2pib, A2dens, A2pcap, A3pib, A3dens, A3pcap, A4pib, A4dens, A4pcap, B1pib, B1dens, B1pcap, B2pib, B2dens, B2pcap, B3pib, B3dens, B3pcap, B4pib, B4dens, B4pcap;

    cadastro = 1;
    // srand(time(0));
    //   Mcarta = rand() % 4 + 1;
    Mcarta = 1;
    Jcarta = 0;
    jogador = 0;
    maquina = 0;

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
    printf("Vamos cadastrar as suas Cartas!\n");
    
    //Cadastro Base 1
    printf("O Nome do Pais e %s\n", pais1);
    printf("O Estado:é %s\n", Aestado);
    // printf("\nAgora vamos cadastrar suas cartas!\n");
    //Carta1
    printf("\nCARTA A1\n");
    printf("Informe o nome da Cidade:\n");
    scanf("%29s", A1cidade);
    printf("informe o total de população de %s:\n ", A1cidade);
    scanf("%ld", &A1popul);
    printf("informe a Area total de %s:\n ", A1cidade);
    scanf("%ld", &A1area);
    printf("informe o total do PIB de %s:\n ", A1cidade);
    scanf("%f", &A1pib);
    printf("informe o total de pontos turisticos de %s:\n ", A1cidade);
    scanf("%d", &A1turist);
    //Cauculos
    A1dens = (float) A1popul / A1area;
    A1pcap = (float) A1pib / A1popul; 
    
    //limpando a tela
    system("clear");
    
    //Apresentação
    printf("\nCarta A1 Cadastrada!\n");
    printf("PAIS: %s - %s\n", pais1, Aestado);
    printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f \tPontos T.: %d \tDensidade: %.2f \tPer Capta: %.2f\n\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
  
    //Carta2
    printf("\nCARTA A2\n");
    printf("Informe o nome da Cidade:\n");
    scanf("%29s", A2cidade);
    printf("informe o total de população de %s:\n ", A2cidade);
    scanf("%ld", &A2popul);
    printf("informe a Area total de %s:\n ", A2cidade);
    scanf("%ld", &A2area);
    printf("informe o total do PIB de %s:\n ", A2cidade);
    scanf("%f", &A2pib);
    printf("informe o total de pontos turisticos de %s:\n ", A2cidade);
    scanf("%d", &A2turist);
    //Cauculos
    A2dens = (float) A2popul / A2area;
    A2pcap = (float) A2pib / A2popul; 

    //limpando a tela
    system("clear");
    
    //Apresentação
    printf("\nCarta A2 Cadastrada!\n");
    printf("PAIS: %s - %s\n", pais1, Aestado);
    printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    printf("Carta A2 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
    
    // Carta 3
    printf("\nCARTA A3\n");
    printf("Informe o nome da Cidade:\n");
    scanf("%29s", A3cidade);
    printf("Informe o total de população de %s:\n", A3cidade);
    scanf("%ld", &A3popul);
    printf("Informe a Área total de %s:\n", A3cidade);
    scanf("%ld", &A3area);
    printf("Informe o total do PIB de %s:\n", A3cidade);
    scanf("%f", &A3pib);
    printf("Informe o total de pontos turísticos de %s:\n", A3cidade);
    scanf("%d", &A3turist);
    // Cálculos
    A3dens = (float)A3popul / A3area;
    A3pcap = (float)A3pib / A3popul;

    //limpando a tela
    system("clear");
    
    // Apresentação
    printf("\nCarta A3 Cadastrada!\n");
    printf("PAIS: %s - %s\n", pais1, Aestado);
    printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    printf("Carta A2 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap); 
    printf("Carta A3 - Cidade: %s \tPopulação: %ld \tÁrea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);

    // Carta 4
    printf("\nCARTA A4\n");
    printf("Informe o nome da Cidade:\n");
    scanf("%29s", A4cidade);
    printf("Informe o total de população de %s:\n", A4cidade);
    scanf("%ld", &A4popul);
    printf("Informe a Área total de %s:\n", A4cidade);
    scanf("%ld", &A4area);
    printf("Informe o total do PIB de %s:\n", A4cidade);
    scanf("%f", &A4pib);
    printf("Informe o total de pontos turísticos de %s:\n", A4cidade);
    scanf("%d", &A4turist);
    // Cálculos
    A4dens = (float)A4popul / A4area;
    A4pcap = (float)A4pib / A4popul;
   
    //limpando a tela
    system("clear");
    
    // Apresentação
    printf("\nCarta A4 Cadastrada!\n");
    printf("PAIS: %s - %s\n", pais1, Aestado);
    printf("Carta A1 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    printf("Carta A2 - Cidade: %s \tPopulação: %ld \tArea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap); 
    printf("Carta A3 - Cidade: %s \tPopulação: %ld \tÁrea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);
    printf("Carta A4 - Cidade: %s \tPopulação: %ld \tÁrea: %ld \tPIB: %.2f Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A4cidade, A4popul, A4area, A4pib, A4turist, A4dens, A4pcap);

    cadastro ++;
    //printf("%d", cadastro);

    }else if (decisao > 2){
        printf("Opção Invalida\n");
    }
   
    if(decisao == 2 || cadastro == 2){ 
    //Jogar 
    //limpando a tela
    system("clear");
    printf("*********VAMOS JOGAR**********\n");
    printf("***Apresento as suas Cartas***\n\n");
    printf("PAÍS: %s - %s\n", pais1, Aestado);
    printf("1. Carta A1 - Cidade: %s \t\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    printf("2. Carta A2 - Cidade: %s \tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
    printf("3. Carta A3 - Cidade: %s \t\tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A3cidade, A3popul, A3area, A3pib, A3turist, A3dens, A3pcap);
    printf("4. Carta A4 - Cidade: %s \tPopulação: %ld \tÁrea: %ld  \tPIB: %.2f  \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", A4cidade, A4popul, A4area, A4pib, A4turist, A4dens, A4pcap);

   // printf("\nPAÍS: %s - %s\n", pais1, Bestado);
    // printf("Carta B1 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B1cidade, B1popul, B1area, B1pib, B1turist, B1dens, B1pcap);
    // printf("Carta B2 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B2cidade, B2popul, B2area, B2pib, B2turist, B2dens, B2pcap);
    // printf("Carta B3 - Cidade: %s \t\tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B3cidade, B3popul, B3area, B3pib, B3turist, B3dens, B3pcap);
    // printf("Carta B4 - Cidade: %s \tPopulação: %ld  \tÁrea: %ld   \tPIB: %.2f   \tPontos T.: %d \tDensidade: %.2f \tPer Capita: %.2f\n", B4cidade, B4popul, B4area, B4pib, B4turist, B4dens, B4pcap);
    
    printf("\nEscolha a sua Carta: ");
    scanf("%d", &Jcarta);
    }
    if (Jcarta > 0 && Jcarta < 5){
        switch (Jcarta)
        {
//#############################################################################################################################################################################
        case 1:
            switch (Mcarta)
            {
//#############################################################################################################################################################################         
           case 1:
                printf("\n\t****** Jogador x Máquina ******\n");
                printf("\tCarta A1 - %s x %s - Carta B1\n", A1cidade, B1cidade);

                //Populacao
                if (A1popul > B1popul) {
                    printf("Vitoria - Carta A1 X Carta B1 - Derrota \t**Populacao**\n", A1popul, B1popul);
                    jogador ++;
                } else if (A1popul < B1popul) {
                    printf("Derrota - Carta A1 X2 Carta B1 - Vitoria \t**Populacao**\n", A1popul, B1popul);
                    maquina ++;
                } else {
                    printf("Empate - Carta A1 X2 Carta B1 - Empate \t**Populacao**\n", A1popul, B1popul);
                }

                //area
                if (A1area > B1area) {
                    printf("Vitoria - Carta A1 X Carta B1 - Derrota \t**Area**\n", A1area, B1area);
                    jogador ++;
                } else if (A1area < B1area) {
                    printf("Derrota - Carta A1 X Carta B1 - Vitoria \t**Area**\n", A1area, B1area);
                    maquina ++;
                } else {
                    printf("Empate - Carta A1 X Carta B1 - Empate \t**Area**\n", A1area, B1area);
                }

                //PIB
                if (A1pib > B1pib) {
                    printf("Vitoria - Carta A1 X Carta B1 - Derrota \t**PIB**\n", A1pib, B1pib);
                    jogador ++;
                } else if (A1pib < B1pib) {
                    printf("Derrota - Carta A1 X Carta B1 - Vitoria \t**PIB**\n", A1pib, B1pib);
                    maquina ++;
                } else {
                    printf("Empate - Carta A1 X Carta B1 - Empate \t**PIB**\n", A1pib, B1pib);
                }

                //Pontos Tur
                if (A1turist > B1turist) {
                    printf("Vitoria - Carta A1 X Carta B1 - Derrota \t**Pontos Turisticos**\n", A1turist, B1turist);
                    jogador ++;
                } else if (A1turist < B1turist) {
                    printf("Derrota - Carta A1 X Carta B1 - Vitoria \t**Pontos Turisticos**\n", A1turist, B1turist);
                    maquina ++;
                } else {
                    printf("Empate - Carta A1 X Carta B1 - Empate \t**Pontos Turisticos**\n", A1turist, B1turist);
                }

                //Dens Popul
                if (A1dens < B1dens) {
                    printf("Vitoria - Carta A1 X Carta B1 - Derrota \t**Densidade Populacional**\n", A1dens, B1dens);
                    jogador ++;
                } else if (A1dens > B1dens) {
                    printf("Derrota - Carta A1 X Carta B1 - Vitoria \t**Densidade Populacional**\n", A1dens, B1dens);
                    maquina ++;
                } else {
                    printf("Empate - Carta A1 X Carta B1 - Empate  \t**Densidade Populacional**\n", A1dens, B1dens);
                }

                //PIB Pcapita
                if (A1pcap > B1pcap) {
                    printf("Vitoria - Carta A1 X Carta B1 - Derrota \t**PIB Per Capita**\n", A1pcap, B1pcap);
                    jogador ++;
                } else if (A1pcap < B1pcap) {
                    printf("Derrota - Carta A1 X Carta B1 - Vitoria \t**PIB Per Capita**\n", A1pcap, B1pcap);
                    maquina ++;
                } else {
                    printf("Empate - Carta A1 X Carta B1 - Empate \t**PIB Per Capita**\n", A1pcap, B1pcap);
                }
                
                
                printf("\nJogador %d x %d Maquina", jogador, maquina);
                break;               


























         
               

//#############################################################################################################################################################################
                case 2:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A1 - %s x %s - Carta B2\n", A1cidade, B2cidade);

                //Populacao
                if (A1popul > B2popul) {
                    printf("Vitoria - População: Carta A1 - %ld x %ld - Carta B2 - Derrota\n", A1popul, B2popul);
                } else if (A1popul < B2popul) {
                    printf("Derrota - População: Carta A1 - %ld x %ld - Carta B2 - Vitoria\n", A1popul, B2popul);
                } else {
                    printf("Empate - População: Carta A1 - %ld x %ld - Carta B2 - Empate\n", A1popul, B2popul);
                }

                //area
                if (A1area > B2area) {
                    printf("Vitoria - Área: Carta A1 - %ld x %ld - Carta B2 - Derrota\n", A1area, B2area);
                } else if (A1area < B2area) {
                    printf("Derrota - Área: Carta A1 - %ld x %ld - Carta B2 - Vitoria\n", A1area, B2area);
                } else {
                    printf("Empate - Área: Carta A1 - %ld x %ld - Carta B2 - Empate\n", A1area, B2area);
                }

                //PIB
                if (A1pib > B2pib) {
                    printf("Vitoria - PIB: Carta A1 - %.2f x %.2f - Carta B2 - Derrota\n", A1pib, B2pib);
                } else if (A1pib < B2pib) {
                    printf("Derrota - PIB: Carta A1 - %.2f x %.2f - Carta B2 - Vitoria\n", A1pib, B2pib);
                } else {
                    printf("Empate - PIB: Carta A1 - %.2f x %.2f - Carta B2 - Empate\n", A1pib, B2pib);
                }

                //Pontos Tur
                if (A1turist > B2turist) {
                    printf("Vitoria - Pontos Turisticos: Carta A1 - %d x %d - Carta B2 - Derrota\n", A1turist, B2turist);
                } else if (A1turist < B2turist) {
                    printf("Derrota - Pontos Turísticos: Carta A1 - %d x %d - Carta B2 - Vitoria\n", A1turist, B2turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A1 - %d x %d - Carta B2 - Empate\n", A1turist, B2turist);
                }

                //Dens Popul
                if (A1dens > B2dens) {
                    printf("Vitoria - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B2 - Derrota\n", A1dens, B2dens);
                } else if (A1dens < B2dens) {
                    printf("Derrota - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B2 - Vitoria\n", A1dens, B2dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B2\n", A1dens, B2dens);
                }

                //PIB Pcapita
                if (A1pcap > B2pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B2 - Derrota\n", A1pcap, B2pcap);
                } else if (A1pcap < B2pcap) {
                    printf("Derrota - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B2 - Vitoria\n", A1pcap, B2pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B2 - Empate\n", A1pcap, B2pcap);
                }
                break;
//#############################################################################################################################################################################

                case 3:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A1 - %s x %s - Carta B3\n", A1cidade, B3cidade);

                //Populacao
                if (A1popul > B3popul) {
                    printf("Vitoria - População: Carta A1 - %ld x %ld - Carta B3 - Derrota\n", A1popul, B3popul);
                } else if (A1popul < B3popul) {
                    printf("Derrota - População: Carta A1 - %ld x %ld - Carta B3 - Vitoria\n", A1popul, B3popul);
                } else {
                    printf("Empate - População: Carta A1 - %ld x %ld - Carta B3 - Empate\n", A1popul, B3popul);
                }

                //area
                if (A1area > B3area) {
                    printf("Vitoria - Área: Carta A1 - %ld x %ld - Carta B3 - Derrota\n", A1area, B3area);
                } else if (A1area < B3area) {
                    printf("Derrota - Área: Carta A1 - %ld x %ld - Carta B3 - Vitoria\n", A1area, B3area);
                } else {
                    printf("Empate - Área: Carta A1 - %ld x %ld - Carta B3 - Empate\n", A1area, B3area);
                }

                //PIB
                if (A1pib > B3pib) {
                    printf("Vitoria - PIB: Carta A1 - %.2f x %.2f - Carta B3 - Derrota\n", A1pib, B3pib);
                } else if (A1pib < B3pib) {
                    printf("Derrota - PIB: Carta A1 - %.2f x %.2f - Carta B3 - Vitoria\n", A1pib, B3pib);
                } else {
                    printf("Empate - PIB: Carta A1 - %.2f x %.2f - Carta B3 - Empate\n", A1pib, B3pib);
                }

                //Pontos Tur
                if (A1turist > B3turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A1 - %d x %d - Carta B3 - Derrota\n", A1turist, B3turist);
                } else if (A1turist < B3turist) {
                    printf("Derrota - Pontos Turísticos: Carta A1 - %d x %d - Carta B3 - Vitoria\n", A1turist, B3turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A1 - %d x %d - Carta B3 - Empate\n", A1turist, B3turist);
                }

                //Dens Popul
                if (A1dens > B3dens) {
                    printf("Vitoria - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B3 - Derrota\n", A1dens, B3dens);
                } else if (A1dens < B3dens) {
                    printf("Derrota - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B3 - Vitoria\n", A1dens, B3dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B3\n", A1dens, B3dens);
                }

                //PIB Pcapita
                if (A1pcap > B3pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B3 - Derrota\n", A1pcap, B3pcap);
                } else if (A1pcap < B3pcap) {
                    printf("Derrota - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B3 - Vitoria\n", A1pcap, B3pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B3 - Empate\n", A1pcap, B3pcap);
                }
                break;

//#############################################################################################################################################################################

                case 4:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A1 - %s x %s - Carta B4\n", A1cidade, B4cidade);

                //Populacao
                if (A1popul > B4popul) {
                    printf("Vitoria - População: Carta A1 - %ld x %ld - Carta B4 - Derrota\n", A1popul, B4popul);
                } else if (A1popul < B4popul) {
                    printf("Derrota - População: Carta A1 - %ld x %ld - Carta B4 - Vitoria\n", A1popul, B4popul);
                } else {
                    printf("Empate - População: Carta A1 - %ld x %ld - Carta B4 - Empate\n", A1popul, B4popul);
                }

                //area
                if (A1area > B4area) {
                    printf("Vitoria - Área: Carta A1 - %ld x %ld - Carta B4 - Derrota\n", A1area, B4area);
                } else if (A1area < B4area) {
                    printf("Derrota - Área: Carta A1 - %ld x %ld - Carta B4 - Vitoria\n", A1area, B4area);
                } else {
                    printf("Empate - Área: Carta A1 - %ld x %ld - Carta B4 - Empate\n", A1area, B4area);
                }

                //PIB
                if (A1pib > B4pib) {
                    printf("Vitoria - PIB: Carta A1 - %.2f x %.2f - Carta B4 - Derrota\n", A1pib, B4pib);
                } else if (A1pib < B4pib) {
                    printf("Derrota - PIB: Carta A1 - %.2f x %.2f - Carta B4 - Vitoria\n", A1pib, B4pib);
                } else {
                    printf("Empate - PIB: Carta A1 - %.2f x %.2f - Carta B4 - Empate\n", A1pib, B4pib);
                }

                //Pontos Turísticos
                if (A1turist > B4turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A1 - %d x %d - Carta B4 - Derrota\n", A1turist, B4turist);
                } else if (A1turist < B4turist) {
                    printf("Derrota - Pontos Turísticos: Carta A1 - %d x %d - Carta B4 - Vitoria\n", A1turist, B4turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A1 - %d x %d - Carta B4 - Empate\n", A1turist, B4turist);
                }

                //Densidade Populacional
                if (A1dens > B4dens) {
                    printf("Vitoria - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B4 - Derrota\n", A1dens, B4dens);
                } else if (A1dens < B4dens) {
                    printf("Derrota - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B4 - Vitoria\n", A1dens, B4dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A1 - %.2f x %.2f - Carta B4\n", A1dens, B4dens);
                }

                //PIB Per Capita
                if (A1pcap > B4pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B4 - Derrota\n", A1pcap, B4pcap);
                } else if (A1pcap < B4pcap) {
                    printf("Derrota - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B4 - Vitoria\n", A1pcap, B4pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A1 - %.2f x %.2f - Carta B4 - Empate\n", A1pcap, B4pcap);
                }
                break;

                default:
                    break;
                }

        break;
       
//#############################################################################################################################################################################       
        case 2:
            switch (Mcarta)
            {
//############################################################################################################################################################################# 
            case 1:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A2 - %s x %s - Carta B1\n", A2cidade, B1cidade);

                //Populacao
                if (A2popul > B1popul) {
                    printf("Vitoria - População: Carta A2 - %ld x %ld - Carta B1 - Derrota\n", A2popul, B1popul);
                } else if (A2popul < B1popul) {
                    printf("Derrota - População: Carta A2 - %ld x %ld - Carta B1 - Vitoria\n", A2popul, B1popul);
                } else {
                    printf("Empate - População: Carta A2 - %ld x %ld - Carta B1 - Empate\n", A2popul, B1popul);
                }

                //area
                if (A2area > B1area) {
                    printf("Vitoria - Área: Carta A2 - %ld x %ld - Carta B1 - Derrota\n", A2area, B1area);
                } else if (A2area < B1area) {
                    printf("Derrota - Área: Carta A2 - %ld x %ld - Carta B1 - Vitoria\n", A2area, B1area);
                } else {
                    printf("Empate - Área: Carta A2 - %ld x %ld - Carta B1 - Empate\n", A2area, B1area);
                }

                //PIB
                if (A2pib > B1pib) {
                    printf("Vitoria - PIB: Carta A2 - %.2f x %.2f - Carta B1 - Derrota\n", A2pib, B1pib);
                } else if (A2pib < B1pib) {
                    printf("Derrota - PIB: Carta A2 - %.2f x %.2f - Carta B1 - Vitoria\n", A2pib, B1pib);
                } else {
                    printf("Empate - PIB: Carta A2 - %.2f x %.2f - Carta B1 - Empate\n", A2pib, B1pib);
                }

                //Pontos Tur
                if (A2turist > B1turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A2 - %d x %d - Carta B1 - Derrota\n", A2turist, B1turist);
                } else if (A2turist < B1turist) {
                    printf("Derrota - Pontos Turísticos: Carta A2 - %d x %d - Carta B1 - Vitoria\n", A2turist, B1turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A2 - %d x %d - Carta B1 - Empate\n", A2turist, B1turist);
                }

                //Dens Popul
                if (A2dens > B1dens) {
                    printf("Vitoria - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B1 - Derrota\n", A2dens, B1dens);
                } else if (A2dens < B1dens) {
                    printf("Derrota - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B1 - Vitoria\n", A2dens, B1dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B1\n", A2dens, B1dens);
                }

                //PIB Pcapita
                if (A2pcap > B1pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B1 - Derrota\n", A2pcap, B1pcap);
                } else if (A2pcap < B1pcap) {
                    printf("Derrota - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B1 - Vitoria\n", A2pcap, B1pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B1 - Empate\n", A2pcap, B1pcap);
                }
                break;         
               
               
               
                case 2:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A2 - %s x %s - Carta B2\n", A2cidade, B2cidade);

                //Populacao
                if (A2popul > B2popul) {
                    printf("Vitoria - População: Carta A2 - %ld x %ld - Carta B2 - Derrota\n", A2popul, B2popul);
                } else if (A2popul < B2popul) {
                    printf("Derrota - População: Carta A2 - %ld x %ld - Carta B2 - Vitoria\n", A2popul, B2popul);
                } else {
                    printf("Empate - População: Carta A2 - %ld x %ld - Carta B2 - Empate\n", A2popul, B2popul);
                }

                //area
                if (A2area > B2area) {
                    printf("Vitoria - Área: Carta A2 - %ld x %ld - Carta B2 - Derrota\n", A2area, B2area);
                } else if (A2area < B2area) {
                    printf("Derrota - Área: Carta A2 - %ld x %ld - Carta B2 - Vitoria\n", A2area, B2area);
                } else {
                    printf("Empate - Área: Carta A2 - %ld x %ld - Carta B2 - Empate\n", A2area, B2area);
                }

                //PIB
                if (A2pib > B2pib) {
                    printf("Vitoria - PIB: Carta A2 - %.2f x %.2f - Carta B2 - Derrota\n", A2pib, B2pib);
                } else if (A2pib < B2pib) {
                    printf("Derrota - PIB: Carta A2 - %.2f x %.2f - Carta B2 - Vitoria\n", A2pib, B2pib);
                } else {
                    printf("Empate - PIB: Carta A2 - %.2f x %.2f - Carta B2 - Empate\n", A2pib, B2pib);
                }

                //Pontos Tur
                if (A2turist > B2turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A2 - %d x %d - Carta B2 - Derrota\n", A2turist, B2turist);
                } else if (A2turist < B2turist) {
                    printf("Derrota - Pontos Turísticos: Carta A2 - %d x %d - Carta B2 - Vitoria\n", A2turist, B2turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A2 - %d x %d - Carta B2 - Empate\n", A2turist, B2turist);
                }

                //Dens Popul
                if (A2dens > B2dens) {
                    printf("Vitoria - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B2 - Derrota\n", A2dens, B2dens);
                } else if (A2dens < B2dens) {
                    printf("Derrota - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B2 - Vitoria\n", A2dens, B2dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B2\n", A2dens, B2dens);
                }

                //PIB Pcapita
                if (A2pcap > B2pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B2 - Derrota\n", A2pcap, B2pcap);
                } else if (A2pcap < B2pcap) {
                    printf("Derrota - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B2 - Vitoria\n", A2pcap, B2pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B2 - Empate\n", A2pcap, B2pcap);
                }
                break;


                case 3:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A2 - %s x %s - Carta B3\n", A2cidade, B3cidade);

                //Populacao
                if (A2popul > B3popul) {
                    printf("Vitoria - População: Carta A2 - %ld x %ld - Carta B3 - Derrota\n", A2popul, B3popul);
                } else if (A2popul < B3popul) {
                    printf("Derrota - População: Carta A2 - %ld x %ld - Carta B3 - Vitoria\n", A2popul, B3popul);
                } else {
                    printf("Empate - População: Carta A2 - %ld x %ld - Carta B3 - Empate\n", A2popul, B3popul);
                }

                //area
                if (A2area > B3area) {
                    printf("Vitoria - Área: Carta A2 - %ld x %ld - Carta B3 - Derrota\n", A2area, B3area);
                } else if (A2area < B3area) {
                    printf("Derrota - Área: Carta A2 - %ld x %ld - Carta B3 - Vitoria\n", A2area, B3area);
                } else {
                    printf("Empate - Área: Carta A2 - %ld x %ld - Carta B3 - Empate\n", A2area, B3area);
                }

                //PIB
                if (A2pib > B3pib) {
                    printf("Vitoria - PIB: Carta A2 - %.2f x %.2f - Carta B3 - Derrota\n", A2pib, B3pib);
                } else if (A2pib < B3pib) {
                    printf("Derrota - PIB: Carta A2 - %.2f x %.2f - Carta B3 - Vitoria\n", A2pib, B3pib);
                } else {
                    printf("Empate - PIB: Carta A2 - %.2f x %.2f - Carta B3 - Empate\n", A2pib, B3pib);
                }

                //Pontos Tur
                if (A2turist > B3turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A2 - %d x %d - Carta B3 - Derrota\n", A2turist, B3turist);
                } else if (A2turist < B3turist) {
                    printf("Derrota - Pontos Turísticos: Carta A2 - %d x %d - Carta B3 - Vitoria\n", A2turist, B3turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A2 - %d x %d - Carta B3 - Empate\n", A2turist, B3turist);
                }

                //Dens Popul
                if (A2dens > B3dens) {
                    printf("Vitoria - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B3 - Derrota\n", A2dens, B3dens);
                } else if (A2dens < B3dens) {
                    printf("Derrota - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B3 - Vitoria\n", A2dens, B3dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B3\n", A2dens, B3dens);
                }

                //PIB Pcapita
                if (A2pcap > B3pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B3 - Derrota\n", A2pcap, B3pcap);
                } else if (A2pcap < B3pcap) {
                    printf("Derrota - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B3 - Vitoria\n", A2pcap, B3pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B3 - Empate\n", A2pcap, B3pcap);
                }
                break;



                case 4:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A2 - %s x %s - Carta B4\n", A2cidade, B4cidade);

                //Populacao
                if (A2popul > B4popul) {
                    printf("Vitoria - População: Carta A2 - %ld x %ld - Carta B4 - Derrota\n", A2popul, B4popul);
                } else if (A2popul < B4popul) {
                    printf("Derrota - População: Carta A2 - %ld x %ld - Carta B4 - Vitoria\n", A2popul, B4popul);
                } else {
                    printf("Empate - População: Carta A2 - %ld x %ld - Carta B4 - Empate\n", A2popul, B4popul);
                }

                //area
                if (A2area > B4area) {
                    printf("Vitoria - Área: Carta A2 - %ld x %ld - Carta B4 - Derrota\n", A2area, B4area);
                } else if (A2area < B4area) {
                    printf("Derrota - Área: Carta A2 - %ld x %ld - Carta B4 - Vitoria\n", A2area, B4area);
                } else {
                    printf("Empate - Área: Carta A2 - %ld x %ld - Carta B4 - Empate\n", A2area, B4area);
                }

                //PIB
                if (A2pib > B4pib) {
                    printf("Vitoria - PIB: Carta A2 - %.2f x %.2f - Carta B4 - Derrota\n", A2pib, B4pib);
                } else if (A2pib < B4pib) {
                    printf("Derrota - PIB: Carta A2 - %.2f x %.2f - Carta B4 - Vitoria\n", A2pib, B4pib);
                } else {
                    printf("Empate - PIB: Carta A2 - %.2f x %.2f - Carta B4 - Empate\n", A2pib, B4pib);
                }

                //Pontos Turísticos
                if (A2turist > B4turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A2 - %d x %d - Carta B4 - Derrota\n", A2turist, B4turist);
                } else if (A2turist < B4turist) {
                    printf("Derrota - Pontos Turísticos: Carta A2 - %d x %d - Carta B4 - Vitoria\n", A2turist, B4turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A2 - %d x %d - Carta B4 - Empate\n", A2turist, B4turist);
                }

                //Densidade Populacional
                if (A2dens > B4dens) {
                    printf("Vitoria - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B4 - Derrota\n", A2dens, B4dens);
                } else if (A2dens < B4dens) {
                    printf("Derrota - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B4 - Vitoria\n", A2dens, B4dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A2 - %.2f x %.2f - Carta B4\n", A2dens, B4dens);
                }

                //PIB Per Capita
                if (A2pcap > B4pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B4 - Derrota\n", A2pcap, B4pcap);
                } else if (A2pcap < B4pcap) {
                    printf("Derrota - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B4 - Vitoria\n", A2pcap, B4pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A2 - %.2f x %.2f - Carta B4 - Empate\n", A2pcap, B4pcap);
                }
                break;

                default:
                    break;
                }
            break;
        
        
        
        
        case 3:
            switch (Mcarta)
            {
            case 1:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A3 - %s x %s - Carta B1\n", A3cidade, B1cidade);

                //Populacao
                if (A3popul > B1popul) {
                    printf("Vitoria - População: Carta A3 - %ld x %ld - Carta B1 - Derrota\n", A3popul, B1popul);
                } else if (A3popul < B1popul) {
                    printf("Derrota - População: Carta A3 - %ld x %ld - Carta B1 - Vitoria\n", A3popul, B1popul);
                } else {
                    printf("Empate - População: Carta A3 - %ld x %ld - Carta B1 - Empate\n", A3popul, B1popul);
                }

                //area
                if (A3area > B1area) {
                    printf("Vitoria - Área: Carta A3 - %ld x %ld - Carta B1 - Derrota\n", A3area, B1area);
                } else if (A3area < B1area) {
                    printf("Derrota - Área: Carta A3 - %ld x %ld - Carta B1 - Vitoria\n", A3area, B1area);
                } else {
                    printf("Empate - Área: Carta A3 - %ld x %ld - Carta B1 - Empate\n", A3area, B1area);
                }

                //PIB
                if (A3pib > B1pib) {
                    printf("Vitoria - PIB: Carta A3 - %.2f x %.2f - Carta B1 - Derrota\n", A3pib, B1pib);
                } else if (A3pib < B1pib) {
                    printf("Derrota - PIB: Carta A3 - %.2f x %.2f - Carta B1 - Vitoria\n", A3pib, B1pib);
                } else {
                    printf("Empate - PIB: Carta A3 - %.2f x %.2f - Carta B1 - Empate\n", A3pib, B1pib);
                }

                //Pontos Tur
                if (A3turist > B1turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A3 - %d x %d - Carta B1 - Derrota\n", A3turist, B1turist);
                } else if (A3turist < B1turist) {
                    printf("Derrota - Pontos Turísticos: Carta A3 - %d x %d - Carta B1 - Vitoria\n", A3turist, B1turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A3 - %d x %d - Carta B1 - Empate\n", A3turist, B1turist);
                }

                //Dens Popul
                if (A3dens > B1dens) {
                    printf("Vitoria - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B1 - Derrota\n", A3dens, B1dens);
                } else if (A3dens < B1dens) {
                    printf("Derrota - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B1 - Vitoria\n", A3dens, B1dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B1\n", A3dens, B1dens);
                }

                //PIB Pcapita
                if (A3pcap > B1pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B1 - Derrota\n", A3pcap, B1pcap);
                } else if (A3pcap < B1pcap) {
                    printf("Derrota - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B1 - Vitoria\n", A3pcap, B1pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B1 - Empate\n", A3pcap, B1pcap);
                }
                break;         
               
               
               
                case 2:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A3 - %s x %s - Carta B2\n", A3cidade, B2cidade);

                //Populacao
                if (A3popul > B2popul) {
                    printf("Vitoria - População: Carta A3 - %ld x %ld - Carta B2 - Derrota\n", A3popul, B2popul);
                } else if (A3popul < B2popul) {
                    printf("Derrota - População: Carta A3 - %ld x %ld - Carta B2 - Vitoria\n", A3popul, B2popul);
                } else {
                    printf("Empate - População: Carta A3 - %ld x %ld - Carta B2 - Empate\n", A3popul, B2popul);
                }

                //area
                if (A3area > B2area) {
                    printf("Vitoria - Área: Carta A3 - %ld x %ld - Carta B2 - Derrota\n", A3area, B2area);
                } else if (A3area < B2area) {
                    printf("Derrota - Área: Carta A3 - %ld x %ld - Carta B2 - Vitoria\n", A3area, B2area);
                } else {
                    printf("Empate - Área: Carta A3 - %ld x %ld - Carta B2 - Empate\n", A3area, B2area);
                }

                //PIB
                if (A3pib > B2pib) {
                    printf("Vitoria - PIB: Carta A3 - %.2f x %.2f - Carta B2 - Derrota\n", A3pib, B2pib);
                } else if (A3pib < B2pib) {
                    printf("Derrota - PIB: Carta A3 - %.2f x %.2f - Carta B2 - Vitoria\n", A3pib, B2pib);
                } else {
                    printf("Empate - PIB: Carta A3 - %.2f x %.2f - Carta B2 - Empate\n", A3pib, B2pib);
                }

                //Pontos Tur
                if (A3turist > B2turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A3 - %d x %d - Carta B2 - Derrota\n", A3turist, B2turist);
                } else if (A3turist < B2turist) {
                    printf("Derrota - Pontos Turísticos: Carta A3 - %d x %d - Carta B2 - Vitoria\n", A3turist, B2turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A3 - %d x %d - Carta B2 - Empate\n", A3turist, B2turist);
                }

                //Dens Popul
                if (A3dens > B2dens) {
                    printf("Vitoria - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B2 - Derrota\n", A3dens, B2dens);
                } else if (A3dens < B2dens) {
                    printf("Derrota - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B2 - Vitoria\n", A3dens, B2dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B2\n", A3dens, B2dens);
                }

                //PIB Pcapita
                if (A3pcap > B2pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B2 - Derrota\n", A3pcap, B2pcap);
                } else if (A3pcap < B2pcap) {
                    printf("Derrota - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B2 - Vitoria\n", A3pcap, B2pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B2 - Empate\n", A3pcap, B2pcap);
                }
                break;


                case 3:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A3 - %s x %s - Carta B3\n", A3cidade, B3cidade);

                //Populacao
                if (A3popul > B3popul) {
                    printf("Vitoria - População: Carta A3 - %ld x %ld - Carta B3 - Derrota\n", A3popul, B3popul);
                } else if (A3popul < B3popul) {
                    printf("Derrota - População: Carta A3 - %ld x %ld - Carta B3 - Vitoria\n", A3popul, B3popul);
                } else {
                    printf("Empate - População: Carta A3 - %ld x %ld - Carta B3 - Empate\n", A3popul, B3popul);
                }

                //area
                if (A3area > B3area) {
                    printf("Vitoria - Área: Carta A3 - %ld x %ld - Carta B3 - Derrota\n", A3area, B3area);
                } else if (A3area < B3area) {
                    printf("Derrota - Área: Carta A3 - %ld x %ld - Carta B3 - Vitoria\n", A3area, B3area);
                } else {
                    printf("Empate - Área: Carta A3 - %ld x %ld - Carta B3 - Empate\n", A3area, B3area);
                }

                //PIB
                if (A3pib > B3pib) {
                    printf("Vitoria - PIB: Carta A3 - %.2f x %.2f - Carta B3 - Derrota\n", A3pib, B3pib);
                } else if (A3pib < B3pib) {
                    printf("Derrota - PIB: Carta A3 - %.2f x %.2f - Carta B3 - Vitoria\n", A3pib, B3pib);
                } else {
                    printf("Empate - PIB: Carta A3 - %.2f x %.2f - Carta B3 - Empate\n", A3pib, B3pib);
                }

                //Pontos Tur
                if (A3turist > B3turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A3 - %d x %d - Carta B3 - Derrota\n", A3turist, B3turist);
                } else if (A3turist < B3turist) {
                    printf("Derrota - Pontos Turísticos: Carta A3 - %d x %d - Carta B3 - Vitoria\n", A3turist, B3turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A3 - %d x %d - Carta B3 - Empate\n", A3turist, B3turist);
                }

                //Dens Popul
                if (A3dens > B3dens) {
                    printf("Vitoria - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B3 - Derrota\n", A3dens, B3dens);
                } else if (A3dens < B3dens) {
                    printf("Derrota - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B3 - Vitoria\n", A3dens, B3dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B3\n", A3dens, B3dens);
                }

                //PIB Pcapita
                if (A3pcap > B3pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B3 - Derrota\n", A3pcap, B3pcap);
                } else if (A3pcap < B3pcap) {
                    printf("Derrota - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B3 - Vitoria\n", A3pcap, B3pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B3 - Empate\n", A3pcap, B3pcap);
                }
                break;



                case 4:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A3 - %s x %s - Carta B4\n", A3cidade, B4cidade);

                //Populacao
                if (A3popul > B4popul) {
                    printf("Vitoria - População: Carta A3 - %ld x %ld - Carta B4 - Derrota\n", A3popul, B4popul);
                } else if (A3popul < B4popul) {
                    printf("Derrota - População: Carta A3 - %ld x %ld - Carta B4 - Vitoria\n", A3popul, B4popul);
                } else {
                    printf("Empate - População: Carta A3 - %ld x %ld - Carta B4 - Empate\n", A3popul, B4popul);
                }

                //area
                if (A3area > B4area) {
                    printf("Vitoria - Área: Carta A3 - %ld x %ld - Carta B4 - Derrota\n", A3area, B4area);
                } else if (A3area < B4area) {
                    printf("Derrota - Área: Carta A3 - %ld x %ld - Carta B4 - Vitoria\n", A3area, B4area);
                } else {
                    printf("Empate - Área: Carta A3 - %ld x %ld - Carta B4 - Empate\n", A3area, B4area);
                }

                //PIB
                if (A3pib > B4pib) {
                    printf("Vitoria - PIB: Carta A3 - %.2f x %.2f - Carta B4 - Derrota\n", A3pib, B4pib);
                } else if (A3pib < B4pib) {
                    printf("Derrota - PIB: Carta A3 - %.2f x %.2f - Carta B4 - Vitoria\n", A3pib, B4pib);
                } else {
                    printf("Empate - PIB: Carta A3 - %.2f x %.2f - Carta B4 - Empate\n", A3pib, B4pib);
                }

                //Pontos Turísticos
                if (A3turist > B4turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A3 - %d x %d - Carta B4 - Derrota\n", A3turist, B4turist);
                } else if (A3turist < B4turist) {
                    printf("Derrota - Pontos Turísticos: Carta A3 - %d x %d - Carta B4 - Vitoria\n", A3turist, B4turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A3 - %d x %d - Carta B4 - Empate\n", A3turist, B4turist);
                }

                //Densidade Populacional
                if (A3dens > B4dens) {
                    printf("Vitoria - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B4 - Derrota\n", A3dens, B4dens);
                } else if (A3dens < B4dens) {
                    printf("Derrota - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B4 - Vitoria\n", A3dens, B4dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A3 - %.2f x %.2f - Carta B4\n", A3dens, B4dens);
                }

                //PIB Per Capita
                if (A3pcap > B4pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B4 - Derrota\n", A3pcap, B4pcap);
                } else if (A3pcap < B4pcap) {
                    printf("Derrota - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B4 - Vitoria\n", A3pcap, B4pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A3 - %.2f x %.2f - Carta B4 - Empate\n", A3pcap, B4pcap);
                }
                break;

                default:
                    break;
                }
            break;
        default:
            switch (Mcarta)
            {
            case 4:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A4 - %s x %s - Carta B1\n", A4cidade, B1cidade);

                //Populacao
                if (A4popul > B1popul) {
                    printf("Vitoria - População: Carta A4 - %ld x %ld - Carta B1 - Derrota\n", A4popul, B1popul);
                } else if (A4popul < B1popul) {
                    printf("Derrota - População: Carta A4 - %ld x %ld - Carta B1 - Vitoria\n", A4popul, B1popul);
                } else {
                    printf("Empate - População: Carta A4 - %ld x %ld - Carta B1 - Empate\n", A4popul, B1popul);
                }

                //area
                if (A4area > B1area) {
                    printf("Vitoria - Área: Carta A4 - %ld x %ld - Carta B1 - Derrota\n", A4area, B1area);
                } else if (A4area < B1area) {
                    printf("Derrota - Área: Carta A4 - %ld x %ld - Carta B1 - Vitoria\n", A4area, B1area);
                } else {
                    printf("Empate - Área: Carta A4 - %ld x %ld - Carta B1 - Empate\n", A4area, B1area);
                }

                //PIB
                if (A4pib > B1pib) {
                    printf("Vitoria - PIB: Carta A4 - %.2f x %.2f - Carta B1 - Derrota\n", A4pib, B1pib);
                } else if (A4pib < B1pib) {
                    printf("Derrota - PIB: Carta A4 - %.2f x %.2f - Carta B1 - Vitoria\n", A4pib, B1pib);
                } else {
                    printf("Empate - PIB: Carta A4 - %.2f x %.2f - Carta B1 - Empate\n", A4pib, B1pib);
                }

                //Pontos Tur
                if (A4turist > B1turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A4 - %d x %d - Carta B1 - Derrota\n", A4turist, B1turist);
                } else if (A4turist < B1turist) {
                    printf("Derrota - Pontos Turísticos: Carta A4 - %d x %d - Carta B1 - Vitoria\n", A4turist, B1turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A4 - %d x %d - Carta B1 - Empate\n", A4turist, B1turist);
                }

                //Dens Popul
                if (A4dens > B1dens) {
                    printf("Vitoria - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B1 - Derrota\n", A4dens, B1dens);
                } else if (A4dens < B1dens) {
                    printf("Derrota - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B1 - Vitoria\n", A4dens, B1dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B1\n", A4dens, B1dens);
                }

                //PIB Pcapita
                if (A4pcap > B1pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B1 - Derrota\n", A4pcap, B1pcap);
                } else if (A4pcap < B1pcap) {
                    printf("Derrota - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B1 - Vitoria\n", A4pcap, B1pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B1 - Empate\n", A4pcap, B1pcap);
                }
                break;         
               
               
               
                case 2:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A4 - %s x %s - Carta B2\n", A4cidade, B2cidade);

                //Populacao
                if (A4popul > B2popul) {
                    printf("Vitoria - População: Carta A4 - %ld x %ld - Carta B2 - Derrota\n", A4popul, B2popul);
                } else if (A4popul < B2popul) {
                    printf("Derrota - População: Carta A4 - %ld x %ld - Carta B2 - Vitoria\n", A4popul, B2popul);
                } else {
                    printf("Empate - População: Carta A4 - %ld x %ld - Carta B2 - Empate\n", A4popul, B2popul);
                }

                //area
                if (A4area > B2area) {
                    printf("Vitoria - Área: Carta A4 - %ld x %ld - Carta B2 - Derrota\n", A4area, B2area);
                } else if (A4area < B2area) {
                    printf("Derrota - Área: Carta A4 - %ld x %ld - Carta B2 - Vitoria\n", A4area, B2area);
                } else {
                    printf("Empate - Área: Carta A4 - %ld x %ld - Carta B2 - Empate\n", A4area, B2area);
                }

                //PIB
                if (A4pib > B2pib) {
                    printf("Vitoria - PIB: Carta A4 - %.2f x %.2f - Carta B2 - Derrota\n", A4pib, B2pib);
                } else if (A4pib < B2pib) {
                    printf("Derrota - PIB: Carta A4 - %.2f x %.2f - Carta B2 - Vitoria\n", A4pib, B2pib);
                } else {
                    printf("Empate - PIB: Carta A4 - %.2f x %.2f - Carta B2 - Empate\n", A4pib, B2pib);
                }

                //Pontos Tur
                if (A4turist > B2turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A4 - %d x %d - Carta B2 - Derrota\n", A4turist, B2turist);
                } else if (A4turist < B2turist) {
                    printf("Derrota - Pontos Turísticos: Carta A4 - %d x %d - Carta B2 - Vitoria\n", A4turist, B2turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A4 - %d x %d - Carta B2 - Empate\n", A4turist, B2turist);
                }

                //Dens Popul
                if (A4dens > B2dens) {
                    printf("Vitoria - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B2 - Derrota\n", A4dens, B2dens);
                } else if (A4dens < B2dens) {
                    printf("Derrota - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B2 - Vitoria\n", A4dens, B2dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B2\n", A4dens, B2dens);
                }

                //PIB Pcapita
                if (A4pcap > B2pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B2 - Derrota\n", A4pcap, B2pcap);
                } else if (A4pcap < B2pcap) {
                    printf("Derrota - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B2 - Vitoria\n", A4pcap, B2pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B2 - Empate\n", A4pcap, B2pcap);
                }
                break;


                case 3:
                printf("\n\t\t****** Jogador x Máquina ******\n");
                printf("\t\tCarta A4 - %s x %s - Carta B3\n", A4cidade, B3cidade);

                //Populacao
                if (A4popul > B3popul) {
                    printf("Vitoria - População: Carta A4 - %ld x %ld - Carta B3 - Derrota\n", A4popul, B3popul);
                } else if (A4popul < B3popul) {
                    printf("Derrota - População: Carta A4 - %ld x %ld - Carta B3 - Vitoria\n", A4popul, B3popul);
                } else {
                    printf("Empate - População: Carta A4 - %ld x %ld - Carta B3 - Empate\n", A4popul, B3popul);
                }

                //area
                if (A4area > B3area) {
                    printf("Vitoria - Área: Carta A4 - %ld x %ld - Carta B3 - Derrota\n", A4area, B3area);
                } else if (A4area < B3area) {
                    printf("Derrota - Área: Carta A4 - %ld x %ld - Carta B3 - Vitoria\n", A4area, B3area);
                } else {
                    printf("Empate - Área: Carta A4 - %ld x %ld - Carta B3 - Empate\n", A4area, B3area);
                }

                //PIB
                if (A4pib > B3pib) {
                    printf("Vitoria - PIB: Carta A4 - %.2f x %.2f - Carta B3 - Derrota\n", A4pib, B3pib);
                } else if (A4pib < B3pib) {
                    printf("Derrota - PIB: Carta A4 - %.2f x %.2f - Carta B3 - Vitoria\n", A4pib, B3pib);
                } else {
                    printf("Empate - PIB: Carta A4 - %.2f x %.2f - Carta B3 - Empate\n", A4pib, B3pib);
                }

                //Pontos Tur
                if (A4turist > B3turist) {
                    printf("Vitoria - Pontos Turísticos: Carta A4 - %d x %d - Carta B3 - Derrota\n", A4turist, B3turist);
                } else if (A4turist < B3turist) {
                    printf("Derrota - Pontos Turísticos: Carta A4 - %d x %d - Carta B3 - Vitoria\n", A4turist, B3turist);
                } else {
                    printf("Empate - Pontos Turísticos: Carta A4 - %d x %d - Carta B3 - Empate\n", A4turist, B3turist);
                }

                //Dens Popul
                if (A4dens > B3dens) {
                    printf("Vitoria - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B3 - Derrota\n", A4dens, B3dens);
                } else if (A4dens < B3dens) {
                    printf("Derrota - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B3 - Vitoria\n", A4dens, B3dens);
                } else {
                    printf("Empate - Densidade Populacional: Carta A4 - %.2f x %.2f - Carta B3\n", A4dens, B3dens);
                }

                //PIB Pcapita
                if (A4pcap > B3pcap) {
                    printf("Vitoria - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B3 - Derrota\n", A4pcap, B3pcap);
                } else if (A4pcap < B3pcap) {
                    printf("Derrota - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B3 - Vitoria\n", A4pcap, B3pcap);
                } else {
                    printf("Empate - PIB Per Capita: Carta A4 - %.2f x %.2f - Carta B3 - Empate\n", A4pcap, B3pcap);
                }
                break;



                default:
                    break;
                }
        break;
        }
    }else{
        printf("Opção Invalida! Comece novamente!! \n\n");
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
    
    // // Exibição dos Dados das Cartas:
    // // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
