#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char pais1[30], Aestado[30], A1cidade[30], A2cidade[30];
    int A1turist, A2turist;
    long int A1popul, A1area, A2popul, A2area;
    float A1pib, A1dens, A1pcap, A2pib, A2dens, A2pcap;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindo ao jogo de Super Trunfo!\n");
    printf("Vamos cadastrar as suas Cartas!\n");
    
    //Cadastro Base 1
    printf("Informe o Nome do Pais:\n");
    scanf("%29s", &pais1);
    printf("Informe o Estado:\n");
    scanf("%29s", Aestado);
    printf("\nAgora vamos cadastrar suas cartas!\n");
    //Carta1
    printf("CARTA A1\n");
    printf("Informe o nome da Cidade:\n");
    scanf("%29s",  A1cidade);
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
    //Apresentação
    printf("Carta A1 Cadastrada!\n");
    printf("\nPAIS: %s - %s\n", pais1, Aestado);
    printf("Carta A1 - Cidade: %s   População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    
    //Carta2
    printf("CARTA A2\n");
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
    //Apresentação
    printf("Carta A2 Cadastrada!\n");
    printf("\nPAIS: %s - %s\n", pais1, Aestado);
    printf("Carta A1 - Cidade: %s   População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A1cidade, A1popul, A1area, A1pib, A1turist, A1dens, A1pcap);
    printf("Carta A2 - Cidade: %s   População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d Densidade: %.2f Per Capta: %.2f\n", A2cidade, A2popul, A2area, A2pib, A2turist, A2dens, A2pcap);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
