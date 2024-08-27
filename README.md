
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


## Como Executar

1. Compile o código com um compilador C, por exemplo: `gcc -o cadastro_cidades main.c`
2. Execute o programa: `./cadastro_cidades`

## Licença

Este projeto está licenciado sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

