# Documentação do Código

## 1. Funções e Algoritmos

- **`swap(int& a, int& b)`**: Troca os valores de duas variáveis.

- **Insertion Sort**: Ordena o vetor usando o método Insertion Sort. Ele insere cada número na posição correta de um subvetor já ordenado.

- **Bubble Sort**: Ordena o vetor usando o Bubble Sort. Esse algoritmo compara elementos adjacentes e troca-os se estiverem na ordem errada, repetindo o processo até que o vetor esteja ordenado.

- **Selection Sort**: Ordena o vetor com o Selection Sort. Este método encontra o menor elemento e o coloca na posição correta, repetindo o processo para o restante do vetor.

## 2. Escolha do Algoritmo

O programa escolhe o algoritmo de ordenação com base no número de elementos:

- **Até 20 elementos**: Usa Insertion Sort.
- **21 a 30 elementos**: Usa Bubble Sort.
- **Mais de 30 elementos**: Usa Selection Sort.

## 3. Funcionamento do Programa

1. O programa pede ao usuário para informar quantos elementos deseja ordenar, garantindo que o número seja positivo e não maior que 100.
2. Em seguida, solicita que o usuário insira os valores do vetor, verificando se são não negativos.
3. Com base na quantidade de elementos, o programa escolhe um algoritmo de ordenação e o executa.
4. Por fim, exibe os valores ordenados.

## 4. Tratamento de Erros

- O programa verifica se o número de elementos é válido. Se não for, pede um novo valor.
- Para os valores do vetor, se o usuário inserir um número negativo, solicita um novo valor até que um número não negativo seja fornecido.
