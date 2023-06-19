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
