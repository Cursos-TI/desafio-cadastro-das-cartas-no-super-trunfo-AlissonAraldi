#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char pais1[30], estadoA[30], cidadeA1[30];
    int turisA1;
    long int populA1, areaA1;
    float pibA1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindo ao jogo de Super Trunfo!\n");
    printf("Vamos cadastrar as suas Cartas!\n");
    
    //Cadastro Base 1
    printf("Informe o Nome do Pais:\n");
    scanf("%29s", &pais1);
    printf("Informe o Estado:\n");
    scanf("%29s", estadoA);
    printf("\nAgora vamos cadastrar suas cartas!\n");
    //Carta1
    printf("CARTA A1");
    printf("Informe o nome da Cidade:\n");
    scanf("%29s", &cidadeA1);
    printf("informe o total de população de %s:\n ", cidadeA1);
    scanf("%ld", &populA1);
    printf("informe a Area total de %s:\n ", cidadeA1);
    scanf("%ld", &areaA1);
    printf("informe o total do PIB de %s:\n ", cidadeA1);
    scanf("%f", &pibA1);
    printf("informe o total de pontos turisticos de %s:\n ", cidadeA1);
    scanf("%d", &turisA1);
    //Cauculos
    
    //Apresentação
    printf("Carta A1 Cadastrada!\n");
    printf("\nPAIS: %s - %s\n", pais1, estadoA);
    printf("Carta A1 - Cidade: %s   População: %ld  Area: %ld   PIB: %.2f   Pontos T.: %d\n", cidadeA1, populA1, areaA1, pibA1, turisA1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
