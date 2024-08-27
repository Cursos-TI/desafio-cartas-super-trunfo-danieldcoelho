
# Desafio cartas super-trunfo danieldcoelho

Este projeto é um sistema simples de cadastro de cidades em C, que permite registrar informações sobre cidades, como estado, nome, população, área, PIB e pontos turísticos.

## Estrutura do Projeto

O projeto é composto por uma estrutura `Carta` que armazena as informações da cidade e funções para cadastrar e exibir os dados.

### Estrutura `Carta`

```c
typedef struct {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;
```

### Funções Principais

- **gerarCodCidades**: Gera um código único para cada cidade baseada no estado.
- **cadastrarCarta**: Lê os dados da cidade e os armazena na estrutura `Carta`.
- **exibirCarta**: Exibe os dados cadastrados da cidade.

### Exemplo de Uso

```c
#include <stdio.h>

// Definição das variáveis
typedef struct {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Define valor inicial das variáveis
Carta carta = {
    .populacao = 0,
    .area = 0.0,
    .pib = 0.0,
    .pontosTuristicos = 0
};

void gerarCodCidades(char estado, char* codigo) {
    static int contadorCidades[4] = {0}; // contador de cidades por estado
    int indiceEstado = estado - 'A'; // índice do estado na tabela ASCII

    if (contadorCidades[indiceEstado] < 4) { // define o limite de 4 cidades por estado
        contadorCidades[indiceEstado]++; // acrescenta o contador de cidades

        sprintf(codigo, "%c%02d", estado, contadorCidades[indiceEstado]); // formata a string para o padrão do código ex: A01
    } else {
        printf("Erro: Estado %c já atingiu o limite de 4 cidades.\n", estado);
    }
}

void cadastrarCarta(Carta *carta) {
    printf("Digite o estado (1 caractere): ");
    scanf(" %c", &carta->estado);
    getchar(); // adicionado para consumir o caractere de newline
    
    printf("Digite o nome da cidade: ");
    fgets(carta->nomeCidade, 50, stdin); // fgets para contornar o problema do scanf

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);
    
    printf("Digite a área em km²: ");
    scanf("%f", &carta->area);
    
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(Carta carta) {
    char codigos[4];
    gerarCodCidades(carta.estado, codigos); // chama a função para gerar o código único da carta
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", codigos);
    printf("Nome da Cidade: %s", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta;
    cadastrarCarta(&carta);
    exibirCarta(carta);
    
    return 0;
}
```

## Como Executar

1. Compile o código com um compilador C, por exemplo: `gcc -o cadastro_cidades main.c`
2. Execute o programa: `./cadastro_cidades`

## Licença

Este projeto está licenciado sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

