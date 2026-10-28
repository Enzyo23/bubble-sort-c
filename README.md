# Bubble Sort em C: Organizando Dados

Programa em C que aplica o método de ordenação **Bubble Sort** em um cenário do dia a dia: os preços de bebidas de uma loja de conveniência.

Projeto da Experiência Prática IV da disciplina de Algoritmos e Pensamento Computacional (ADS).

## O que o programa faz

1. Guarda 10 preços em um vetor `float`, fora de ordem.
2. Exibe os preços originais.
3. Ordena do menor para o maior e exibe o resultado.
4. Ordena do maior para o menor e exibe o resultado.

Todas as saídas aparecem em uma mesma execução, com os valores formatados com duas casas decimais.

## Como funciona o Bubble Sort

O algoritmo compara pares de vizinhos e troca de posição quando estão na ordem errada. A cada rodada, o maior valor "sobe" para o final do vetor, como uma bolha. A troca usa uma variável temporária (`temp`) para não perder nenhum dos dois valores.

A ordem decrescente usa a mesma lógica, mudando apenas o sinal da comparação no `if` (de `>` para `<`).

## Como executar

Precisa do compilador GCC instalado.

```
gcc main.c -o main
.\main
```

## Exemplo de saída

```
Precos originais:
5.00
5.50
4.50
...
Precos ajustados em ordem crescente:
4.00
4.50
4.80
...
Precos ajustados em ordem decrescente:
7.50
7.00
6.00
...
```

## Conceitos praticados

- Vetores e o tipo `float`
- Laços `for` aninhados
- Condicional `if`
- Troca de valores com variável temporária
- Formatação de saída com `printf` (`%.2f`)

## Autor

Enzyo Moura da Nóbrega  
GitHub: [Enzyo23](https://github.com/Enzyo23)