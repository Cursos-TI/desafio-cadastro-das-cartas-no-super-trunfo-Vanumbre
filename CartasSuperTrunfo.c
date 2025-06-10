#include <stdio.h> // Biblioteca padrão de entrada e saída

// Nível Novato
// Aparentemente tudo funciona :-)

int main() {
    // Declaração das variáveis para armazenar informações da primeira cidade
    int n_pontos_t, populacao; // Número de pontos turísticos e população da 1ª cidade
    float area, pib;           // Área e PIB da 1ª cidade
    char nome[50], estado[50], codigo[50]; // Nome, estado e código da 1ª cidade

    // Declaração das variáveis para armazenar informações da segunda cidade
    int n_pontos_t_2, populacao_2;
    float area_2, pib_2;
    char nome_2[50], estado_2[50], codigo_2[50];

    // Início do cadastro das cartas de cidades
    printf("A seguir voce vai descrever duas cidades a partir de suas caracteristicas para transforma-las em cartas \n");

    // Cadastro da primeira carta
    printf("Vamos comecar com a primeira carta: \n");

    // Entrada do estado da cidade
    printf("Primeiro digite a abreviaçao do estado em que ela reside: \n");
    scanf("%s", &estado);

    // Entrada do código da cidade (composto por estado + número)
    printf("Em seguida use um numero qualquer em frente a abreviacao para criar o codigo da sua carta: \n");
    scanf("%s", &codigo);

    // Entrada do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    // Entrada da população total da cidade
    printf("Digite a populacão total: \n");
    scanf("%d", &populacao);

    // Entrada da área total da cidade
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    // Entrada do PIB da cidade
    printf("Digite o pib bruto dela: \n");
    scanf("%f", &pib);

    // Entrada do número de pontos turísticos
    printf("Para finalizar, digite a quantidade de pontos turisticos: \n");
    scanf("%d", &n_pontos_t);

    // Cadastro da segunda carta
    printf("Agora vamos para a segunda carta: \n");

    printf("Primeiro digite a abreviaçao do estado em que ela reside: \n");
    scanf("%s", &estado_2);

    printf("Em seguida use um numero qualquer em frente a abreviacao para criar o codigo da sua carta: \n");
    scanf("%s", &codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_2);

    printf("Digite a populacão total: \n");
    scanf("%d", &populacao_2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area_2);

    printf("Digite o pib bruto dela: \n");
    scanf("%f", &pib_2);

    printf("Para finalizar, digite a quantidade de pontos turisticos: \n");
    scanf("%d", &n_pontos_t_2);

    // Impressão dos dados armazenados da primeira cidade
    printf("Aqui estao as informacoes da primeira carta \n");
    printf("Estado: %s \nCodigo: %s \nNome: %s \nPopulacao: %d \nArea: %f \nPib: %f \nPontos:", 
        estado, codigo, nome, populacao, area, pib, n_pontos_t);
    
    // Impressão dos dados armazenados da segunda cidade
    printf("Aqui estao as informacoes da segunda carta \n");
    printf("Estado: %s \nCodigo: %s \nNome: %s \nPopulacao: %d \nArea: %f \nPib: %f \nPontos:", 
        estado_2, codigo_2, nome_2, populacao_2, area_2, pib_2, n_pontos_t_2);

    return 0; // Finalização do programa
}
