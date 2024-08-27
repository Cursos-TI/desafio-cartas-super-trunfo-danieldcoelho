#include <stdio.h>


//definica das variaveis 
typedef struct {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

//define valor inicial das variaveis
Carta carta = {
    .populacao = 0,
    .area = 0.0,
    .pib = 0.0,
    .pontosTuristicos = 0
};


void gerarCodCidades(char estado, char* codigo) {
    static int contadorCidades[4] = {0}; // contador de cidades por estado
    int indiceEstado = estado - 'A'; // indice do estado na tabela ASCII

    if (contadorCidades[indiceEstado] < 4) { // define o limete de 4 cidades por estado
        contadorCidades[indiceEstado]++; //acrecenta o contador de cidades

        sprintf(codigo, "%c%02d", estado, contadorCidades[indiceEstado]); //formata a strig para o padrao do codigo ex: A01
    } else {
        printf("Erro: Estado %c já atingiu o limite de 4 cidades.\n", estado);
    }
}

//funcao para ler os dados para o cadastro da carta
void cadastrarCarta(Carta *carta) {
    printf("Digite o estado (1 caractere): ");
    scanf(" %c", &carta->estado);
    getchar(); // adicionado para consumir o caractere de newline
    
    printf("Digite o nome da cidade: ");
    fgets(carta->nomeCidade, 50, stdin); // fgets para contornar  o problema do scanf com strings

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);
    
    printf("Digite a área em km²: ");
    scanf("%f", &carta->area);
    
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// funcao para imprimir os dados da carta cadastrada
void exibirCarta(Carta carta) {
    char codigos[4];
    gerarCodCidades(carta.estado, codigos); //chama a funcao para gerar o codigo unico da carta
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", codigos);
    printf("Nome da Cidade: %s", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}


//chamada das funcoes para execucao do jogo
int main() {
    Carta carta;
    cadastrarCarta(&carta);
    exibirCarta(carta);
    
    return 0;
}