
# Desafio cartas super-trunfo danieldcoelho

# jogo Super Trunfo com o tema países

Este projeto é um jogo de cartas em C que permite cadastrar informações sobre cidades, comparando-as com base em critérios como densidade populacional, PIB per capita, área e número de pontos turísticos. O objetivo é determinar qual cidade possui as melhores características com base nos critérios estabelecidos.

## Funcionalidades

O sistema permitirá ao usuário comparar cartas de cidades com base nas propriedades inseridas manualmente e nas propriedades calculadas, como densidade populacional e PIB per capita. Utilizando operadores relacionais, o sistema determinará a carta vencedora.

## Estrutura da Carta

Cada carta contém as seguintes informações:

- **Estado**: Um caractere representando o estado.
- **Código**: Código gerado automaticamente para identificar a carta.
- **Nome da Cidade**: Nome da cidade.
- **População**: População da cidade.
- **Área**: Área da cidade em km².
- **PIB**: Produto Interno Bruto em bilhões de reais.
- **Número de Pontos Turísticos**: Quantidade de pontos turísticos na cidade.
- **Densidade Populacional**: Calculada automaticamente (população/área).
- **PIB per Capita**: Calculado automaticamente (PIB/população).
- **Super Poder**: Um valor calculado com base em todos os atributos da cidade.

## Funções Principais

- `clearVars()`: Inicializa os valores da carta.
- `densiPopula()`: Calcula a densidade populacional.
- `PIBpercapita()`: Calcula o PIB per capita.
- `calcularSuperPoder()`: Calcula o "super poder" da carta com base nos atributos.
- `gerarCodCidades()`: Gera o código da cidade com base no estado.
- `cadastrarCarta()`: Lê os dados da cidade e preenche a carta.
- `exibirCarta()`: Exibe os dados da carta cadastrada.
- `compararCartas()`: Compara duas cartas e determina a vencedora.

## Como Executar

1. Compile o código com o GCC:

   ```bash
   gcc -o jogo_de_cartas jogo_de_cartas.c
   ```

2. Execute o programa:

   ```bash
   ./jogo_de_cartas
   ```

## Exemplo de Uso

Após a execução, o programa solicitará a entrada dos dados de duas cartas. Para cada carta, insira o estado, nome da cidade, população apenas a casa do milhão, área em Km², PIB apenas a casa do bilhão, e o número de pontos turísticos. Ao final, o programa exibirá as características de cada cidade e determinará qual carta é a vencedora.

## Requisitos

- GCC ou outro compilador C compatível.

## Contribuições


## Licença

Este projeto é de código aberto e está licenciado sob a [MIT License](LICENSE).

---

