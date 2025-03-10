#include <stdio.h>


int main() {
    printf("CartasSuperTrunfo.c!\n");
    printf("novo commit!\n");

    char Estado [50];
    char Codigodacarta;
    char Cidade;
    int Populacao;
    float Área;
    float  Pib;
    int Pontos, Turisticos;

    printf("digite o nome do estado:\n");
    scanf("%c", &Estado);

    printf("digite o codigo da carta:\n");
    scanf("%c", &"A01");

    printf("digite o nome da Cidade:\n");
    scanf("%c", &Cidade);

    printf("digite o numero o numero de Habitantes:\n");
    scanf("%d", &Populacao);

    printf("digite a Área:\n");
    scanf("%f", &Área);

    printf("digite o Pib:\n");
    scanf("%f", &Pib);

    printf("digite os pontos, turisticos:\n");
    scanf("%d", &Pontos,Turisticos);


    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
