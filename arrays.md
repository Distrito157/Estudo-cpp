# Índice
+ [Arrays](#arrays)
+ [Arrays bidimensionais/matriz](#matriz)

# <a name="arrays"></a>Arrays no C++
Um array em C++ é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo em uma sequência contigua de memória. Os arrays têm um tamanho fixo, determinado durante a sua declaração, e cada elemento do array pode ser acessado através de um indice.

Aqui está um exemplo simples de declaração e uso de um array de inteiros em C++:
```C++
#include <iostream>

int main() {
  // Declaração de um array de inteiros com tamanho 5
  int numeros[5];

  // Atribuição de valores aos elementos do array
  numeros[0] = 10;
  numeros[1] = 20;
  numeros[2] = 30;
  numeros[3] = 40;
  numeros[4] = 50;

  // Acessando e exibindo os valores dos elementos do array
  std::cout << "Elemento 0: " << numeros[0] << std::endl;
  std::cout << "Elemento 1: " << numeros[1] << std::endl;
  std::cout << "Elemento 2: " << numeros[2] << std::endl;
  std::cout << "Elemento 3: " << numeros[3] << std::endl;
  std::cout << "Elemento 4: " << numeros[4] << std::endl;

  return 0;
}
```
Nesse exemplo, declaramos um array de inteiros chamado "numeros" com tamanho 5. Os elementos do array são acessados usando a notação de colchetes e o indice desejado, começando a partir do 0. Em seguida, atribuímos valores a cada elemento do array.

Em seguida, exibimos os valores dos elementos do array usando a função `cout` para impressão no console.

Saída esperada:
```YAML
Elemento 0: 10
Elemento 1: 20
Elemento 2: 30
Elemento 3: 40
Elemento 4: 50
```
É importante observar que o indice de um array em C++ deve estar dentro dos limites do tamanho declarado. Se tentarmos acessar ou atribuir um valor fora dos limites do array, podemos obter um comportamento indefinido ou um erro de tempo de execução.

Além disso, podemos usar loops, como o `for`, para percorrer os elementos de um array:
```C++
int numeros[5] = {10, 20, 30, 40, 50};

// Usando um loop para exibir os elementos do array
for (int i = 0; i < 5; i++) {
  std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
}
```
Nesse exemplo, inicializamos o array `numeros` com os valores durante a declaração. Em seguida, usamos um loop `for` para iterar sobre os elementos do array e exibir seus valores.

Saída esperada:
```YAML
Elemento 0: 10
Elemento 1: 20
Elemento 2: 30
Elemento 3: 40
Elemento 4: 50
```
Esses exemplos ilustram o uso básico de arrays em C++. Eles são úteis para armazenar e manipular coleções de elementos do mesmo tipo de forma eficiente. Lembre-se de que os arrays têm tamanho fixo e os indices começam em 0. É importante garantir que os indices usados estejam dentro dos limites do array para evitar erros.

# <a name="matriz"></a>Array bidimensional
Um array bidimensional em C++ é uma estrutura de dados que armazena elementos em uma grade de duas dimensões. Ele é composto por linhas e colunas, formando uma matriz retangular. Cada elemento da matriz é acessado através de um par de indices, um para a linha e outro para a coluna.

Aqui está um exemplo simples de declaração e uso de uma matriz de inteiros em C++:
```C++
#include <iostream>

int main() {
  // Declaração de uma matriz de inteiros com 3 linhas e 4 colunas
  int matriz[3][4];

  // Atribuição de valores aos elementos da matriz
  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[0][2] = 3;
  matriz[0][3] = 4;
  matriz[1][0] = 5;
  matriz[1][1] = 6;
  matriz[1][2] = 7;
  matriz[1][3] = 8;
  matriz[2][0] = 9;
  matriz[2][1] = 10;
  matriz[2][2] = 11;
  matriz[2][3] = 12;

  // Acessando e exibindo os valores dos elementos da matriz
  std::cout << "Elemento [0][0]: " << matriz[0][0] << std::endl;
  std::cout << "Elemento [0][1]: " << matriz[0][1] << std::endl;
  std::cout << "Elemento [0][2]: " << matriz[0][2] << std::endl;
  std::cout << "Elemento [0][3]: " << matriz[0][3] << std::endl;
  std::cout << "Elemento [1][0]: " << matriz[1][0] << std::endl;
  std::cout << "Elemento [1][1]: " << matriz[1][1] << std::endl;
  std::cout << "Elemento [1][2]: " << matriz[1][2] << std::endl;
  std::cout << "Elemento [1][3]: " << matriz[1][3] << std::endl;
  std::cout << "Elemento [2][0]: " << matriz[2][0] << std::endl;
  std::cout << "Elemento [2][1]: " << matriz[2][1] << std::endl;
  std::cout << "Elemento [2][2]: " << matriz[2][2] << std::endl;
  std::cout << "Elemento [2][3]: " << matriz[2][3] << std::endl;

  return 0;
}
```
Neste exemplo, declaramos uma matriz de inteiros chamada "matriz" com 3 linhas e 4 colunas. Os elementos da matriz são acessados usando dois pares de colchetes e os índices desejados. Em seguida, atribuímos valores a cada elemento da matriz.

Em seguida, exibimos os valores dos elementos da matriz usando a função `cout` para impressão no console.

Saída esperada:
```YAML
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [0][3]: 4
Elemento [1][0]: 5
Elemento [1][1]: 6
Elemento [1][2]: 7
Elemento [1][3]: 8
Elemento [2][0]: 9
Elemento [2][1]: 10
Elemento [2][2]: 11
Elemento [2][3]: 12
```
Uma forma conveniente de inicializar uma matriz é usar uma lista de inicialização:
```C++
int matriz[3][4] = {
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12}
};
```
Nesse exemplo declaramos e inicializamos uma matriz de inteiros com os mesmos valores do exemplo anterior. As chaves `{}` internas representam as linhas da matriz, e os valores separados por vírgulas representam os elementos de cada linha.

Os arrays bidimensionais são úteis para armazenar e manipular dados estruturados em forma de grade, como matrizes, tabuleiros de jogos, dados tabulares, imagens e muito mais. Você pode realizar operações, como iteração e cálculos, usando loops aninhados para percorrer as linhas e colunas da matriz.
```C++
// Iteração sobre os elementos da matriz
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 4; j++) {
    std::cout << "Elemento [" << i << "][" << j << "]: " << matriz[i][j] << std::endl;
  }
}
```
Nesse exemplo, usamos dois loops `for` aninhados para percorrer todos os elementos da matriz. A cada iteração, exibimos o valor do elemento e seus índices.

Saída esperada:
```YAML
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [0][3]: 4
Elemento [1][0]: 5
Elemento [1][1]: 6
Elemento [1][2]: 7
Elemento [1][3]: 8
Elemento [2][0]: 9
Elemento [2][1]: 10
Elemento [2][2]: 11
Elemento [2][3]: 12
```
Esses exemplos ilustram o uso básico de arrays bidimensionais em C++. As matrizes podem ser declaradas com diferentes tamanhos e tipos de elementos, e você pode realizar várias operações com elas, como leitura, escrita, iteração e cálculos.
